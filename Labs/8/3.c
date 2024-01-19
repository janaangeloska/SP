/*Да се прочита број N од тастатура. Да се дефинира функција form(int n) што ќе испечати форма од ѕвезди како што е прикажано на сликата.
За да се освојат сите поени од вежбата, потребно е функцијата form да биде рекурзивна.*/

#include <stdio.h>
void form(int n) {
    if (n == 0) {
        printf("\n");
        return;
    } else {
        if (n > 0) {
            printf("*");
            form(n - 1);
        }
    }
}
int main() {
    int N;
    scanf("%d", &N);
    while(N) {
        form(N);
        N--;
    }
    return 0;
}
