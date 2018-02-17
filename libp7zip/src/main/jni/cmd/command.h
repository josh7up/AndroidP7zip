#ifndef ANDROIDP7ZIP_COMMAND_H
#define ANDROIDP7ZIP_COMMAND_H

#include <string>
#include <vector>
#include "p7zip/CPP/Common/ArchiveFileMetadata.h"

#ifdef __cplusplus
extern "C" {
#endif

#include <MyTypes.h>

int executeGenericCommand(const char* cmd);

int MY_CDECL executeGenericCommandMain(
#ifndef _WIN32
        int numArgs, char *args[]
#endif
);

int executeListCommand(const char* command, std::vector<ArchiveFileMetadata> &outFileList);

int MY_CDECL executeListCommandMain(
#ifndef _WIN32
        int numArgs,
        char *args[],
        std::vector<ArchiveFileMetadata> &outFileList
#endif
);

#ifdef __cplusplus
}
#endif

#endif
