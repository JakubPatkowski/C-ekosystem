#include <iostream>

#include "srodowisko.h"
#include "osobniki.h"

using namespace std;


int main()
{
    Srodowisko ekoSystem(8,12);

    ekoSystem.lokuj(new Glon(),0,10);
    ekoSystem.lokuj(new Glon(),1,10);
    ekoSystem.lokuj(new Glon(),1,5);
    ekoSystem.lokuj(new Glon(),3,10);
    ekoSystem.lokuj(new Grzyb(),1,11);
    ekoSystem.lokuj(new Grzyb(),0,0);
    ekoSystem.lokuj(new Bakteria(),3,3);
    ekoSystem.lokuj(new Bakteria(),2,6);

    unsigned long i = 0;

    do
    {
        //system("clear"); //Pod Wiondows może nie działać

        cout << "Krok symulacji: " << i << endl << endl << ekoSystem.doTekstu() << endl;
        cin.ignore(1); //Czeka na Enter

        ekoSystem.wykonajKrokSymulacji();

        i++;

    } while(i < 20 && !ekoSystem.martwy());


    cout << endl;

    return 0;
}