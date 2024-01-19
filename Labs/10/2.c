/*Од стандарден влез се вчитува бројот N, бројот K и знакот C. Потоа се вчитуваат N текстуални низи (секоја во нов ред). 
Да се испечатат на екран текстуалните низи кои го содржат знакот C точно K пати без разлика на големината на буквата.
Ако нема такви низи, да се испечати порака NONE.*/

#include<stdio.h>
#include<string.h>
#include<ctype.h>
void istaGolemina(char *niza){
    int i;
    for(i=0;i<strlen(niza);i++){
        niza[i]=tolower(niza[i]);
    }
}
int main() {
    int f = 0, i, n, k, brojac = 0, flag=1;
    char c, a[100],kopija[100];
    scanf("%d%d\n", &n, &k);
    scanf("%c",&c);
    c=tolower(c);
    while (f <= n) {
        fgets(a, 100, stdin);
        a[strlen(a)-1]='\0';
        for (i = 0; i < strlen(a) ; i++)
        {
            kopija[i] = a[i];
            }
        kopija[i]='\0';
        for (i = 0; i < strlen(a); i++) {
            istaGolemina(a);
            if (a[i] == c) {
                brojac++;
            }
        }
        if (brojac == k) {
            printf("%s\n", kopija);
            flag = 0;
        }
        brojac = 0;
        f++;
    }
    if(flag) {
        printf("NONE");
    }
    return 0;
}
