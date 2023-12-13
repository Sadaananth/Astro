#include "RasiBuilderClass.hpp"

RasiBuilderClass::RasiBuilderClass(Rasi rasi)
    : mRasi(rasi)
{}

RasiBase RasiBuilderClass::construct()
{
    RasiBase rasiObject;
    rasiObject.rasi = mRasi;

    return rasiObject;
}
