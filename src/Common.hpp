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

enum class Graham : uint8_t
{
    Suryan,
    Chandran,
    Sevvai,
    Puthan,
    Sukkiran,
    Guru,
    Sani,
    Ragu,
    Kethu
};

enum class Bootham : uint8_t
{
    Neruppu,
    Neer,
    Kaatru,
    Nilam
};

enum class Gunam : uint8_t
{
    Saram,
    Sthiram,
    Ubayam
};

enum class Gender : uint8_t
{
    Aan,
    Pen,
    Ali
};

enum class Maatham : uint8_t
{
    Chithirai,
    Vaikasi,
    Aani,
    Aadi,
    Aavani,
    Purattasi,
    Aippasi,
    Kaarthigai,
    Maargali,
    Thai,
    Maasi,
    Panguni,
};

std::string toString(Rasi rasi);
std::string toString(Natchathiram natchathiram);
std::string toString(Graham graham);
std::string toString(Bootham bootham);
std::string toString(Gunam gunam);
std::string toString(Gender gender);
std::string toString(Maatham maatham);
