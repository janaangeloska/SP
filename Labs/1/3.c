/*Да се напише програма која за внесени две времиња (во формат чч:мм:сс чч-час, мм-минути, сс-секунди) ќе пресмета и отпечати колку е периодот помеѓу нив (во формат чч:мм:сс)

Напомена: Секогаш првовнесеното време е помало (во минатото) во споредба со второ време. Двете времиња секогаш припаѓаат во ист ден, односно нема да има тест пример каде прво време е 23:30:00 и второ внесено време е 00:30:00.*/

#include <stdio.h>
int main()
{
 int cas, min, sec, s1, s2, svk;
 scanf("%d %d %d", &cas, &min, &sec);
 s1= cas*3600 + min*60 + sec;
 scanf("%d %d %d", &cas, &min, &sec);
 s2= cas*3600 + min*60 + sec;
 svk= s2 - s1;
 printf("%.2d:%.2d:%.2d", svk/3600, svk%3600/60, svk%3600%60);
 return 0;
}
