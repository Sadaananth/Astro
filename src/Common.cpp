#include "Common.hpp"

#include <stdexcept>

std::string toString(Rasi rasi)
{
    switch(rasi) {
        case Rasi::Mesham: return "Mesham";
        case Rasi::Rishabam: return "Rishabam";
        case Rasi::Mithunam: return "Mithunam";
        case Rasi::Kadagam: return "Kadagam";
        case Rasi::Simmam: return "Simmam";
        case Rasi::Kanni: return "Kanni";
        case Rasi::Thulam: return "Thulam";
        case Rasi::Viruchagam: return "Viruchagam";
        case Rasi::Thanusu: return "Thanusu";
        case Rasi::Magaram: return "Magaram";
        case Rasi::Kumbam: return "Kumbam";
        case Rasi::Meenam  : return "Meenam";
    }

    throw std::runtime_error("Unknown Rasi");
}

std::string toString(Natchathiram natchathiram)
{
    switch(natchathiram) {
        case Natchathiram::Aswini: return "Aswini";
        case Natchathiram::Bharani: return "Bharani";
        case Natchathiram::Karthigai: return "Karthigai";
        case Natchathiram::Rohini: return "Rohini";
        case Natchathiram::Mrigasheersham: return "Mrigasheersham";
        case Natchathiram::Thiruvaathirai: return "Thiruvaathirai";
        case Natchathiram::Punarpoosam: return "Punarpoosam";
        case Natchathiram::Poosam: return "Poosam";
        case Natchathiram::Aayilyam: return "Aayilyam";
        case Natchathiram::Makam: return "Makam";
        case Natchathiram::Pooram: return "Pooram";
        case Natchathiram::Uthiram: return "Uthiram";
        case Natchathiram::Hastham: return "Hastham";
        case Natchathiram::Chithirai: return "Chithirai";
        case Natchathiram::Swaathi: return "Swaathi";
        case Natchathiram::Visaakam: return "Visaakam";
        case Natchathiram::Anusham: return "Anusham";
        case Natchathiram::Kettai: return "Kettai";
        case Natchathiram::Moolam: return "Moolam";
        case Natchathiram::Pooraadam: return "Pooraadam";
        case Natchathiram::Uthiraadam: return "Uthiraadam";
        case Natchathiram::Thiruvonam: return "Thiruvonam";
        case Natchathiram::Avittam: return "Avittam";
        case Natchathiram::Chathayam: return "Chathayam";
        case Natchathiram::Poorattathi: return "Poorattathi";
        case Natchathiram::Uthirattathi: return "Uthirattathi";
        case Natchathiram::Revathi: return "Revathi";
    }

    throw std::runtime_error("Unknown Natchathiram");
}

std::string toString(Graham graham)
{
    switch(graham) {
        case Graham::Suryan : return "Suryan";
        case Graham::Chandran : return "Chandran";
        case Graham::Sevvai : return "Sevvai";
        case Graham::Puthan : return "Puthan";
        case Graham::Sukkiran : return "Sukkiran";
        case Graham::Guru : return "Guru";
        case Graham::Sani : return "Sani";
        case Graham::Ragu : return "Ragu";
        case Graham::Kethu : return "Kethu";
    }

    throw std::runtime_error("Unknown Graham");
}
