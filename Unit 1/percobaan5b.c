#include <stdio.h>

char fullname[30];

int main(){
    printf("Masukan nama lengkap kamu: \n");
    fgets(fullname, sizeof(fullname), stdin);
    printf("Halo %s", fullname);
    return 0;
}
// jika kita menginput lebih dari satu kata , output yang dikeluarkan adalah semua yang kita inputkan
// atau dengan kata lain output yang dikeluarkan itu satu baris 