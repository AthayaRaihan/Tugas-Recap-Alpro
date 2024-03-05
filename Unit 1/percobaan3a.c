#include <stdio.h>

int main() {
  printf("Baris pertama");
  printf("Baris kedua \n");
  printf("Baris ketiga");
  return 0;
}
// output yang dikeluarkan \n adalah newline atau baris baru
// itulah mengapa kata "baris pertama" dan "baris kedua" itu jadi satu baris karena tidak ada \n di baris pertama
// dan itu juga mengapa baris ketiga akan terprint di newline karena di baris kedua ada \n