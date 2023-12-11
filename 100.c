//Prime Sieve
#include<stdio.h>
#include<math.h>

#define MAX 10001000

int prime[MAX];
int p[1000000];
int kk = 0;

void prime_sieve() {
    prime[1] = 1;
    prime[0] = 1;
    int i, j;
    for (i = 4; i < MAX; i += 2) prime[i] = 1;
    for (i = 3; i <= sqrt(MAX); i += 2) {
        if (prime[i] == 0) {
            for (j = i * i; j < MAX; j += i) prime[j] = 1;
        }
    }
    for (i = 0; i < MAX; i++) {
        if (prime[i] == 0) {
            p[kk] = i;
            kk++;
        }
    }
}

int main() {
    prime_sieve();
    int n, i;
    for (i = 100000; i <= 500000; i++) {
        n = i;
        if (prime[n] == 1) printf("Not Prime : %d\n", n);
        else printf("Prime : %d\n", n);
    }
    return 0;
}
