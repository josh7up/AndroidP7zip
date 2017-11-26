# For more information about using CMake with Android Studio, read the
# documentation: https://d.android.com/studio/projects/add-native-code.html

# Sets the minimum version of CMake required to build the native library.

cmake_minimum_required(VERSION 3.4.1)

# Creates and names a library, sets it as either STATIC
# or SHARED, and provides the relative paths to its source code.
# You can define multiple libraries, and CMake builds them for you.
# Gradle automatically packages shared libraries with your APK.

add_library(
    # Sets the name of the library.
    p7zip

    # Sets the library as a shared library.
    SHARED

    # Provides a relative path to your source file(s).
    src/main/jni/cmd/command.cpp
    src/main/jni/p7zip/C/7zBuf2.c
    src/main/jni/p7zip/C/7zCrc.c
    src/main/jni/p7zip/C/7zCrcOpt.c
    src/main/jni/p7zip/C/7zStream.c
    src/main/jni/p7zip/C/Aes.c
    src/main/jni/p7zip/C/Alloc.c
    src/main/jni/p7zip/C/Bcj2.c
    src/main/jni/p7zip/C/Bcj2Enc.c
    src/main/jni/p7zip/C/Blake2s.c
    src/main/jni/p7zip/C/Bra.c
    src/main/jni/p7zip/C/Bra86.c
    src/main/jni/p7zip/C/BraIA64.c
    src/main/jni/p7zip/C/BwtSort.c
    src/main/jni/p7zip/C/CpuArch.c
    src/main/jni/p7zip/C/Delta.c
    src/main/jni/p7zip/C/HuffEnc.c
    src/main/jni/p7zip/C/LzFind.c
    src/main/jni/p7zip/C/LzFindMt.c
    src/main/jni/p7zip/C/Lzma2Dec.c
    src/main/jni/p7zip/C/Lzma2Enc.c
    src/main/jni/p7zip/C/Lzma86Dec.c
    src/main/jni/p7zip/C/Lzma86Enc.c
    src/main/jni/p7zip/C/LzmaDec.c
    src/main/jni/p7zip/C/LzmaEnc.c
    src/main/jni/p7zip/C/MtCoder.c
    src/main/jni/p7zip/C/Ppmd7.c
    src/main/jni/p7zip/C/Ppmd7Dec.c
    src/main/jni/p7zip/C/Ppmd7Enc.c
    src/main/jni/p7zip/C/Ppmd8.c
    src/main/jni/p7zip/C/Ppmd8Dec.c
    src/main/jni/p7zip/C/Ppmd8Enc.c
    src/main/jni/p7zip/C/Sha1.c
    src/main/jni/p7zip/C/Sha256.c
    src/main/jni/p7zip/C/Sort.c
    src/main/jni/p7zip/C/Threads.c
    src/main/jni/p7zip/C/Xz.c
    src/main/jni/p7zip/C/XzCrc64.c
    src/main/jni/p7zip/C/XzCrc64Opt.c
    src/main/jni/p7zip/C/XzDec.c
    src/main/jni/p7zip/C/XzEnc.c
    src/main/jni/p7zip/C/XzIn.c
    src/main/jni/p7zip/CPP/7zip/Archive/7z/7zCompressionMode.cpp
    src/main/jni/p7zip/CPP/7zip/Archive/7z/7zDecode.cpp
    src/main/jni/p7zip/CPP/7zip/Archive/7z/7zEncode.cpp
    src/main/jni/p7zip/CPP/7zip/Archive/7z/7zExtract.cpp
    src/main/jni/p7zip/CPP/7zip/Archive/7z/7zFolderInStream.cpp
    src/main/jni/p7zip/CPP/7zip/Archive/7z/7zHandler.cpp
    src/main/jni/p7zip/CPP/7zip/Archive/7z/7zHandlerOut.cpp
    src/main/jni/p7zip/CPP/7zip/Archive/7z/7zHeader.cpp
    src/main/jni/p7zip/CPP/7zip/Archive/7z/7zIn.cpp
    src/main/jni/p7zip/CPP/7zip/Archive/7z/7zOut.cpp
    src/main/jni/p7zip/CPP/7zip/Archive/7z/7zProperties.cpp
    src/main/jni/p7zip/CPP/7zip/Archive/7z/7zRegister.cpp
    src/main/jni/p7zip/CPP/7zip/Archive/7z/7zSpecStream.cpp
    src/main/jni/p7zip/CPP/7zip/Archive/7z/7zUpdate.cpp
    src/main/jni/p7zip/CPP/7zip/Archive/ApmHandler.cpp
    src/main/jni/p7zip/CPP/7zip/Archive/ArHandler.cpp
    src/main/jni/p7zip/CPP/7zip/Archive/ArjHandler.cpp
    src/main/jni/p7zip/CPP/7zip/Archive/Bz2Handler.cpp
    src/main/jni/p7zip/CPP/7zip/Archive/Cab/CabBlockInStream.cpp
    src/main/jni/p7zip/CPP/7zip/Archive/Cab/CabHandler.cpp
    src/main/jni/p7zip/CPP/7zip/Archive/Cab/CabHeader.cpp
    src/main/jni/p7zip/CPP/7zip/Archive/Cab/CabIn.cpp
    src/main/jni/p7zip/CPP/7zip/Archive/Cab/CabRegister.cpp
    src/main/jni/p7zip/CPP/7zip/Archive/Chm/ChmHandler.cpp
    src/main/jni/p7zip/CPP/7zip/Archive/Chm/ChmIn.cpp
    src/main/jni/p7zip/CPP/7zip/Archive/ComHandler.cpp
    src/main/jni/p7zip/CPP/7zip/Archive/Common/CoderMixer2.cpp
    src/main/jni/p7zip/CPP/7zip/Archive/Common/DummyOutStream.cpp
    src/main/jni/p7zip/CPP/7zip/Archive/Common/FindSignature.cpp
    src/main/jni/p7zip/CPP/7zip/Archive/Common/HandlerOut.cpp
    src/main/jni/p7zip/CPP/7zip/Archive/Common/InStreamWithCRC.cpp
    src/main/jni/p7zip/CPP/7zip/Archive/Common/ItemNameUtils.cpp
    src/main/jni/p7zip/CPP/7zip/Archive/Common/MultiStream.cpp
    src/main/jni/p7zip/CPP/7zip/Archive/Common/OutStreamWithCRC.cpp
    src/main/jni/p7zip/CPP/7zip/Archive/Common/OutStreamWithSha1.cpp
    src/main/jni/p7zip/CPP/7zip/Archive/Common/ParseProperties.cpp
    src/main/jni/p7zip/CPP/7zip/Archive/CpioHandler.cpp
    src/main/jni/p7zip/CPP/7zip/Archive/CramfsHandler.cpp
    src/main/jni/p7zip/CPP/7zip/Archive/DeflateProps.cpp
    src/main/jni/p7zip/CPP/7zip/Archive/DmgHandler.cpp
    src/main/jni/p7zip/CPP/7zip/Archive/ElfHandler.cpp
    src/main/jni/p7zip/CPP/7zip/Archive/ExtHandler.cpp
    src/main/jni/p7zip/CPP/7zip/Archive/FatHandler.cpp
    src/main/jni/p7zip/CPP/7zip/Archive/FlvHandler.cpp
    src/main/jni/p7zip/CPP/7zip/Archive/GptHandler.cpp
    src/main/jni/p7zip/CPP/7zip/Archive/GzHandler.cpp
    src/main/jni/p7zip/CPP/7zip/Archive/HandlerCont.cpp
    src/main/jni/p7zip/CPP/7zip/Archive/HfsHandler.cpp
    src/main/jni/p7zip/CPP/7zip/Archive/IhexHandler.cpp
    src/main/jni/p7zip/CPP/7zip/Archive/Iso/IsoHandler.cpp
    src/main/jni/p7zip/CPP/7zip/Archive/Iso/IsoHeader.cpp
    src/main/jni/p7zip/CPP/7zip/Archive/Iso/IsoIn.cpp
    src/main/jni/p7zip/CPP/7zip/Archive/Iso/IsoRegister.cpp
    src/main/jni/p7zip/CPP/7zip/Archive/LzhHandler.cpp
    src/main/jni/p7zip/CPP/7zip/Archive/LzmaHandler.cpp
    src/main/jni/p7zip/CPP/7zip/Archive/MachoHandler.cpp
    src/main/jni/p7zip/CPP/7zip/Archive/MbrHandler.cpp
    src/main/jni/p7zip/CPP/7zip/Archive/MslzHandler.cpp
    src/main/jni/p7zip/CPP/7zip/Archive/MubHandler.cpp
    src/main/jni/p7zip/CPP/7zip/Archive/Nsis/NsisDecode.cpp
    src/main/jni/p7zip/CPP/7zip/Archive/Nsis/NsisHandler.cpp
    src/main/jni/p7zip/CPP/7zip/Archive/Nsis/NsisIn.cpp
    src/main/jni/p7zip/CPP/7zip/Archive/Nsis/NsisRegister.cpp
    src/main/jni/p7zip/CPP/7zip/Archive/NtfsHandler.cpp
    src/main/jni/p7zip/CPP/7zip/Archive/PeHandler.cpp
    src/main/jni/p7zip/CPP/7zip/Archive/PpmdHandler.cpp
    src/main/jni/p7zip/CPP/7zip/Archive/QcowHandler.cpp
    src/main/jni/p7zip/CPP/7zip/Archive/Rar/Rar5Handler.cpp
    src/main/jni/p7zip/CPP/7zip/Archive/Rar/RarHandler.cpp
    src/main/jni/p7zip/CPP/7zip/Archive/RpmHandler.cpp
    src/main/jni/p7zip/CPP/7zip/Archive/SplitHandler.cpp
    src/main/jni/p7zip/CPP/7zip/Archive/SquashfsHandler.cpp
    src/main/jni/p7zip/CPP/7zip/Archive/SwfHandler.cpp
    src/main/jni/p7zip/CPP/7zip/Archive/Tar/TarHandler.cpp
    src/main/jni/p7zip/CPP/7zip/Archive/Tar/TarHandlerOut.cpp
    src/main/jni/p7zip/CPP/7zip/Archive/Tar/TarHeader.cpp
    src/main/jni/p7zip/CPP/7zip/Archive/Tar/TarIn.cpp
    src/main/jni/p7zip/CPP/7zip/Archive/Tar/TarOut.cpp
    src/main/jni/p7zip/CPP/7zip/Archive/Tar/TarRegister.cpp
    src/main/jni/p7zip/CPP/7zip/Archive/Tar/TarUpdate.cpp
    src/main/jni/p7zip/CPP/7zip/Archive/Udf/UdfHandler.cpp
    src/main/jni/p7zip/CPP/7zip/Archive/Udf/UdfIn.cpp
    src/main/jni/p7zip/CPP/7zip/Archive/UefiHandler.cpp
    src/main/jni/p7zip/CPP/7zip/Archive/VdiHandler.cpp
    src/main/jni/p7zip/CPP/7zip/Archive/VhdHandler.cpp
    src/main/jni/p7zip/CPP/7zip/Archive/VmdkHandler.cpp
    src/main/jni/p7zip/CPP/7zip/Archive/Wim/WimHandler.cpp
    src/main/jni/p7zip/CPP/7zip/Archive/Wim/WimHandlerOut.cpp
    src/main/jni/p7zip/CPP/7zip/Archive/Wim/WimIn.cpp
    src/main/jni/p7zip/CPP/7zip/Archive/Wim/WimRegister.cpp
    src/main/jni/p7zip/CPP/7zip/Archive/XarHandler.cpp
    src/main/jni/p7zip/CPP/7zip/Archive/XzHandler.cpp
    src/main/jni/p7zip/CPP/7zip/Archive/ZHandler.cpp
    src/main/jni/p7zip/CPP/7zip/Archive/Zip/ZipAddCommon.cpp
    src/main/jni/p7zip/CPP/7zip/Archive/Zip/ZipHandler.cpp
    src/main/jni/p7zip/CPP/7zip/Archive/Zip/ZipHandlerOut.cpp
    src/main/jni/p7zip/CPP/7zip/Archive/Zip/ZipIn.cpp
    src/main/jni/p7zip/CPP/7zip/Archive/Zip/ZipItem.cpp
    src/main/jni/p7zip/CPP/7zip/Archive/Zip/ZipOut.cpp
    src/main/jni/p7zip/CPP/7zip/Archive/Zip/ZipRegister.cpp
    src/main/jni/p7zip/CPP/7zip/Archive/Zip/ZipUpdate.cpp
    src/main/jni/p7zip/CPP/7zip/Common/CreateCoder.cpp
    src/main/jni/p7zip/CPP/7zip/Common/CWrappers.cpp
    src/main/jni/p7zip/CPP/7zip/Common/FilePathAutoRename.cpp
    src/main/jni/p7zip/CPP/7zip/Common/FileStreams.cpp
    src/main/jni/p7zip/CPP/7zip/Common/FilterCoder.cpp
    src/main/jni/p7zip/CPP/7zip/Common/InBuffer.cpp
    src/main/jni/p7zip/CPP/7zip/Common/InOutTempBuffer.cpp
    src/main/jni/p7zip/CPP/7zip/Common/LimitedStreams.cpp
    src/main/jni/p7zip/CPP/7zip/Common/MemBlocks.cpp
    src/main/jni/p7zip/CPP/7zip/Common/MethodId.cpp
    src/main/jni/p7zip/CPP/7zip/Common/MethodProps.cpp
    src/main/jni/p7zip/CPP/7zip/Common/OffsetStream.cpp
    src/main/jni/p7zip/CPP/7zip/Common/OutBuffer.cpp
    src/main/jni/p7zip/CPP/7zip/Common/OutMemStream.cpp
    src/main/jni/p7zip/CPP/7zip/Common/ProgressMt.cpp
    src/main/jni/p7zip/CPP/7zip/Common/ProgressUtils.cpp
    src/main/jni/p7zip/CPP/7zip/Common/PropId.cpp
    src/main/jni/p7zip/CPP/7zip/Common/StreamBinder.cpp
    src/main/jni/p7zip/CPP/7zip/Common/StreamObjects.cpp
    src/main/jni/p7zip/CPP/7zip/Common/StreamUtils.cpp
    src/main/jni/p7zip/CPP/7zip/Common/UniqBlocks.cpp
    src/main/jni/p7zip/CPP/7zip/Common/VirtThread.cpp
    src/main/jni/p7zip/CPP/7zip/Compress/Bcj2Coder.cpp
    src/main/jni/p7zip/CPP/7zip/Compress/Bcj2Register.cpp
    src/main/jni/p7zip/CPP/7zip/Compress/BcjCoder.cpp
    src/main/jni/p7zip/CPP/7zip/Compress/BcjRegister.cpp
    src/main/jni/p7zip/CPP/7zip/Compress/BitlDecoder.cpp
    src/main/jni/p7zip/CPP/7zip/Compress/BranchMisc.cpp
    src/main/jni/p7zip/CPP/7zip/Compress/BranchRegister.cpp
    src/main/jni/p7zip/CPP/7zip/Compress/ByteSwap.cpp
    src/main/jni/p7zip/CPP/7zip/Compress/BZip2Crc.cpp
    src/main/jni/p7zip/CPP/7zip/Compress/BZip2Decoder.cpp
    src/main/jni/p7zip/CPP/7zip/Compress/BZip2Encoder.cpp
    src/main/jni/p7zip/CPP/7zip/Compress/BZip2Register.cpp
    src/main/jni/p7zip/CPP/7zip/Compress/CodecExports.cpp
    src/main/jni/p7zip/CPP/7zip/Compress/CopyCoder.cpp
    src/main/jni/p7zip/CPP/7zip/Compress/CopyRegister.cpp
    src/main/jni/p7zip/CPP/7zip/Compress/Deflate64Register.cpp
    src/main/jni/p7zip/CPP/7zip/Compress/DeflateDecoder.cpp
    src/main/jni/p7zip/CPP/7zip/Compress/DeflateEncoder.cpp
    src/main/jni/p7zip/CPP/7zip/Compress/DeflateRegister.cpp
    src/main/jni/p7zip/CPP/7zip/Compress/DeltaFilter.cpp
    src/main/jni/p7zip/CPP/7zip/Compress/ImplodeDecoder.cpp
    src/main/jni/p7zip/CPP/7zip/Compress/ImplodeHuffmanDecoder.cpp
    src/main/jni/p7zip/CPP/7zip/Compress/LzhDecoder.cpp
    src/main/jni/p7zip/CPP/7zip/Compress/Lzma2Decoder.cpp
    src/main/jni/p7zip/CPP/7zip/Compress/Lzma2Encoder.cpp
    src/main/jni/p7zip/CPP/7zip/Compress/Lzma2Register.cpp
    src/main/jni/p7zip/CPP/7zip/Compress/LzmaDecoder.cpp
    src/main/jni/p7zip/CPP/7zip/Compress/LzmaEncoder.cpp
    src/main/jni/p7zip/CPP/7zip/Compress/LzmaRegister.cpp
    src/main/jni/p7zip/CPP/7zip/Compress/LzmsDecoder.cpp
    src/main/jni/p7zip/CPP/7zip/Compress/LzOutWindow.cpp
    src/main/jni/p7zip/CPP/7zip/Compress/LzxDecoder.cpp
    src/main/jni/p7zip/CPP/7zip/Compress/PpmdDecoder.cpp
    src/main/jni/p7zip/CPP/7zip/Compress/PpmdEncoder.cpp
    src/main/jni/p7zip/CPP/7zip/Compress/PpmdRegister.cpp
    src/main/jni/p7zip/CPP/7zip/Compress/PpmdZip.cpp
    src/main/jni/p7zip/CPP/7zip/Compress/QuantumDecoder.cpp
    src/main/jni/p7zip/CPP/7zip/Compress/Rar1Decoder.cpp
    src/main/jni/p7zip/CPP/7zip/Compress/Rar2Decoder.cpp
    src/main/jni/p7zip/CPP/7zip/Compress/Rar3Decoder.cpp
    src/main/jni/p7zip/CPP/7zip/Compress/Rar3Vm.cpp
    src/main/jni/p7zip/CPP/7zip/Compress/Rar5Decoder.cpp
    src/main/jni/p7zip/CPP/7zip/Compress/RarCodecsRegister.cpp
    src/main/jni/p7zip/CPP/7zip/Compress/ShrinkDecoder.cpp
    src/main/jni/p7zip/CPP/7zip/Compress/XpressDecoder.cpp
    src/main/jni/p7zip/CPP/7zip/Compress/ZDecoder.cpp
    src/main/jni/p7zip/CPP/7zip/Compress/ZlibDecoder.cpp
    src/main/jni/p7zip/CPP/7zip/Compress/ZlibEncoder.cpp
    src/main/jni/p7zip/CPP/7zip/Crypto/7zAes.cpp
    src/main/jni/p7zip/CPP/7zip/Crypto/7zAesRegister.cpp
    src/main/jni/p7zip/CPP/7zip/Crypto/HmacSha1.cpp
    src/main/jni/p7zip/CPP/7zip/Crypto/HmacSha256.cpp
    src/main/jni/p7zip/CPP/7zip/Crypto/MyAes.cpp
    src/main/jni/p7zip/CPP/7zip/Crypto/MyAesReg.cpp
    src/main/jni/p7zip/CPP/7zip/Crypto/Pbkdf2HmacSha1.cpp
    src/main/jni/p7zip/CPP/7zip/Crypto/RandGen.cpp
    src/main/jni/p7zip/CPP/7zip/Crypto/Rar20Crypto.cpp
    src/main/jni/p7zip/CPP/7zip/Crypto/Rar5Aes.cpp
    src/main/jni/p7zip/CPP/7zip/Crypto/RarAes.cpp
    src/main/jni/p7zip/CPP/7zip/Crypto/WzAes.cpp
    src/main/jni/p7zip/CPP/7zip/Crypto/ZipCrypto.cpp
    src/main/jni/p7zip/CPP/7zip/Crypto/ZipStrong.cpp
    src/main/jni/p7zip/CPP/7zip/UI/Common/ArchiveCommandLine.cpp
    src/main/jni/p7zip/CPP/7zip/UI/Common/ArchiveExtractCallback.cpp
    src/main/jni/p7zip/CPP/7zip/UI/Common/ArchiveName.cpp
    src/main/jni/p7zip/CPP/7zip/UI/Common/ArchiveOpenCallback.cpp
    src/main/jni/p7zip/CPP/7zip/UI/Common/Bench.cpp
    src/main/jni/p7zip/CPP/7zip/UI/Common/DefaultName.cpp
    src/main/jni/p7zip/CPP/7zip/UI/Common/EnumDirItems.cpp
    src/main/jni/p7zip/CPP/7zip/UI/Common/Extract.cpp
    src/main/jni/p7zip/CPP/7zip/UI/Common/ExtractingFilePath.cpp
    src/main/jni/p7zip/CPP/7zip/UI/Common/HashCalc.cpp
    src/main/jni/p7zip/CPP/7zip/UI/Common/LoadCodecs.cpp
    src/main/jni/p7zip/CPP/7zip/UI/Common/OpenArchive.cpp
    src/main/jni/p7zip/CPP/7zip/UI/Common/PropIDUtils.cpp
    src/main/jni/p7zip/CPP/7zip/UI/Common/SetProperties.cpp
    src/main/jni/p7zip/CPP/7zip/UI/Common/SortUtils.cpp
    src/main/jni/p7zip/CPP/7zip/UI/Common/TempFiles.cpp
    src/main/jni/p7zip/CPP/7zip/UI/Common/Update.cpp
    src/main/jni/p7zip/CPP/7zip/UI/Common/UpdateAction.cpp
    src/main/jni/p7zip/CPP/7zip/UI/Common/UpdateCallback.cpp
    src/main/jni/p7zip/CPP/7zip/UI/Common/UpdatePair.cpp
    src/main/jni/p7zip/CPP/7zip/UI/Common/UpdateProduce.cpp
    src/main/jni/p7zip/CPP/7zip/UI/Console/BenchCon.cpp
    src/main/jni/p7zip/CPP/7zip/UI/Console/ConsoleClose.cpp
    src/main/jni/p7zip/CPP/7zip/UI/Console/ExtractCallbackConsole.cpp
    src/main/jni/p7zip/CPP/7zip/UI/Console/HashCon.cpp
    src/main/jni/p7zip/CPP/7zip/UI/Console/List.cpp
    src/main/jni/p7zip/CPP/7zip/UI/Console/Main.cpp
    src/main/jni/p7zip/CPP/7zip/UI/Console/MainAr.cpp
    src/main/jni/p7zip/CPP/7zip/UI/Console/OpenCallbackConsole.cpp
    src/main/jni/p7zip/CPP/7zip/UI/Console/PercentPrinter.cpp
    src/main/jni/p7zip/CPP/7zip/UI/Console/UpdateCallbackConsole.cpp
    src/main/jni/p7zip/CPP/7zip/UI/Console/UserInputUtils.cpp
    src/main/jni/p7zip/CPP/Common/C_FileIO.cpp
    src/main/jni/p7zip/CPP/Common/CommandLineParser.cpp
    src/main/jni/p7zip/CPP/Common/CRC.cpp
    src/main/jni/p7zip/CPP/Common/CrcReg.cpp
    src/main/jni/p7zip/CPP/Common/DynLimBuf.cpp
    src/main/jni/p7zip/CPP/Common/IntToString.cpp
    src/main/jni/p7zip/CPP/Common/Lang.cpp
    src/main/jni/p7zip/CPP/Common/ListFileUtils.cpp
    src/main/jni/p7zip/CPP/Common/MyMap.cpp
    src/main/jni/p7zip/CPP/Common/MyString.cpp
    src/main/jni/p7zip/CPP/Common/MyVector.cpp
    src/main/jni/p7zip/CPP/Common/MyWindows.cpp
    src/main/jni/p7zip/CPP/Common/MyXml.cpp
    src/main/jni/p7zip/CPP/Common/NewHandler.cpp
    src/main/jni/p7zip/CPP/Common/Sha1Reg.cpp
    src/main/jni/p7zip/CPP/Common/Sha256Reg.cpp
    src/main/jni/p7zip/CPP/Common/StdInStream.cpp
    src/main/jni/p7zip/CPP/Common/StdOutStream.cpp
    src/main/jni/p7zip/CPP/Common/StringConvert.cpp
    src/main/jni/p7zip/CPP/Common/StringToInt.cpp
    src/main/jni/p7zip/CPP/Common/TextConfig.cpp
    src/main/jni/p7zip/CPP/Common/UTFConvert.cpp
    src/main/jni/p7zip/CPP/Common/Wildcard.cpp
    src/main/jni/p7zip/CPP/Common/XzCrc64Reg.cpp
    src/main/jni/p7zip/CPP/myWindows/myAddExeFlag.cpp
    src/main/jni/p7zip/CPP/myWindows/mySplitCommandLine.cpp
    src/main/jni/p7zip/CPP/myWindows/wine_date_and_time.cpp
    src/main/jni/p7zip/CPP/Windows/DLL.cpp
    src/main/jni/p7zip/CPP/Windows/ErrorMsg.cpp
    src/main/jni/p7zip/CPP/Windows/FileDir.cpp
    src/main/jni/p7zip/CPP/Windows/FileFind.cpp
    src/main/jni/p7zip/CPP/Windows/FileIO.cpp
    src/main/jni/p7zip/CPP/Windows/FileName.cpp
    src/main/jni/p7zip/CPP/Windows/PropVariant.cpp
    src/main/jni/p7zip/CPP/Windows/PropVariantConv.cpp
    src/main/jni/p7zip/CPP/Windows/PropVariantUtils.cpp
    src/main/jni/p7zip/CPP/Windows/Synchronization.cpp
    src/main/jni/p7zip/CPP/Windows/System.cpp
    src/main/jni/p7zip/CPP/Windows/TimeUtils.cpp
    src/main/jni/p7zip.cpp
    src/main/jni/str2args/str2args.cpp
)

# Searches for a specified prebuilt library and stores the path as a
# variable. Because CMake includes system libraries in the search path by
# default, you only need to specify the name of the public NDK library
# you want to add. CMake verifies that the library exists before
# completing its build.

find_library( # Sets the name of the path variable.
              log-lib

              # Specifies the name of the NDK library that
              # you want CMake to locate.
              log )

# Specifies libraries CMake should link to your target library. You
# can link multiple libraries, such as libraries you define in this
# build script, prebuilt third-party libraries, or system libraries.

target_link_libraries( # Specifies the target library.
                       p7zip

                       # Links the target library to the log library
                       # included in the NDK.
                       ${log-lib} )