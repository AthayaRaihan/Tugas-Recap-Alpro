#include <stdio.h>

int i, j;

int main(){
    
    for (i = 2; i <= 3; ++i) {
        printf("Bilangan utama: %d\n", i);
        
        for (j = 1; j <= 2; ++j) {
            printf(" Bilangan pengali: %d\n", j);
            printf("  Hasil perkalian: %d\n\n", j * i);
            }
        
    }

    return 0;
}
// variabel i dan j meruapakan variabel global yang akan digunakan untuk iterasi perulangan
// di for loop pertama itu mengatur varibael i yang dimulai dari 2 sampai 3
// disetiap iterasi loop pertama akan menyetak "Bilangan utama", yang diikuti oleh i dimana i yang pertama tercetak adalah 2
// lanjut ke nested loop , nested loop akan mengatur variabel j yang dimulai dari 1 sampai 2
// disetiap iterasi pada nested loop akan menyetak "Bilangan pengali" yang diikuti oleh j dimana j yang peratama tercetak adalah 1
// lalu tercetak "Hasil perkalian" diikuti dengan perkalian antara i dan j
// setelah nested loop kedua sudah selesai maka akan balik ke loop pertama selama masih memenuhi syarat (i<=3) 