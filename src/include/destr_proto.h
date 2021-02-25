#pragma once
; // workaround clang warning
#pragma pack(push, 1)

#include <cstdint>

struct ProtoHeader {
    std::int8_t version;
    std::int64_t packet_number;
    std::int8_t size;
    std::int64_t ts;
};

#pragma pack(pop)
