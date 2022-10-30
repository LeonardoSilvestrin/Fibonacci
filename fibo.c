#include <stdio.h>
int main(){
    int i,n,t0,t1,t2; 
    t2 = 1;
    t1 = 1;
    printf("entre o índice N da sequência de fibonacci desejado: ");
    scanf("%d",&n);
    for (i=2;i<n;i++){
        t0 = t1+t2;
        t2 = t1;
        t1 = t0;
    }
    if (n==1 || n==2){
        printf("O valor da %dª posição da sequência de fibonacci é 1", n);
    }
    else{
        printf("O valor da %dª posição da sequência de fibonacci é %d", n,t0);
    }
    return 0;