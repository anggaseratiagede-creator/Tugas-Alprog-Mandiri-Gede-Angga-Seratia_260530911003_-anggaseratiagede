#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define MOD 1000000007LL

int cmp(const void *a, const void *b) {
    long long x = *(long long*)a, y = *(long long*)b;
    return (x > y) - (x < y);
}

long long pairs(long long k) {          
    return k * (k - 1) / 2;             
}

int main(void) {
    int n;
    scanf("%d", &n);

    long long *a = malloc(sizeof(long long) * n);
    for (int i = 0; i < n; i++) scanf("%lld", &a[i]);

    qsort(a, n, sizeof(long long), cmp);

    long long ans = pairs(n) % MOD;

    for (int i = 0; i < n; ) {
        int j = i;
        while (j < n && a[j] == a[i]) j++;
        ans = (ans - pairs(j - i) % MOD + MOD) % MOD;
        i = j;
    }

    printf("%lld\n", ans);
    return 0;
}