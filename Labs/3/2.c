/*Да се напише програма која за дадени поени од испити по 5 предмети внесени преку стандарден влез ќе пресмета оцена по секој предмет и вкупен просек на студентот според оцените(заокружен на две децимали).

Оценa    Поени 
 5            0-49
 6            50-59
 7            60-69
 8            70-79
 9            80-89
 10          90-100*/

#include <stdio.h>
int main()
{
    int oc, i=1;
    int avg=0;
    while(i<=5){
    scanf("%d",&oc);
    if(oc>=0&&oc<=49){
    printf("5 ");
        avg=avg+5;
    }
    if(oc>=50&&oc<=59){
    printf("6 ");
        avg=avg+6;
    }
    if(oc>=60&&oc<=69){
    printf("7 ");
        avg=avg+7;
    }
    if(oc>=70&&oc<=79){
    printf("8 ");
        avg=avg+8;
    }
    if(oc>=80&&oc<=89){
    printf("9 ");
        avg=avg+9;
    }
    if(oc>=90&&oc<=100){
    printf("10 ");
    avg=avg+10;}
    i++;
}
printf("\n%.2f",avg/5.0);
return 0;
}