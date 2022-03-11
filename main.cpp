#include <stdio.h>
#include <cstring>  
#include <string.h>

#include "array.h"

void hello (Array a)
{
    printf ("hello\n");
}

int main ()
{

    Array a1;
    Array a2(13);


    hello(a2);

    // .... //

    a2 = a1;

    return 0;
}
