#include <fib/fib.h>


int
ComputeFib (int n)
{
    int value;

    if(n <= 1)
        return n;

    value = ComputeFib(n-1)+ComputeFib(n-2);

    return value;
}
