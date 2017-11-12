package com.hzy.p7zip.app.adapter;

import android.support.v7.widget.RecyclerView;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.TextView;

import com.hzy.libp7zip.ArchiveFileMetadata;
import com.hzy.p7zip.app.R;

import java.util.List;

public class ArchiveListItemAdapter extends RecyclerView.Adapter<ArchiveListItemAdapter.ViewHolder> {

    private List<ArchiveFileMetadata> values;

    public ArchiveListItemAdapter(List<ArchiveFileMetadata> values) {
        this.values = values;
    }

    public class ViewHolder extends RecyclerView.ViewHolder {
        TextView nameTextView;
        TextView sizeTextView;
        public View layout;

        ViewHolder(View v) {
            super(v);
            layout = v;
            nameTextView = v.findViewById(R.id.entryPath);
            sizeTextView = v.findViewById(R.id.entrySize);
        }
    }

    @Override
    public ArchiveListItemAdapter.ViewHolder onCreateViewHolder(ViewGroup parent, int viewType) {
        LayoutInflater inflater = LayoutInflater.from(parent.getContext());
        View v = inflater.inflate(R.layout.archive_list_item, parent, false);
        return new ViewHolder(v);
    }

    @Override
    public void onBindViewHolder(ViewHolder holder, final int position) {
        ArchiveFileMetadata archiveFileMetadata = values.get(position);
        holder.nameTextView.setText(archiveFileMetadata.getFilePath());
        holder.sizeTextView.setText(String.valueOf(archiveFileMetadata.getFileSize()));
    }

    @Override
    public int getItemCount() {
        return values.size();
    }
}