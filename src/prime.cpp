#include "prime.h"
#include <iostream>
#include <math.h>

bool is_prime(int n) 
{ 
    if(n < 2) 
        return false;
    for(int i=2; i<int(sqrt(n)); i++) {
        if(n%i == 0) {
            return false;
        }
    }
    return true;
}
