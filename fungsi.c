#include <stdio.h>
#include <stdbool.h>

// fungsi untuk mengecek bilangan prima
bool isPrime(int num) {
    if (num < 2) {
        return false;
    }
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

// fungsi untuk menampilkan bilangan prima dan hasil penjumlahannya
void printPrimes(int n) {
    int sum = 0;
    bool found = false;
    printf("Bilangan prima dari %d: ", n);
    for (int i = 2; i <= n; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
            sum += i;
            found = true;
        }
    }
    if (!found) {
        printf("\nTidak Ada Bilangan Prima, sehingga Jumlahannya Sn=0");
    } else {
        printf("\ndengan Jumlahan Deret Bilangannya adalah Sn=%d", sum);
    }
}

// contoh penggunaan fungsi
int main() {
    int n = 7;
    printPrimes(n);
    return 0;
}
