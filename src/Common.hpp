#pragma once

#include <string>

const uint8_t RasiCount = 12;
const uint8_t NatchathiramCount = 27;

enum class Rasi : uint8_t
{
    Mesham,
    Rishabam,
    Mithunam,
    Kadagam,
    Simmam,
    Kanni,
    Thulam,
    Viruchagam,
    Thanusu,
    Magaram,
    Kumbam,
    Meenam
};

enum class Natchathiram : uint8_t
{
    Aswini,
    Bharani,
    Karthigai,
    Rohini,
    Mrigasheersham,
    Thiruvaathirai,
    Punarpoosam,
    Poosam,
    Aayilyam,
    Makam,
    Pooram,
    Uthiram,
    Hastham,
    Chithirai,
    Swaathi,
    Visaakam,
    Anusham,
    Kettai,
    Moolam,
    Pooraadam,
    Uthiraadam,
    Thiruvonam,
    Avittam,
    Chathayam,
    Poorattathi,
    Uthirattathi,
    Revathi
};

std::string toString(Rasi rasi);
std::string toString(Natchathiram natchathiram);
