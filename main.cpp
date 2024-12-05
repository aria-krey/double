#include <cstdint>
#include <iostream>
#include <fstream>

struct FileRecordHeader
{
    char signature[4];        // Смещение 0x00
    uint16_t updateOffset;    // Смещение 0x04
    uint16_t updateSize;      // Смещение 0x06
    uint64_t logFileSeqNum;   // Смещение 0x08
    uint16_t seqNumber;       // Смещение 0x10
    uint16_t hardLinkCount;   // Смещение 0x12
    uint16_t firstAttrOffset; // Смещение 0x14
    uint16_t flags;           // Смещение 0x16
    uint32_t usedSize;        // Смещение 0x18
    uint32_t allocatedSize;   // Смещение 0x1C
    uint64_t baseFileRef;     // Смещение 0x20
    uint16_t nextAttrID;      // Смещение 0x28
    uint16_t padding;         // Смещение 0x2A
    uint32_t mftRecordNum;    // Смещение 0x2C
};
