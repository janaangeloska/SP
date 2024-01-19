/*Од тастатура се читаат знаци (од некој текст кој се состои од различни знаци и кој претставува некаква реченица, т.е. се состои од неколку збора составени од мали букви и секогаш завршува со точка) се дури не се прочита точка. 
Да се направи програма која на излез ќе ги отпечати истите зборови со таа разлика што во зборовите кои имаат исти букви една до друга, првата буква ќе ја отпечати како голема буква.
Забелешка: да се претпостави дека нема зборови кои ќе имаат повеќе од две исти букви едно по друго.

Пример за влез	
koga ana ili goran oro igraat site gledaat.	
igrame i peeme celo vreme
poddrska davame samo na pravednite.

Пример за излез
koga ana ili goran oro igrAat site gledAat.
igrame i pEeme celo vreme
poDdrska davame samo na pravednite*/

#include <stdio.h>
int main()
{
char bukva, bukva1, bukva2, flag=0;
while(scanf("%c",&bukva)){
if(bukva=='.'){
    break;}
    else{
        bukva1=bukva2;
        bukva2=bukva;
        if(flag==1){
        if(bukva1==bukva2){
            printf("%c",bukva1-32);
        }
        else{
            printf("%c",bukva1);
        }}
        else
        flag=1;
    }}
    printf("%c.",bukva2);
    return 0;
}
