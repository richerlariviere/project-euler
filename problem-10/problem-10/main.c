#include <stdio.h>
#include <math.h>

#define LIMIT 2000000

int IsPrime(int number) {
    if (number < 2){
        return 0;
    }
    else{
        for (int i = 2; i <= sqrt(number); i++) {
            if (number % i == 0){
                return 0;
            }
        }
    }
    return 1;
}

int main(int argc, const char * argv[]) {
    unsigned long sum = 0;
    
    for (int i = 2; i < LIMIT; i++) {
        sum += IsPrime(i) != 0 ? i : 0;
    }
    
    printf("Sum is %li\n", sum);

    return 0;
}
