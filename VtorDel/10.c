/*Во датотеката podatoci.txt се запишани редови со низи од знаци (секој не подолг од 80 знаци).

Од стандарден влез се читаат два знака z1 и z2. Да се напише програма со која на стандарден излез ќе се испечатат поднизите од секој ред од датотеката составени од знаците што се наоѓаат меѓу z1 и z2 (без нив). Секоја подниза се печати во нов ред.

Се смета дека секој ред од датотеката точно еднаш ги содржи знаците z1 и z2, знакот z1 секогаш се наоѓа пред знакот z2, а меѓу z1 и z2 секогаш има барем еден знак.
*/

#include<stdio.h>
#include<string.h>
void wtf() {
    FILE *f = fopen("podatoci.txt", "w");
    char c;
    while((c = getchar()) != '#') {
        fputc(c, f);
    }
    fclose(f);
}
int main() 
{
    wtf();
    getchar();
    FILE *f = fopen("podatoci.txt", "r");
    char a[100],ch,z1,z2;
    int i,j,n;
    z1=getchar();
    z2=getchar();
    //scanf("%c%c",&z1, &z2);
    while(fgets(a,101,f) != NULL){
        n=strlen(a);
        for(i=0;i<n;i++){
        if(*(a+i)==z1){
            for(j=i+1;i<n;j++){
            if(*(a+j)!=z2){
                printf("%c",a[j]);
            }
            else{
                break;
                }
        }
    }
    if(*(a+j) == z2) break;
        }
        printf("\n");
    }
    fclose(f);
    return 0;
}
