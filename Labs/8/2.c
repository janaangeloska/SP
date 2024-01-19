/*Од тастатура се вчитуваат броевите A и B. На екран да се испечатат сите броеви од интервалот [A,B] кои се палиндроми и се составени само од цифрите 0,1,2,3 и 4. 
Предлог за работа: 
    Да се имплементира функција reverseNumber (int number) која ќе го пресмета обратниот број на определен број number.
    Да се имплементира функција isPalindrome (int number) која ќе врати 1 доколку бројот number е палиндром, а 0 во спротивно
    Да се имплементира функција containsDigits (int number) која ќе врати 1 доколку сите цифри во бројот се 0,1,2,3 или 4, а 0 во спротивно. 
    Да се искористат функциите isPalindrome и containsDigits во main функцијата
Дополнително: Направете ја функцијата containsDigits рекурзивна.*/

#include <stdio.h>
int reverseNumber(int number){
    int novBroj=0, cifra1;
    while(number>0){
  cifra1=number%10;
    novBroj=novBroj*10+cifra1;
    number=number/10;
    }
    return novBroj;
}
int isPalindrome(int number){
    if(reverseNumber(number)==number){
        return 1;
    }
    else{
        return 0;
    }
}
int containsDigits(int number){
    if(number==0){
    return 1;
    }
    if(number%10==0 || number%10==1 || number%10==2 || number%10==3 || number%10==4){
        return containsDigits(number/10);
    }
    else{
        return 0;
    }
}
int main() {
    int broj1, broj2;
    scanf("%d%d",&broj1,&broj2);
    for(int i=broj1;i<=broj2;i++) {
        if (isPalindrome(i)) {
            if (containsDigits(i)) {
                printf("%d\n", i);
            }
        }
    }
    return 0;
}
