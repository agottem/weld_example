#include <lucas/lucas.hpp>


LucasNumber::LucasNumber ()
{
    computedNumber = 0;
}

LucasNumber::LucasNumber (const LucasNumber& other)
{
    computedNumber = other.computedNumber;
}

LucasNumber::~LucasNumber ()
{
}

int
LucasNumber::ComputeLucas (int n)
{
    if(n == 0)
        return 2;
    if(n == 1)
        return 1;

    computedNumber = ComputeLucas(n-1)+ComputeLucas(n-2);

    return computedNumber;
}

int
LucasNumber::GetComputedLucas ()
{
    return computedNumber;
}
