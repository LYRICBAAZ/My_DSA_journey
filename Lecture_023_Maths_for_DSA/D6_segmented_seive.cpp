#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {

    long long L = 100;
    long long R = 120;

    // Step 1: primes up to sqrt(R)
    int limit = sqrt(R);

    vector<bool> prime(limit + 1, true);

    prime[0] = prime[1] = false;

    for(int i = 2; i * i <= limit; i++) {
        if(prime[i]) {
            for(int j = i * i; j <= limit; j += i) {
                prime[j] = false;
            }
        }
    }

    // Step 2: segment
    vector<bool> segment(R - L + 1, true);

    // Step 3: mark multiples
    for(int p = 2; p <= limit; p++) {

        if(prime[p]) {

            long long first = max(
                1LL * p * p,
                ((L + p - 1) / p) * p
            );

            for(long long j = first; j <= R; j += p) {
                segment[j - L] = false;
            }
        }
    }

    // Step 4: print primes
    for(long long i = L; i <= R; i++) {
        if(segment[i - L]) {
            cout << i << " ";
        }
    }
}