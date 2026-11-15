/*
 * Program  : Menu Aplikasi Kasir Minimarket
 * Nama     : Fahra Fauziah
 * NIM      : 12046126001
 * Deskripsi: Do-While untuk menu + switch-case untuk pilihan
 */

#include <stdio.h>
int main() {
    int pilihan;
    float harga, jumlah, subtotal;
    float total_belanja = 0;

    printf("=== APLIKASI KASIR MINIMARKET SI ===\n");

    do {
        printf("\n=== MENU UTAMA ===\n");
        printf("1. Tambah Belanja\n");
        printf("2. Lihat Total Belanja\n");
        printf("3. Bayar & Keluar\n");
        printf("Pilih Menu (1-3): ");
        scanf("%d", &pilihan);

        switch (pilihan) {
            case 1:
                printf("\n== Tambah Belanja ===\n");
                printf("Harga Barang : ");
                scanf("%f", &harga);
                printf("Jumlah Beli  : ");
                scanf("%f", &jumlah);
                subtotal = harga * jumlah;
                total_belanja += subtotal;
                printf("Subtotal     : Rp %.2f\n", subtotal);
                printf("(Total belanja sementara : Rp %.2f)\n");
                break;

            case 2:
                printf("\nTotal Belanja Sementara: Rp %.2f\n", total_belanja);
                break;

            case 3:
                printf("\n=== PEMBAYARAN ===\n");
                printf("Total yang harus dibayar: Rp %.2f\n", total_belanja);
                printf("Terima Kasih Telah Berbelanja!\n");
                break;
            default:
                printf("\nERROR: Menu tidak tersedia. Pilih 1-3 saja.\n");
        }
    } while (pilihan !=3);

    return 0;
}