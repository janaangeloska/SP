/*Да се напише програма во која од дадена датотека со име "input.txt" за секој ред ќе се отпечати бројот на цифри во тој ред, знакот :, па самите цифри подредени според ASCII кодот во растечки редослед. Редовите во датотеката не се подолги од 100 знаци.*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>
void wtf() {
    FILE *f = fopen("input.txt", "w");
    char c;
    while((c = getchar()) != EOF) {
        fputc(c, f);
    }
    fclose(f);
}
void swap(char *i, char *j){
    char temp;
    temp = *i;
    *i = *j;
    *j = temp;
}
void bubblesort(char *niza){
    int i,j;
    for(i=0;i<strlen(niza);i++){
        for(j=0;j<strlen(niza)-i-1;j++){
            if (niza[j] > niza[j + 1])
                swap(&niza[j], &niza[j + 1]);
        }
    }
}
int main() {
    wtf();
    FILE *f = fopen("input.txt", "r");
    char a[100],b[100];
    int i,j=0,brNaCifri;
    while((fgets(a,101,f)) != NULL){
        j=0;
        i=0;
        brNaCifri=0;
        for(i=0;i<strlen(a);i++){
            if(a[i]>='0'&&a[i]<='9'){
            brNaCifri++;
            b[j]=a[i];
            j++;
            }
        }
        b[j]='\0';
        printf("%d:",brNaCifri);
        bubblesort(b);
        for(j=0;j<strlen(b);j++){
            printf("%c",b[j]);
        }
        printf("\n");
    }
    fclose(f);    
    return 0;
}
