#include <stdio.h>

// Deklarasi prosedur is_prime
int is_prime(int n) {
    // Cek apakah n bilangan prima atau bukan
    int i;
    for (i = 2; i < n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

// Deklarasi prosedur JumPrima
void JumPrima(int n) {
    int i, sum = 0;

    // Cek apakah n lebih dari 0
    if (n <= 0) {
        printf("Tidak Ada Bilangan Prima, sehingga Jumlahannya Sn=0\n");
        return;
    }

    // Mencari dan menampilkan bilangan prima dari 2 hingga n
    printf("Bilangan prima yang terbentuk dari %d adalah: ", n);
    for (i = 2; i <= n; i++) {
        if (is_prime(i)) {
            printf("%d ", i);
            sum += i;
        }
    }

    // Menampilkan hasil penjumlahan
    printf("\nJumlahan Deret Bilangannya adalah Sn=%d\n", sum);
}

int main() {
    int n;

    // Menerima masukan dari pengguna
    printf("Masukkan bilangan N: ");
    scanf("%d", &n);

    // Memanggil prosedur JumPrima
    JumPrima(n);

    return 0;
}
