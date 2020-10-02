#include "Person.h"

Person::Person(std::string n, int a)
{
    name = n;
    age = a;
}

std::string Person::getName()
{
    return name;
}

int Person::getAge()
{
    return age;
}
