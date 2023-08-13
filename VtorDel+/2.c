/*Од тастатура се чита природен број N (N < 400).

Да се напише програма којашто формира квадратна матрица што ги содржи броевите од 1 до N по растечки редослед на следниот начин: во првата колона во правец од горе надолу, па продолжува во втората колона од долу нагоре, па продолжува во третата колона од горе надолу итн. Да се избере најмалата димензија на матрицата во која ќе ги собере сите броеви до N. Доколку има преостанати празни места, тие да се пополнат со нули.

Формираната матрица да се запише во датотека "shema.txt".

Пример.

Влез

22

Излез во датотеката "shema.txt"

1 10 11 20 21

2 9 12 19 22

3 8 13 18 0

4 7 14 17 0

5 6 15 16 0*/

#include <stdio.h>
void printFile() {
    FILE *f=fopen("shema.txt","r");
    char line[1000];
    while(!feof(f)){
        fgets(line,1000,f);
        if (feof(f))
            break;
        printf("%s",line);
    }
    fclose(f);
}
int main() {
    int i, j, n, m, br=1, a[100][100];
    //se cita priroden br n
    scanf("%d",&n);
    //ciklus za naogjanje na najmaliot kvadrat pomal od n
    //pr n=13, (i=0;0*0<13;i++)(i=1;1*1<13;i++)(i=2;2*2<13;i++)(i=3;3*3<13;i++)(i=4;4*4<13;i++)
    //posle ova i=4 i matricata kje ni e golemina od 4*4
    for(i=0;i*i<n;i++);
    m=i;
    for(i=0;i<m;i++){
        //za parnite redici da se cita od gore nadolu
        if(i%2==0){
            for(j=0;j<m;j++){
                //ako se zavrsi ciklusov, pominat site cl do brojot n, narednite kje bidat site 0
             if(br==(n+1)){
             a[j][i]=0;
             }else{
                 //se pechatat el od 1 do n
                 a[j][i]=br++;
             }
            }
        }    
    else{
        //ako 
         for(j=m-1;j>=0;j--){
             if(br==(n+1)){
                 a[j][i]=0;
             }
             else{
                 a[j][i]=br++;
             }
         }
    }
}
//otvaranje datoteka za zapis
    FILE *f = fopen("shema.txt", "w");
    //printanje na el vo otvoreniot file
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            fprintf(f, "%d ", a[i][j]);
        }
        fprintf(f, "\n");
    }
    //zatvaranje na datotekata
    fclose(f);
    printFile();
    return 0;
}
