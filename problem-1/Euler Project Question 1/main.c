//
//  main.c
//  Euler Project Question 1
//
//  Created by Richer  on 2013-06-06.
//  Copyright (c) 2013 Richer Larivère. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    /*
     If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
     
     Find the sum of all the multiples of 3 or 5 below 1000.
    */

    int i;
    int SommeMultiples = 0;
    
    for (i = 1; i<1000; i++)
    {
        if ((i % 3 == 0) || (i % 5 == 0))
        {
            SommeMultiples = SommeMultiples + i;
        }
    }
    
    printf("Réponse : La somme des nombres multiples de 3 et 5 strictement compris entre 0 et 1000 est égale à %d.", SommeMultiples);
    
    return 0;
}

