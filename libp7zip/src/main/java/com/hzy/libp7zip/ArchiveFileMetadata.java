package com.hzy.libp7zip;

public class ArchiveFileMetadata {

    private final String filePath;

    private final long fileSize;

    public ArchiveFileMetadata(String filePath, long fileSize) {
        this.filePath = filePath;
        this.fileSize = fileSize;
    }

    public String getFilePath() {
        return filePath;
    }

    public long getFileSize() {
        return fileSize;
    }

    @Override
    public String toString() {
        return "ArchiveFileMetadata{" + "filePath='" + filePath + '\'' + ", fileSize=" + fileSize + '}';
    }

    @Override
    public boolean equals(Object o) {
        if (this == o) {
            return true;
        }
        if (o == null || getClass() != o.getClass()) {
            return false;
        }

        ArchiveFileMetadata that = (ArchiveFileMetadata) o;

        if (fileSize != that.fileSize) {
            return false;
        }
        return filePath != null ? filePath.equals(that.filePath) : that.filePath == null;

    }

    @Override
    public int hashCode() {
        int result = filePath != null ? filePath.hashCode() : 0;
        result = 31 * result + (int) (fileSize ^ (fileSize >>> 32));
        return result;
    }
}
