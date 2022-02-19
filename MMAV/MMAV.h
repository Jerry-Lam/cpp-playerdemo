#pragma once

extern "C" {
#include <libavformat/avformat.h>
}

class MMAVPacket {
public:
};

class MMAVReader {
public:
  MMAVReader();
  ~MMAVReader();

  int Open(const char *path);
  int Close();

  int Read(MMAVPacket *packet);

private:
  AVFormatContext *formatCtx = nullptr;
};