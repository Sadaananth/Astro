#pragma once

#include "Common.hpp"
#include "Config.hpp"

struct ConfigBuilderClass
{
public:
    KattamConfig construct(uint8_t kattamIndex);
    GrahamConfig construct(Graham graham);
};
