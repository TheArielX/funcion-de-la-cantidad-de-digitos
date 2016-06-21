#include <stdio.h>
#include <stdlib.h>

int cd(int x){
    if (x>=0 && x<=9 || x<=0 && x>=-9) {
        printf("El n%cmero %d tiene 1 d%cgito", 163, x, 161);
    }
    if(x>=10 && x<=99 || x<=-10 && x>=-99) {
        printf("El n%cmero %d tiene 2 d%cgitos", 163, x, 161);
    }
    if (x>=100 && x<=999 || x<=-100 && x>=-999) {
        printf("El n%cmero %d tiene 3 d%cgitos", 163, x, 161);
    }
    if (x>=1000 && x<=9999 || x<=-1000 && x>=-9999) {
        printf("El n%cmero %d tiene 4 d%cgitos", 163, x, 161);
    }
    if (x>=10000 && x<=99999 || x<=-10000 && x>=-99999) {
        printf("El n%cmero %d tiene 5 d%cgitos", 163, x, 161);
    }
    if (x>=100000 || x<=-100000) {
        printf("El n%cmero %d es superior a 6 d%cgitos", 163, x, 161);
    }
}
int x;
int main()
{
    printf("Introduzca el n%cmero al que desea saber la cantidad de d%cgitos:", 163, 161);
    scanf("%d", &x);
    cd(x);
}
