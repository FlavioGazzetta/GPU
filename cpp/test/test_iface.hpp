#pragma once
#include <vector>
#include <string>
#include <cstdint>

struct TestIface {
    const char* name;
    void (*load_program)(std::vector<uint16_t>& p);
    void (*load_data)   (std::vector<uint8_t>&  d);
    bool (*check)       (const std::vector<uint8_t>& d, std::string& why);
};
