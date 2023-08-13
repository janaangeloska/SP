/*Од стандарден влез се чита цел број N (N<=100) и потоа N низи од знаци. Низите знаци содржат букви, цифри и специјални знаци (без знаци за празно место), а секоја од нив не е подолга од 80 знаци.
Да се напише програма со која што на стандарден излез ќе се отпечати најдолгата низа, којашто е палиндром (се чита исто од од лево на десно и од десно на лево) и што содржи барем еден специјален знак. Ако нема такви низи, се печати "Nema!". Ако има две или повеќе низи што го задоволуваат овој услов, се печати првата низа којашто го задоволува условот.

Влез:

9

a!bcdedcb!a

Kfd?vsvv98_89vvsv?dfK

Ccsvsdvdfv

342425vbbcb

352!2353696969625

gdg??dfg!!

5336346644747

8338736767867

12344321

Излез:

Kfd?vsvv98_89vvsv?dfK*/

#include <stdio.h>
#include <string.h>
int isPalindrome(char *a, int n){
    //fja za proverka na palindrom
    int i, Palindrome=1;//znamence
    for (i = 0; i < n / 2; i++) {
        //odime do pola na nizata i pregleduvame ogledalni clenovi
        if (a[i] != a[n - 1 - i]) {
            //ako se najde element razlicen so ogledalniot, 
            //znamenceto se menuva i izleguvame od ciklusot 
            Palindrome = 0;
            break;
        }
    }
    //se vrakja vrednosta na znamenceto
    return Palindrome;
}
int main() {
    int n, i, NajdolgaNiza=0,Niza, PostoiPalindrom=0;
    char text[100],NajgolemPalindrom[100];
    //vcituva n broj
    scanf("%d",&n);
    //vcituva n nizi od znaci
    for(i=0;i<n;i++){
        //vnes na nizi od znaci bez prazno mesto
        scanf("%s", text);
        //dolzhina na vnesenata niza
        Niza=strlen(text);
        //ako dolzhinata na novata niza e pogolema od prethodno najgolemata niza
        if(Niza>NajdolgaNiza){
            //i ako taa e palindrom(se povikuva f-ja za da se proveri dali taa e palindrom)
            if(isPalindrome(text, Niza)){
                for(int j=0;j<Niza;j++){
                    //proverka dali ima barem eden specijalen znak 
                if (!((text[j] >= 'a' && text[j] <= 'z') ||
                (text[j] >= 'A' && text[j] <= 'Z') ||
                (text[j] >= '0' && text[j] <= '9'))){
                    //ako se najde barem eden vakov znak, vo pomoshnata niza 
                    //NajgolemPalindrom se kopira najdeniot palindrom 
                strcpy(NajgolemPalindrom, text);
                //flagot se menuva so cel deka e najden barem eeden palindrom
                PostoiPalindrom=1;
                //menuvame deka nova Najdolga niza e segashnata najdena niza
                NajdolgaNiza=Niza;
                //izlez od ciklus
                break;
                }
                }
            }
        }
    }
    //ako flagot ni se smenal od 0 vo 1 pri izvrshuvanje na prgramata 
    //se pecati najgolemiot Palindrom
    if(PostoiPalindrom!=0){
        printf("%s",NajgolemPalindrom);
    }
    else{
        printf("Nema!");
    }
    return 0;
}
