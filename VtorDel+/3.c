/*Од стандарден влез се чита цел број N (N<100) и потоа N низи од знаци. Низите знаци содржат букви, цифри и специјални знаци, а секоја од нив не е поголема од 50 знаци.

Да се напише програма што ќе ги отпечати на екран сите низи од знаци во кои се содржи поднизата А1c  најмалку 2 пати (пр. A1c01АA1c92, 12A1cwwA1cxy, аA1cwA1cA1ccA1cxab) според редоследот како што се прочитани од влезот. При печатење на зборовите, сите алфабетски знаци треба да се испечатат со мали букви.

Пример

Влез:

6

Ekjqh!!lkjsdh 

 A1c01АA1c92

12A1cwwA1cxy 

12A1cwwA1bxy 

аA1cwA1cA1ccA1cxab

nemaA1c_povekjepati

Излез

а1c01аа1c92

12а1cwwа1cxy 

аа1cwа1cа1ccа1cxab*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main(){
    int n, i,z=0,br=0;
    char niza[50],pomoshna[50];
    scanf("%d",&n);
    while(z<n){
        br=0;
        scanf("%s",niza);
        for(i=0;i<strlen(niza);i++){
            if(niza[i]=='A' || niza[i]=='a'){
            if(niza[i+1]=='1'){
             if(niza[i+2]=='c' || niza[i+2]=='C'){
                 br++;
             }
            }
            }
                 if(br==2){
                     for(i=0;i<strlen(niza);i++) {
                         if (isalpha(niza[i])) {
                             niza[i] = tolower(niza[i]);
                         }
                     }
                     printf("%s\n",niza);
                     break;
                 }
             }
        z++;
    }
    return 0;
}
