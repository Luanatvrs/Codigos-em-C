#include <stdio.h>

int fat(int val){
    if(val<=1)return 1;
    else return (val*fat(val-1));
}

int main(){
    int val,res;

    printf("informe um valor: ");
    scanf("%i",&val);
    
    res=fat(val);

    printf("Fatorial de %i: %i.\n", val, res);

    return 0;
}
