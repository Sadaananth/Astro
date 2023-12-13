#pragma once

#include "Common.hpp"

#include <vector>

struct RasiBase
{
    Rasi rasi;
    uint8_t kattamIndex;
    uint16_t degree;
    Graham athibathi;
    std::vector<Graham> utchaGraham;
    std::vector<Graham> neetchaGraham;
};
