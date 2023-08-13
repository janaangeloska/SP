/*Еден елемент се заматува ако се најде аритметичка средина на елементот и сите негови соседи. Сосед на еден елемент се сите елементи кои припаѓаат на матрицата и се  околу истиот елемент (хоризонтално, вертикално и дијагонално). 
Во датотеката input.txt е сместена матрица од реални броеви (3 < n,m < 50). Во првиот ред се дефинирани бројот на редици и колони на матрицата и во секој преостанат ред е внесен еден ред од матрицата (види пример).По читањето на матрицата, од стандарден влез се внесуваат и 2 пара координати на матрицата (ред и колона) кои го репрезентираат горниот-лев и долниот-десен елемент од регионот. Потребно е да генеирате нова матрица во која ќе ги заматите сите елементи кои припаѓаат на регионот. 

Новодобиената матрица, во истиот формат, треба да се запише во датотеката output.txt.
Пример:

датотека: input.txt

3 4
1.00 2.00 3.00 4.00
5.00 6.00 7.00 8.00
9.00 0.00 1.00 2.00


Стандарден влез:

0 1
2 2

Резултат:

датотека: output.txt

3 4
1.00 4.00 5.00 4.00
5.00 3.78 3.67 8.00
9.00 4.67 4.00 2.00*/

#include <stdio.h>
#include <math.h>
#define MAX 50
void printFile() {
    FILE *output=fopen("output.txt","r");
    char line[1000];
    while(!feof(output)){
        fgets(line,1000,output);
        if (feof(output))
            break;
        printf("%s",line);
    }
    fclose(output);
}
void wtf(){
    FILE *input=fopen("input.txt","w");
    int row,column,i,j;
    float el;
    scanf("%d %d", &row, &column);
    fprintf(input,"%d %d\n",row, column);
    for (i=0; i<row; ++i){
        for (j=0; j<column; ++j){
            scanf("%f", &el);
            fprintf(input, "%.2f ", el);
        }
        fputc('\n',input);
    }
    fclose(input);
    return;
}
int main(){
    wtf();
    int m,n,i,j;
float a[100][100], temp[100][100];
FILE *input=fopen("input.txt","r");
fscanf(input,"%d%d",&m,&n);
for(i=0;i<m;i++){
    for(j=0;j<n;j++){
        fscanf(input,"%f",&a[i][j]);
    }
}
fclose(input);
    int x1,x2,y1,y2;
    scanf("%d %d",&x1,&y1);
    scanf("%d %d",&x2,&y2);
    for(i=0;i<m;i++){
    for(j=0;j<n;j++){
        temp[i][j]=a[i][j];
    }
}
    for(i=x1;i<=x2;i++){
        for(j=y1;j<=y2;j++){
            if(i==0){
                if(j==0){
                    temp[i][j]=(a[i][j]+a[i+1][j]+a[i+1][j+1]+a[i][j+1])/4.0;
                }
                else if(j==n-1){
                    temp[i][j]=(a[i][j]+a[i+1][j]+a[i+1][j-1]+a[i][j-1])/4.0;
                }
                else{
                    temp[i][j]=(a[i][j]+a[i][j-1]+a[i+1][j-1]+a[i+1][j]+a[i+1][j+1]+a[i][j+1])/6.0;
                }
            }
                else if(i==m-1){
                    if(j==0){
                     temp[i][j]=(a[i][j]+a[i-1][j]+a[i-1][j+1]+a[i][j+1])/4.0;   
                    }
                    else if(j==n-1){
                    temp[i][j]=(a[i][j]+a[i][j-1]+a[i-1][j-1]+a[i-1][j])/4.0;    
                    }
                    else{
                    temp[i][j]=(a[i][j]+a[i][j-1]+a[i-1][j-1]+a[i-1][j]+a[i-1][j+1]+a[i][j+1])/6.0;    
                    }
                }
                else if(j==0&&i!=0&&i!=m-1){
                temp[i][j]=(a[i][j]+a[i-1][j]+a[i-1][j+1]+a[i][j+1]+a[i+1][j+1]+a[i+1][j])/6.0;
                }
                else if(j==n-1&&i!=0&&i!=m-1){
                temp[i][j]=(a[i][j]+a[i-1][j]+a[i-1][j-1]+a[i][j-1]+a[i+1][j]+a[i+1][j-1])/6.0;
                }
                else{
                temp[i][j]=(a[i][j]+a[i-1][j]+a[i-1][j+1]+a[i][j+1]+a[i+1][j+1]+a[i+1][j]+a[i+1][j-1]+a[i][j-1]+a[i-1][j-1])/9.0;    
                }
        }
    }
    FILE *output=fopen("output.txt","w");
    for(i=0;i<m;i++){
    for(j=0;j<n;j++){
        fprintf(output,"%.2f ",temp[i][j]);
    }
    fprintf(output,"\n");
}
    fclose(output);
        printFile();
    return 0;
}
