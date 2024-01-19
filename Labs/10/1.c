/*Од стандарден влез да се прочита една низа од знаци со најмногу 100 карактери. Да се трансформира низата така што левата и десната половина од стрингот ќе си ги сменат местата. 
Напомена: Сите тест примери ќе имаат парен број на знаци. */

#include<stdio.h>
int dolzina(char*p)
{
    int brojac = 0;
    while (*p != '\0') {
        brojac++;
        p++;
    }
    return brojac;
}
int main(){
    int b;
    char a[100];
    scanf("%s",a);
    b=dolzina(a);
    for(int i=b/2;i<b;i++){
        printf("%c",a[i]);
    }
    for(int i=0;i<b/2;i++){
        printf("%c",a[i]);
    }
    return 0;
}
