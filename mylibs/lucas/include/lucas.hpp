#ifndef _LUCAS_H_
#define _LUCAS_H_


// Like the fibonacci calculator but for lucas numbers and more C++ style ;-)
class LucasNumber
{
public:
    LucasNumber  ();
    LucasNumber  (const LucasNumber&);
    ~LucasNumber ();

    LucasNumber& operator= (const LucasNumber&);

    int
    ComputeLucas (int);

    int
    GetComputedLucas ();


private:
    int computedNumber;
};


#endif
