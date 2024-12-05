#include <cstdint>
#include <iostream>
#include <fstream>

struct FileRecordHeader
{
    char signature[4];        // �������� 0x00
    uint16_t updateOffset;    // �������� 0x04
    uint16_t updateSize;      // �������� 0x06
    uint64_t logFileSeqNum;   // �������� 0x08
    uint16_t seqNumber;       // �������� 0x10
    uint16_t hardLinkCount;   // �������� 0x12
    uint16_t firstAttrOffset; // �������� 0x14
    uint16_t flags;           // �������� 0x16
    uint32_t usedSize;        // �������� 0x18
    uint32_t allocatedSize;   // �������� 0x1C
    uint64_t baseFileRef;     // �������� 0x20
    uint16_t nextAttrID;      // �������� 0x28
    uint16_t padding;         // �������� 0x2A
    uint32_t mftRecordNum;    // �������� 0x2C
};
