#ifndef USTAWIENIA_H
#define USTAWIENIA_H

enum RodzajMieszkanca {GLON, GRZYB, BAKTERIA, PUSTKA, SCIANA, TRUP, NIEZNANE};

enum AkcjaMieszkanca {POTOMEK, POLOWANIE, ROZKLAD, NIC};

enum Polozenie {P=0, PG=1, G=2, LG=3, L=4, LD=5, D=6, PD=7, NIGDZIE=8 };


class UstawieniaSymulacji
{
public:

    const char
            znakGlon = '*',
            znakGrzyb ='#',
            znakBakteria ='@',
            znakTrup = '+',
            znakNieokreslony ='?',
            znakPustaNisza = '_',
            znakSeparator = ' ';

    unsigned short
            glonZycieMin = 10,
            glonZycieMax =20,
            glonKosztPotomka = 3,
            glonLimitPosilkow = 6,

            grzybZycieMin = 50,
            grzybZycieMax = 80,
            grzybKosztPotomka = 7,
            grzybLimitPosilkow = 30,

            bakteriaZycieMin = 40,
            bakteriaZycieMax = 50,
            bakteriaKosztPotomka = 2,
            bakteriaLimitPosilkow = 10;

    bool poprawnyZnakNiszy(char znak) const
    {
        return znak == znakGlon || znak == znakGrzyb || znak == znakBakteria || znak == znakTrup
               || znak == znakPustaNisza;
    }

    bool poprawnySeparator(char znak) const
    {
        return znak == znakSeparator;
    }


private:

    UstawieniaSymulacji(){}
    UstawieniaSymulacji(UstawieniaSymulacji&);


public:

    static UstawieniaSymulacji & pobierzUstawienia()
    {
        static UstawieniaSymulacji ustawienia;
        return ustawienia;
    }

};

#endif // USTAWIENIA_H