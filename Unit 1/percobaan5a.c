#include <stdio.h>

char fullname[30];

int main(){
    printf("Masukan nama lengkap kamu: \n");
    scanf("%s", fullname);
    printf("Halo %s", fullname);
    return 0;
}
//output yang dihasilkan yaitu hanya satu kata walau jika kita input lebih dari 1 kata tetapi hasil outputnya hanya 1 kata