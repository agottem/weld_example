#include <fib/fib.h>

#include <stdio.h>
#include <stdlib.h>


int
main (void)
{
    int value;

    value = ComputeFib(42);

    printf("ComputeFib(42) = %d\n", value);

    return EXIT_SUCCESS;
}
