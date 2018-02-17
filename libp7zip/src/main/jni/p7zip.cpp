#include <ndkhelper.h>
#include <7zip/MyVersion.h>
#include <cmd/command.h>
#include <vector>
#include <string>
using namespace std;

#define MY_P7ZIP_VERSION_INFO "7zVersion: "MY_VERSION"\n"MY_COPYRIGHT"\nDate: "MY_DATE

JNIEXPORT jstring JNICALL
Java_com_hzy_libp7zip_P7ZipApi_get7zVersionInfo(JNIEnv *env, jclass type) {
    return env->NewStringUTF(MY_P7ZIP_VERSION_INFO);
}

JNIEXPORT jint JNICALL
Java_com_hzy_libp7zip_P7ZipApi_executeGenericCommand(JNIEnv *env, jclass type, jstring command_) {
    const char *command = env->GetStringUTFChars(command_, 0);
    LOGI("CMD:[%s]", command);
    int ret = executeGenericCommand(command);
    env->ReleaseStringUTFChars(command_, command);
    return ret;
}

JNIEXPORT jobjectArray JNICALL
Java_com_hzy_libp7zip_P7ZipApi_executeListCommand(JNIEnv *env, jclass type, jstring command_) {
    const char* command = env->GetStringUTFChars(command_, 0);

    vector<ArchiveFileMetadata> outFileList;
    executeListCommand(command, outFileList);

    jclass archiveFileMetadataClass = env->FindClass("com/hzy/libp7zip/ArchiveFileMetadata");
    jmethodID archiveFileMetadataConstructor = env->GetMethodID(archiveFileMetadataClass, "<init>", "(Ljava/lang/String;J)V");
    jobjectArray outArray = env->NewObjectArray(outFileList.size(), archiveFileMetadataClass, NULL);

    int i;
    for (i = 0; i < outFileList.size(); i++) {
        jstring pagePath = env->NewStringUTF(outFileList[i].path.c_str());
        jobject archiveFileMetaData = env->NewObject(archiveFileMetadataClass, archiveFileMetadataConstructor, pagePath, (jlong) outFileList[i].fileSize);
        env->SetObjectArrayElement(outArray, i, archiveFileMetaData);
        // Need to clean up local objects created in this loop, or else a "local reference table overflow (max=512)" error can be thrown.
        // Cleaning up these references will (surprisingly) not affect the data in the outArray.
        env->DeleteLocalRef(pagePath);
        env->DeleteLocalRef(archiveFileMetaData);
    }

    env->ReleaseStringUTFChars(command_, command);
    return outArray;
}
