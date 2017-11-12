#ifndef ANDROIDP7ZIP_COMMAND_H
#define ANDROIDP7ZIP_COMMAND_H

#include <string>
#include <vector>
#include "p7zip/CPP/Common/ArchiveFileMetadata.h"

#ifdef __cplusplus
extern "C" {
#endif

#include <MyTypes.h>

int MY_CDECL main(
#ifndef _WIN32
        int numArgs, char *args[]
#endif
);

int executeCommand(const char* cmd);

int MY_CDECL executeListCommandMain(
#ifndef _WIN32
        int numArgs,
        char *args[],
        std::vector<ArchiveFileMetadata> &outFileList
#endif
);

int executeListCommand(const char* command, std::vector<ArchiveFileMetadata> &outFileList);

#ifdef __cplusplus
}
#endif

#endif
