#include <lucas/lucas.hpp>

#include <stdlib.h>
#include <iostream>


int
main (void)
{
    LucasNumber number;

    number.ComputeLucas(42);

    std::cout << "LucasNumber::ComputeLucas(42) = " << number.GetComputedLucas() << std::endl;

    return EXIT_SUCCESS;
}
