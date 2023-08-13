/*Од тастатура се внесуваат димензиите на една матрица (m,n <= 100), а потоа и елементите од матрицата. Да се трансформира матрицата така што средниот елемент во секоја редица ќе се замени со разликата (по апсолутна вредност) на сумата на елементите во првата половина од редицата и сумата на елементите во втората половина на редицата. Ако матрицата има парен број колони, се менува вредноста на средните два елемента. Средниот/те елемент/и влегува/ат во сумите (при непарен број на колони, средниот елемент влегува во двете суми!). Да се испечати на екран променетата матрица.

Пример.

Влез:

m = 4

n = 4

1 3 -5 4

2 10 2 10

7 2 3 5

3 2 10 3

Излез:

1 5 5 4

2 0 0 10

7 1 1 5

3 8 8 3
  */
#include<stdio.h>
#include<stdlib.h>
int main(){
    int n, i, j, m, a[100][100], b[100][100],SredenZbirLevo,SredenZbirDesno,Razlika;
    scanf("%d%d",&m,&n);
    for(i=0;i<m;i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
        for(i=0;i<m;i++) {
            SredenZbirLevo=0;
            SredenZbirDesno=0;
            if(n%2==0){
            for (j = 0; j < n/2 ; j++) {
                    SredenZbirLevo+=a[i][j];
                }
                for (j = n/2; j < n ; j++){
                    SredenZbirDesno+=a[i][j];
            }
            Razlika=(abs)(SredenZbirLevo-SredenZbirDesno);
            a[i][(n/2)-1]=Razlika;
            a[i][n/2]=Razlika;
            for (j = 0; j < n; j++) {
                printf("%d ",a[i][j]);
            }
            printf("\n");
        }else{
            for (j = 0; j < n/2; j++){
                    SredenZbirLevo+=a[i][j];
                }
                for (j = n/2+1; j < n; j++){
                    SredenZbirDesno+=a[i][j];
                }
                Razlika=(abs)(SredenZbirLevo-SredenZbirDesno);
                a[i][n/2]=Razlika;
                for (j = 0; j < n; j++) {
                    printf("%d ",a[i][j]);
                }
                printf("\n");
            }
        }
    return 0;
}
