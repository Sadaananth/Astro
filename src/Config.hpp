#pragma once

#include "Common.hpp"

#include <vector>

struct KattamConfig
{
    uint8_t index;
    Rasi rasi;
    uint16_t degree;
    Graham athibathi;
    std::vector<Graham> utchaGraham;
    std::vector<Graham> neetchaGraham;
    Graham moolaThirikonaGraham;
    Bootham bootham;
    Gunam gunam;
    Gender gender;
};

struct GrahamConfig
{
    Graham graham;
    Gender gender;
    uint8_t thisaiDuration;
    std::vector<Natchathiram> athibathi;
    uint8_t navamsam;
};
