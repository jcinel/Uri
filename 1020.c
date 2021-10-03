#include <stdio.h>

int main(){
    int dias, meses = 0, anos = 0;
    scanf("%d", &dias);
    if(dias >= 365){
        anos = dias / 365;
        dias = dias % 365;
    }
    if(dias >= 30){
        meses = dias / 30;
        dias = dias % 30;
    }
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", anos, meses, dias);

    return 0;
}