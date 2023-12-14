#include "ConfigBuilderClass.hpp"

#include <map>
#include <stdexcept>

namespace {
const uint16_t degreePerRasi = 30;
}

KattamConfig ConfigBuilderClass::construct(uint8_t kattamIndex)
{
    static const std::map<uint8_t, KattamConfig> kattamConfig{
        {1, {1, Rasi::Mesham, 30, Graham::Sevvai, {Graham::Suryan}, {Graham::Sani}, {Graham::Sevvai}, Bootham::Neruppu, Gunam::Saram, Gender::Aan}},
        {2, {2, Rasi::Rishabam, 60, Graham::Sukkiran, {Graham::Ragu, Graham::Chandran}, {Graham::Kethu}, {Graham::Chandran}, Bootham::Nilam, Gunam::Sthiram, Gender::Pen}},
        {3, {3, Rasi::Mithunam, 90, Graham::Puthan, {}, {}, {}, Bootham::Kaatru, Gunam::Ubayam, Gender::Aan}},
        {4, {4, Rasi::Kadagam, 120, Graham::Chandran, {Graham::Guru}, {Graham::Sevvai}, {}, Bootham::Neer, Gunam::Saram, Gender::Pen}},
        {5, {5, Rasi::Simmam, 150, Graham::Suryan, {}, {}, {Graham::Suryan}, Bootham::Neruppu, Gunam::Sthiram, Gender::Aan}},
        {6, {6, Rasi::Kanni, 180, Graham::Puthan, {Graham::Puthan}, {Graham::Sukkiran}, {Graham::Puthan}, Bootham::Nilam, Gunam::Ubayam, Gender::Pen}},
        {7, {7, Rasi::Thulam, 210, Graham::Sukkiran, {Graham::Sani}, {Graham::Suryan}, {Graham::Sukkiran}, Bootham::Kaatru, Gunam::Saram, Gender::Aan}},
        {8, {8, Rasi::Viruchagam, 240, Graham::Sevvai, {Graham::Kethu}, {Graham::Ragu, Graham::Chandran}, {}, Bootham::Neer, Gunam::Sthiram, Gender::Pen}},
        {9, {9, Rasi::Thanusu, 270, Graham::Guru, {}, {}, {Graham::Guru}, Bootham::Neruppu, Gunam::Ubayam, Gender::Aan}},
        {10, {10, Rasi::Magaram, 300, Graham::Sani, {Graham::Sevvai}, {Graham::Guru}, {}, Bootham::Nilam, Gunam::Saram, Gender::Pen}},
        {11, {11, Rasi::Kumbam, 330, Graham::Sani, {}, {}, {Graham::Sani}, Bootham::Kaatru, Gunam::Sthiram, Gender::Aan}},
        {12, {12, Rasi::Meenam, 360, Graham::Guru, {Graham::Sukkiran}, {Graham::Puthan}, {}, Bootham::Neer, Gunam::Ubayam, Gender::Pen}}
    };

    return kattamConfig.at(kattamIndex);
}

GrahamConfig construct(Graham graham)
{
    static const std::map<Graham, GrahamConfig> grahamConfig{
        {Graham::Suryan, {Graham::Suryan, Gender::Aan, 6, {Natchathiram::Karthigai, Natchathiram::Uthiram, Natchathiram::Uthiraadam}, 9}},
        {Graham::Chandran, {Graham::Chandran, Gender::Pen, 10, {Natchathiram::Rohini, Natchathiram::Hastham, Natchathiram::Thiruvonam}, 1}},
        {Graham::Sevvai, {Graham::Sevvai, Gender::Aan, 7, {Natchathiram::Mrigasheersham, Natchathiram::Chithirai, Natchathiram::Avittam}, 5}},
        {Graham::Puthan, {Graham::Puthan, Gender::Ali, 17, {Natchathiram::Aayilyam, Natchathiram::Kettai, Natchathiram::Revathi}, 9}},
        {Graham::Sukkiran, {Graham::Sukkiran, Gender::Pen, 20, {Natchathiram::Bharani, Natchathiram::Pooram, Natchathiram::Pooraadam}, 5}},
        {Graham::Guru, {Graham::Guru, Gender::Aan, 16, {Natchathiram::Punarpoosam, Natchathiram::Visaakam, Natchathiram::Poorattathi}, 1}},
        {Graham::Sani, {Graham::Sani, Gender::Ali, 19, {Natchathiram::Poosam, Natchathiram::Anusham, Natchathiram::Uthirattathi}, 5}},
        {Graham::Ragu, {Graham::Ragu, Gender::Ali, 18, {Natchathiram::Thiruvaathirai, Natchathiram::Swaathi, Natchathiram::Chathayam}, 9}},
        {Graham::Kethu, {Graham::Kethu, Gender::Ali, 7, {Natchathiram::Aswini, Natchathiram::Makam, Natchathiram::Moolam}, 1}}
    };

    return grahamConfig.at(graham);
}
