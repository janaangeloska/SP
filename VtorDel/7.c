/*Од тастатура се внесуваат димензиите на една матрица (m, n <= 100), а потоа и елементите од матрицата. Да се генерира низа (со најмногу m) така што секој елемент од низата се добива со наоѓање на елементот во секоја редица од матрицата што е најоддалечен од аритметичката средина во рамки на таа редица. Ако постојат повеќе елементи што се најоддалечени од аритметичката средина, тогаш се зема предвид првиот. Редоследот на запишување на елементите во низата одговара на редоследот на редиците.

Пример:

Влез:

3 6

1 2 2 3 4 5

1 1 2 2 3 3

1 2 3 4 5 6

Излез:

5 1 1
*/

#include<stdio.h>
int main(){
    int a[100][100],  i, j, m, n,zbir=0,maxelement;
    double AS, maxrazlika,maxrazlika1;
    scanf("%d%d",&m,&n);
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<m;i++) {
        zbir=0;
        maxrazlika=a[i][0];
        maxrazlika1=0;
        maxelement=0;
        AS=0;
        for (j = 0; j < n; j++) {
            zbir += a[i][j];
        }
            for (j = 0; j < n; j++) {
                AS = (double)zbir / n;
                maxrazlika = AS - a[i][j];
                if(maxrazlika<0){
                    maxrazlika*=-1;
                }
                if(maxrazlika == 0 && maxrazlika1==0){
                    maxelement=a[i][j];
                    
                }
                if (maxrazlika > maxrazlika1) {
                    maxrazlika1 = maxrazlika;
                    maxelement = a[i][j];
                }
            }
            printf("%d ", maxelement);
        }
    return 0;
}
