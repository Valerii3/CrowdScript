#include <iostream>
#include "Crowd.h"


int gcd(int a, int b){
    return b ? gcd(b, a % b) : a;
}

int max(int a, int b){
    if (a > b) return a;
    return b;
}

int min(int a, int b){
    if (a > b) return b;
    return a;
}
