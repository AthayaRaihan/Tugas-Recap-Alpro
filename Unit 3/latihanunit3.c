#include <stdio.h>

int jumlahelemen;
int total;

int main (){
    scanf ("%d", &jumlahelemen);

    int n[jumlahelemen];
    for (int i = 0; i < jumlahelemen; i++){
        scanf ("%d", &n[jumlahelemen]);
        total += n[jumlahelemen];
    }
    printf ("%d\n", total);

    return 0;
}

