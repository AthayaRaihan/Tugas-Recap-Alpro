#include <stdio.h>

int main() {
    int i = 2, j = 1;

    while (i <= 3) {
        printf("Bilangan utama: %d\n", i);
        
        while (j <= 2) {
            printf(" Bilangan pengali: %d\n", j);
            printf("  Hasil perkalian: %d\n\n", j * i);
            j++;
        }

        i++;
        j = 1;
    }

    return 0;
}
// variabel i dan j di deklarasikan di dalam main dan sudah ditentukan untuk nilai i=2 dan j=1
// menggunakan while, while pertama ada kondisi dimana i <= 3 maka perluangan akan terus berjalan selama nilai i <= 3
// while pertama akan menyetak "Bilangan utama" diikuti nilai i dimana nilai i yang pertama tercetak adalah 2
// lalu masuk ke nested while dimana didalam nested while ad kondisi j <= 2, maka perulangan akan terus berjalan selama nilai j <= 2
// nested while pertama akan menyetak "Bilangan pengali" diikuti dengan nilai j dimana nilai j yang pertama tercetak adalah 1 kemudian tercetak "hasil perkalian" diikuti dengan hasil perkalian antara i dan j
// lalu j ditambahkan dnegan 1(j++), setelah nested while selesai nilai i akan ditambahkan dengan 1(i++) dan j akan diatur kembali menjadi 1
// dan akan kembali ke while pertama selama memenuhi syarat (i<=3)
