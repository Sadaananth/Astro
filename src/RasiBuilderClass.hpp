#pragma once

#include "Common.hpp"
#include "Rasi.hpp"

struct RasiBuilderClass
{
public:
    RasiBuilderClass(Rasi rasi);

    RasiBase construct();

private:
    Rasi mRasi;
};
