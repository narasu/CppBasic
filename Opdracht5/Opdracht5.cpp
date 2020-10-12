#include <iostream>
#include "Library.h"

int main()
{
    Library* library = new Library();

    library->borrowBook();
    library->borrowBook();
    library->returnBook();
    library->returnBook();

    delete(library);
}