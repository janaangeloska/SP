/*Да се напише рекурзивна функција која ќе го најде бројот на позитивни броеви од целобројна низа. Функцијата како аргумент ја прима низата, за која се бара бројот на позитивни броеви и вкупниот број на елементи, кои ги има таа низа. Функцијата е зададена со следниот прототип:

int BrojPozitivni(int niza[], int n);

Да се напише и функција main() за тестирање на функцијата BrojPozitivni.*/

#include<stdio.h>
int BrojPozitivni(int niza[], int x){
    if(niza[x]>0){
           return 1;
       }else{
           return 0;
       }
    }
int main() {
    int a[100], n, i,counter=0;
    scanf("%d ",&n);
    for(i=0;i<n;i++){
        scanf("%d ",&a[i]);
        if(BrojPozitivni(a,i))
        counter++;
    }
    printf("%d ",counter);
    return 0;
}
