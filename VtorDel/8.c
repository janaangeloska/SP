/*Во дадена датотека dat.txt да се најде најдолгиот ред во кој има барем 2 цифри. На стандарден излез да се испечатат знаците од најдолгиот ред кои се наоѓаат помеѓу првата и последната цифра (заедно со тие 2 цифри) во истиот редослед. Доколку има повеќе такви редови се печати последниот. Се претпоставува дека ниту еден ред на датотеката не е подолг од 100 знаци.

Пример.

Влез: 
dat.txt:
    aaa123aa222aa2aaa23aaaaa22
    aaaaaaaaaaaa 23aaaa
    123 aaa aaa aaa aaa 12345 aaa aaa 2a

Излез:
    123 aaa aaa aaa aaa 12345 aaa aaa 2
*/

#include <stdio.h>
#include <string.h>
// ne menuvaj ovde
void wtf() {
    FILE *f = fopen("dat.txt", "w");
    char c;
    while((c = getchar()) != EOF) {
        fputc(c, f);
    }
    fclose(f);
}
int main() {
    wtf();
    FILE *f = fopen("dat.txt", "r");
    char niza[100], najdolgaNiza[100];
    int NajdolgRed = 0, DolzinaNaNiza = 0, Cifri, i, PozicijaNaPrvaCifra, PozicijaNaPoslednaCifra = -1;
    while (fgets(niza, 101, f)) {
        PozicijaNaPrvaCifra = -1;
        DolzinaNaNiza = strlen(niza);
        Cifri = 0;
        for (i = 0; i < DolzinaNaNiza; i++) {
            if (niza[i] >= '0' && niza[i] <= '9') {
                Cifri++;
            }
        }
        if (Cifri >= 2 && DolzinaNaNiza >= NajdolgRed) {
            NajdolgRed = DolzinaNaNiza;
            strcpy(najdolgaNiza, niza);
        }
        for (i = 0; i < NajdolgRed; i++) {
            if (PozicijaNaPrvaCifra == -1 && najdolgaNiza[i] >= '0' && najdolgaNiza[i] <= '9') {
                PozicijaNaPrvaCifra = i;
            } else if (najdolgaNiza[i] >= '0' && najdolgaNiza[i] <= '9') {
                PozicijaNaPoslednaCifra = i;
            }
        }
    }
    for (i = PozicijaNaPrvaCifra; i <= PozicijaNaPoslednaCifra; i++) {
        printf("%c", najdolgaNiza[i]);
    }
    fclose(f);
    return 0;
}
