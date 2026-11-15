/*
 * Program  : Sistem Penilaian Mahasiswa
 * Nama     : Fahra Fauziah
 * NIM      : 12046126001
 * Deskripsi: Nested for loop untuk pola segitiga bintang
 */

#include <stdio.h>
int main() {
    int jumlah_mhs;
    float nilai, total = 0, rata;
    float max = 0, min = 100;

    printf("=== SISTEM PENILAIAN MAHASISWA SI ===\n");
    printf("Masukkan Jumlah Mahasiswa: ");
    scanf("%d", &jumlah_mhs);

    for (int i = 1; i <= jumlah_mhs; i++) {
        printf("  Nilai Mahasiswa ke-%d: ", i);
        scanf("%f", &nilai);

        total += nilai;

        if (nilai > max) {
            max = nilai;
        }
        if (nilai < min) {
            min = nilai;
        }
    }

    rata = total / jumlah_mhs;

    printf("\n==================================\n");
    printf("       LAPORAN NILAI KELAS SI       \n");
    printf("===================================\n");
    printf("Jumlah Mahasiswa    : %d\n", jumlah_mhs);
    printf("Total Nilai         : %.2f\n", total);
    printf("Rata-rata Kelas     : %.2f\n", rata);
    printf("Nilai Terringgi     : %.2f\n", max);
    printf("Nilai Terendah      : %.2f\n", min);
    printf("===================================\n");

    return 0;
}
