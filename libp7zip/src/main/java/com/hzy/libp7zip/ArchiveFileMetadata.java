/*
 * A libp7zip wrapper library for Android, adapted from AndroidP7zip library written by
 * hzy3774 and huzongyao: https://github.com/hzy3774/AndroidP7zip.
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 */
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
