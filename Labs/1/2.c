/*Да се напише програма која од стандарден влез чита еден двоцифрен и еден трицифрен број. На излез да се отпечати производот на цифрите кои се наоѓаат на позицијата на десетките кај двата броја.*/
#include <stdio.h>
int main()
{
    int br1, br2;
    scanf("%d%d", &br1, &br2);
    br1=br1/10;
    br2=br2/10%10;
    printf("%d\n", br1 * br2);
    return 0; 
}
