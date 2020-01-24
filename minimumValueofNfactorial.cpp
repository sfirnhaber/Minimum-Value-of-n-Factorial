/*
 * Minimum Value of n!
 * By Sam Firnhaber
 */

#include <iostream>
#include <math.h>  

unsigned int factorial(unsigned int n) {
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}

int main() {
    unsigned long long n = 1;
    unsigned long long t;
    std::cin >> t;
    while (factorial(n) < t)
        n++;
    n--;
    std::cout << n << std::endl;
    return 0;
}
