#include <stdio.h>

int prime_factor(unsigned int prime[1000], int no, int len) {
    int cnt = 0; // the no. of prime factor of no
    // prime factors of no
    printf("Prime factors: ");
    for (int i = 0; i < len && prime[i] <= no; ++i) {
        if (no % prime[i] == 0) {
            cnt++;
            printf("%d ", prime[i]);
        }
    }
    printf("\n");
    return cnt;
}

int main() {
    int no = 1528;
    unsigned int primes[1000]; // prime only contains positive values
    int idx = 0; // last index of the prime number
    // generates array of prime numbers
    for (int i = 2; i < 60000 && idx < 1000; ++i) {
        int fl = 0;
        for (int j = 2; j < i; ++j) {
            if (i % j == 0) {
                fl = 1;
                break;
            }
        }
        if (fl == 0)
            primes[idx++] = i;
    }

    printf("%d \n", prime_factor(primes, no, idx));
    printf("\n");
}