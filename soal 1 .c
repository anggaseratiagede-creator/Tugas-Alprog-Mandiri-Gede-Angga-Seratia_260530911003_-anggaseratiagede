#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int N;
    long long A, jumlah = 0;

    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        scanf("%lld", &A);
        jumlah += A;
    }

    printf("%lld\n", llabs(jumlah));

    return 0;
    
}