#include "MMAV.h"
#include <cstdlib>
#include <libavformat/avformat.h>

MMAVReader::MMAVReader() { formatCtx = avformat_alloc_context(); };
MMAVReader::~MMAVReader() {
  if (formatCtx != nullptr) {
    avformat_free_context(formatCtx);
    formatCtx = nullptr;
  }
};

int MMAVReader::Open(const char *path) { 
    return EXIT_SUCCESS; };
int MMAVReader::Close() { return EXIT_SUCCESS; };

int MMAVReader::Read(MMAVPacket *packet) { return EXIT_SUCCESS; };