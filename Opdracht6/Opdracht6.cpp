#include <iostream>
#include "Koffer.h"
#include "Caravan.h"

int main()
{
    Koffer* koffer1 = new Koffer("rood");
    koffer1->toonInhoud();

    Caravan* caravan1 = new Caravan("blauw");
    caravan1->addKoffer(koffer1);
    caravan1->toonInhoud();

    Caravan* caravan2 = new Caravan(*caravan1);
    caravan2->toonInhoud();

    delete(caravan1);
    delete(caravan2);

    return 0;
}
