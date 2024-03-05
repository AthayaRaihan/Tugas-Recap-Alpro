#include <stdio.h>

int jumlahtransaksi;
int nominal;
int pengeluaran;

int main(){
    scanf ("%d", &jumlahtransaksi);

    if (jumlahtransaksi <= 0){
        printf ("Tidak ada transaksi hari ini\n");
    }

    for (int i = 0; i < jumlahtransaksi; i++){
        scanf ("%d", &nominal);
        pengeluaran += nominal;
    }
    printf ("%d\n", pengeluaran);

    return 0;
}