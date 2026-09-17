#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    long long a, b, c;
    long long kecil, tengah, besar;
    long long hasil;

    scanf("%lld %lld %lld", &a, &b, &c);

    if (a > b) {
        long long temp = a;
        a = b;
        b = temp;
    }

    if (b > c) {
        long long temp = b;
        b = c;
        c = temp;
    }

    if (a > b) {
        long long temp = a;
        a = b;
        b = temp;
    }

    kecil = a;
    tengah = b;
    besar = c;

    if (kecil == tengah || tengah == besar) {
        hasil = 0;
    }
    else {
        if (tengah - kecil < besar - tengah) {
            hasil = tengah - kecil;
        }
        else {
            hasil = besar - tengah;
        }
    }

    printf("%lld\n", hasil);

    return 0;
}