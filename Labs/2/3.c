/*Од стандарден влез се вчитуваат следните податоци за еден студент на ФИНКИ:
    индекс (шестцифрен цел број)
    шест оценки од последниот семестар кој го слушал
Да се напише програма која што на стандарден излез ќе ги испечати следните информации за студентот: (погледнете во тест примерите за форматот на печатење)
    просек на студентот
        просекот да се испечати со точност од 3 децимали
    година на студии
        студентите чијшто индекс почнува на 21 се втора година, 20 се трета година, 19 се четврта година итн.
    дали е награден (1 = награден, 0 = не е награден)
        Еден студент се наградува доколку има просек еднаков или поголем од 9.5
*/

#include <stdio.h>
int main()
{
    int index;
    int oc1, oc2, oc3, oc4, oc5, oc6;
    int god;
    float SrednaOcena;
    scanf("%d %d %d %d %d %d %d", &index, &oc1, &oc2, &oc3, &oc4, &oc5, &oc6);
    SrednaOcena = (float)(oc1 + oc2 + oc3 + oc4 + oc5 + oc6) / 6.0;
    printf("Prosek: %.3f\n", SrednaOcena);
    printf("Student: %d\n", index);
    god = index / 10000;
    if(god == 22)
        printf("1 godina\n");
    if(god == 21)
        printf("2 godina\n");
    if(god == 20)
        printf("3 godina\n");
    if(god == 19)
        printf("4 godina\n");
    if(god == 18)
        printf("5 godina\n");
    if(god == 17)
        printf("6 godina\n");
    if(god == 16)
        printf("7 godina\n");
    if(god == 15)
        printf("8 godina\n");
    if(SrednaOcena >= 9.5) {
        printf("Nagraden: 1");
    } else {
        printf("Nagraden: 0");
    }
    return 0;
}
