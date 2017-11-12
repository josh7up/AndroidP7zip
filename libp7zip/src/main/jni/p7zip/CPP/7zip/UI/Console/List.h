// List.h

#ifndef __LIST_H
#define __LIST_H

#include "../../../Common/Wildcard.h"

#include "../Common/LoadCodecs.h"
#include <string>
#include <vector>
#include "p7zip/CPP/Common/ArchiveFileMetadata.h"

using namespace std;

HRESULT ListArchives(CCodecs *codecs,
    const CObjectVector<COpenType> &types,
    const CIntVector &excludedFormats,
    bool stdInMode,
    UStringVector &archivePaths, UStringVector &archivePathsFull,
    bool processAltStreams, bool showAltStreams,
    const NWildcard::CCensorNode &wildcardCensor,
    bool enableHeaders, bool techMode,
    #ifndef _NO_CRYPTO
    bool &passwordEnabled, UString &password,
    #endif
    #ifndef _SFX
    const CObjectVector<CProperty> *props,
    #endif
    UInt64 &errors,
    UInt64 &numWarnings);


HRESULT ListFiles(CCodecs *codecs,
                 const CObjectVector<COpenType> &types,
                 const CIntVector &excludedFormats,
                 bool stdInMode,
                 UStringVector &archivePaths, UStringVector &archivePathsFull,
                 bool processAltStreams, bool showAltStreams,
                 const NWildcard::CCensorNode &wildcardCensor,
                 bool enableHeaders, bool techMode,
                 #ifndef _NO_CRYPTO
                 bool &passwordEnabled, UString &password,
                 #endif
                 #ifndef _SFX
                 const CObjectVector<CProperty> *props,
                 #endif
                 UInt64 &errors,
                 UInt64 &numWarnings,
                 vector<ArchiveFileMetadata> &outFileList);

#endif
