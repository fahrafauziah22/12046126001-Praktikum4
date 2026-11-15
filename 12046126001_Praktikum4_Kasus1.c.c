/*
 * Program  : Mencetak Pola Segitiga Bintang
 * Nama     : Fahra Fauziah
 * NIM      : 12046126001
 * Deskripsi: Nested for loop untuk pola segitiga bintang
 */

#include <stdio.h>
int main() {
    int N;

    printf("=== CETAK POLA SEGITIGA BINTANG ===\n");
    printf("Masukkan Jumlah Baris: ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    
    return 0;
}
