/*Во дадена датотека “broevi.txt” се запишани повеќе редови со броеви така што секој ред започнува со еден цел број (N>=1) што означува колку броеви следуваат по него во тој ред. Да се напише програма која на СИ за секој ред ќе го испечати бројот со најголема најзначајна цифра. Читањето на броеви завршува кога ќе се прочита 0.*/

#include <stdio.h>
#include <string.h>
#define MAX 100

//ne menuvaj!
void wtf() {
    FILE *f = fopen("broevi.txt", "w");
    char c;
    while((c = getchar()) != EOF) {
        fputc(c, f);
    }
    fclose(f);
}
int main()
{
    wtf();
    FILE *f = fopen("broevi.txt", "r");
    int i, N, x, pom;
    while(fscanf(f, "%d", &N) == 1 && N != 0){
        int max=0;
        int maxn=0;
        for(i=0;i<N;i++){
            fscanf(f,"%d",&x);
            pom=x;
            while(x>=10){
                x/=10;
            }
            if(x>max){
                max=x;
                maxn=pom;
            }
        }
        printf("%d\n", maxn);
    }
        fclose(f);
        return 0;
}
