/*Од стандарден влез се внесуваат два цели броја N и Х.
Да се најде најблискот број помал од N коj е тотално различен од бројот Х.
Еден број е тотално различен од друг ако и само ако во него не се појавува ниту една од цифрите на другиот број.
Задачата да се реши без употреба на низи и матрици.*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, x;
    scanf("%d %d",&n, &x);
    int kopija = x;
    int totalno;
    for (int i = n-1; i>0; i--){
        totalno = 0;
        x = kopija;
        while (x>0){
            int b = i;
            int cifra = x%10;
            x/=10;
            while (b>0)
            {
                int a = b%10;
                    b /= 10;
                    if (a == cifra){
                        totalno = 1;
                    }
            }
        }
        if (totalno == 0){
            printf("%d", i);
            break;
        }
    }
    if (totalno != 0)
            printf("0");
    return 0;
}
