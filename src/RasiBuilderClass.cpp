#include "RasiBuilderClass.hpp"

#include <stdexcept>

namespace {
const uint16_t degreePerRasi = 30;

Graham getAthibathi(Rasi rasi)
{
    switch(rasi) {
        case Rasi::Mesham:
            return Graham::Sevvai;
        case Rasi::Rishabam:
            return Graham::Sukkiran;
        case Rasi::Mithunam:
            return Graham::Puthan;
        case Rasi::Kadagam:
            return Graham::Chandran;
        case Rasi::Simmam:
            return Graham::Suryan;
        case Rasi::Kanni:
            return Graham::Puthan;
        case Rasi::Thulam:
            return Graham::Sukkiran;
        case Rasi::Viruchagam:
            return Graham::Sevvai;
        case Rasi::Thanusu:
            return Graham::Guru;
        case Rasi::Magaram:
            return Graham::Sani;
        case Rasi::Kumbam:
            return Graham::Sani;
        case Rasi::Meenam:
            return Graham::Guru;
    }

    throw std::runtime_error("Unknown Rasi");
}

std::vector<Graham> getUtchaGraham(Rasi rasi)
{
    std::vector<Graham> utchaGraham;

    switch(rasi) {
        case Rasi::Mesham:
            utchaGraham.push_back();
            break;
        case Rasi::Rishabam:
            break;
        case Rasi::Mithunam:
            break;
        case Rasi::Kadagam:
            break;
        case Rasi::Simmam:
            break;
        case Rasi::Kanni:
            break;
        case Rasi::Thulam:
            break;
        case Rasi::Viruchagam:
            break;
        case Rasi::Thanusu:
            break;
        case Rasi::Magaram:
            break;
        case Rasi::Kumbam:
            break;
        case Rasi::Meenam:
            break;
    }

    return utchaGraham;
}


std::vector<Graham> getNeetchaGraham(Rasi rasi)
{
    std::vector<Graham> neetchaGraham;

    switch(rasi) {
        case Rasi::Mesham:
            neetchaGraham.push_back();
            break;
        case Rasi::Rishabam:
            break;
        case Rasi::Mithunam:
            break;
        case Rasi::Kadagam:
            break;
        case Rasi::Simmam:
            break;
        case Rasi::Kanni:
            break;
        case Rasi::Thulam:
            break;
        case Rasi::Viruchagam:
            break;
        case Rasi::Thanusu:
            break;
        case Rasi::Magaram:
            break;
        case Rasi::Kumbam:
            break;
        case Rasi::Meenam:
            break;
    }

    return neetchaGraham;
}

}

RasiBuilderClass::RasiBuilderClass(Rasi rasi)
    : mRasi(rasi)
{}

RasiBase RasiBuilderClass::construct()
{
    RasiBase rasiObject;
    rasiObject.rasi = mRasi;
    rasiObject.kattamIndex = static_cast<uint8_t>(mRasi) + 1;
    rasiObject.degree = rasiObject.kattamIndex * degreePerRasi;
    rasiObject.athibathi = getAthibathi(mRasi);
    rasiObject.utchaGraham = getUtchaGraham(mRasi);
    rasiObject.neetchaGraham = getNeetchaGraham(mRasi);

    return rasiObject;
}
