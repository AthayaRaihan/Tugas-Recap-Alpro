#include <stdio.h>

int s;

void keliling(){
    int kelilingpersegi = 4*s;
    printf ("%d\n", kelilingpersegi);
}
void luas() {
    int luaspersegi = s*s;
    printf ("%d\n", luaspersegi);
}
void volume(){
    int volumepersegi = s*s*s;
    printf ("%d\n", volumepersegi);
}
int main (){
    scanf ("%d", &s);
    keliling();
    luas();
    volume();

    return 0;
}