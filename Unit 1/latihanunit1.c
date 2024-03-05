#include <stdio.h>

int jarak1, waktu1;
int kecepatan1, waktu2;
int jarak2, kecepatan2;

int main (){
    scanf ("%d %d\n", &jarak1, &waktu1);
    scanf ("%d %d\n", &kecepatan1, &waktu2);
    scanf ("%d %d", &jarak2, &kecepatan2);

    float kecepatan = (float) jarak1/waktu1;
    float jarak = (float) kecepatan1*waktu2;
    float waktu = (float) jarak2/kecepatan2;

    printf ("%.2f\n", kecepatan);
    printf ("%.2f\n", jarak);
    printf ("%.2f\n", waktu);
}