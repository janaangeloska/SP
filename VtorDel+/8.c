/*Четиринасочник претставува матрица во која се испишани зборови хоризонотално и вертикално, одлево-надесно и оддесно-налево. Притоа секој елемент од матрицата претставува буква од англиската азбука.

пример скриени зборови: HAIR, OLE, FISH, TOE 
T H A I R E
E S N K N E
M I M J O L
M F S P S T
I F G E L O
X U T Y O E

Во датотеката input.txt е сместена квадратна матрица од знаци(3 <= n <= 50). Во првиот ред е дефиниран бројот на редици (колони) на матрицата и во секој преостанат ред е внесен еден ред од матрицата (види пример).

По читањето на матрицата, од стандарден влез се внесува збор составен од максимум 10 букви.

Ваша задача е да определите дали тој збор се наоѓа во четиринасочникот (хоризонтално или вертикално, одлево-надесно или оддесно-налево). Потребно е да се испечати локацијата (ред, колона) на првата и последната буква од зборот. Доколку зборот повеќепати се наоѓа во четеринасочникот, треба да се испечати првото појавување, гледано елемент по елемент како што се чита матрицата.

Доколку не се пронајде зборот, тогаш се печати Not Found.*/

#include <stdio.h>
#include <string.h>
#define MAX 50
void printFile() {
    FILE *f=fopen("input.txt","r");
    char line[1000];
    while(!feof(f)){
        fgets(line,1000,f);
        if (feof(f))
            break;
        printf("%s",line);
    }
    fclose(f);
}
void wtf(){
    FILE *f=fopen("input.txt","w");
    int n,i,j;
    char el;
    scanf("%d", &n);
    fprintf(f,"%d\n",n);
    char a = getchar();
    for (i=0; i < n; ++i){
        for (j=0; j < n; ++j){
            el = getchar();
            getchar();
            fprintf(f, "%c  ", el);
        }
        fputc('\n',f);
    }
    fclose(f);
    return;
}
int main(){
    wtf();
    FILE *f = fopen("input.txt","r");
    int i,j, n;
    char word[11];
    if (f==NULL){
        printf("Can't open the file");
        return -1;
    }
    char a[MAX][MAX];
    fscanf(f,"%d\n",&n);
    for (i=0; i<n; ++i){
        for (j=0; j<n; ++j){
            fscanf(f,"%c ", &a[i][j]);
        }
    }
    fgets(word,10,stdin);
    word[strlen(word)-1] = '\0';
    int found = 0;
    int k;
    int wl = strlen(word);
    int sr=-1, sc=-1, er=-1, ec=-1;
    for (i=0; i<n; ++i){
        for (j=0; j<n; ++j){
            if (a[i][j]==word[0]){
                sr = i;
                sc = j;
                for (k=1; k < wl;k++){
                    if ((j+k) >= n ) {
                        found = 0;
                        break; 
                    }
                    if (word[k] != a[i][j+k]) { 
                        found=0;
                        break;
                    }
                    er = i;
                    ec = j+k;
                }
                if (k==wl) { 
                    found = 1;
                    break;
                }
                for (k=1; k < wl;k++){
                    if ((j-k) < 0 ){
                        found = 0; 
                        break;
                    }
                    if (word[k] != a[i][j-k]) {
                        found=0;
                        break;
                    }
                    er = i;
                    ec = j-k;
                }
                if (k==wl) {
                    found = 1;
                    break;
                }
                for (k=1; k < wl;k++){
                    if ((i+k) >=n ) {
                        found = 0;
                        break; 
                    }
                    if (word[k] != a[i+k][j]){
                        found=0;
                        break;
                    }
                    er = i+k;
                    ec = j;
                }
                if (k==wl) { 
                    found = 1; 
                    break;
                }
                for (k=1; k < wl;k++){
                    if ((i-k) < 0 ) {
                        found = 0; 
                        break; 
                    }
                    if (word[k] != a[i-k][j]) { 
                        found=0;
                        break;
                    }
                    er = i-k;
                    ec = j;
                }
                if (k==wl) {
                    found = 1;
                    break;
                }
            }
        }
        if (found){
            break;
        }
    }
    if (found){
        //StratingRow,StartingColumn, EndingRow, EndingColumn
        printf("%d, %d -> %d, %d", sr, sc, er, ec);
    }
    else { 
        printf("Not Found");
    }
    return 0;
}
