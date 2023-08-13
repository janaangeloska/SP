/*Од стандарден влез се чита природен број N (N <= 100), како и низа a[ ] од N цели броеви. 

Да се напише функција void premesti(а, n) која го преместува секој пронајден негативен број на крајот на низата. По преместувањето редоследот на позитивните броеви треба да остане ист како и во оригиналната низа, а истото важи и за редоследот на негативните.

Нaпишете програма која ќе ја повика функцијата premesti за внесената низа a[ ] и потоа ќе ја испечати новодобиената низа.

Пример.

Влез

9 // бројот N на елементи

1 3 -3 2 5 -7 9 0 3 // елементи на низата

Излез

1 3 2 5 0 3 -3 -7 -9 // добиената низа, после преместувањето*/

#include <stdio.h>
void premesti(int *a, int n) {
    int brojac = 0;
    int PocetokNaNegativni = 0;
    for (int i = 0; i < n; i++) {
        if (*(a + i) >= 0) {
            printf("%d ", *(a + i));
        } else {
            brojac++;
        }
    }
    PocetokNaNegativni = n - brojac - 1;
    for (int i = 0; i < n; i++) {
        if (*(a + i) < 0) {
            while(PocetokNaNegativni<n) {
                printf("%d ", *(a + i));
                PocetokNaNegativni++;
                break;
            }
        }
    }
    }
int main(){
    int a[100],N;
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        scanf("%d",&a[i]);
    }
    premesti(a,N);
    return 0;
}
