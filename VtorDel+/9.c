/*Од стандарден влез се внесуваат непознат број на реченици претставени преку текстуални низи (стрингови) секоја не подолга од 100 знаци и секоја во нов ред. Програмата треба да го најде стрингот кој содржи најмногу сврзници и да го испечати заедно со бројот на најдените сврзници. За сврзници се сметаат сите зборови составени од една, две или три букви. Зборовите во текстуалната низа се одделени со едно или повеќе прзани места и/или интерпункциски знак.

Броењето на сврзници во дадена текстуална низа треба да се реализира во посебна функција. Решенијата без користење функција ќе бидат оценети со најмногу 40% од поените.

Ако има повеќе реченици со ист максимален број на сврзници, се печати прво најдената.

Објаснување на тест примерот:
Бројот на сврзници по реченици е 2, 3, 4, 2, 4 и 7 соодветно. Најмногу сврзници има по последната реченица па се печати бројот 7 и содржината на таа реченица.*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
int svrznici(char *sentence){
    int i, j, k, counter=0,vkupno=0;
    for(i=0;i<strlen(sentence);i++){
        if(isalpha(sentence[i])){
            counter++;
        }
        else{
            if(!isalpha(sentence[i])||sentence[i]=='\0'){
                if(counter==1||counter==2||counter==3){
                vkupno++;
        }
        counter=0;
    }
}
}
        return vkupno;
}
int main(){
    char recenica[100],max[100],max1[100];
    int VkSvrznici,MaxSv=0;
while(fgets(recenica,sizeof(recenica),stdin)){
    recenica[strlen(recenica)-1]='\0';
    VkSvrznici=svrznici(recenica);
    if(VkSvrznici>MaxSv){
        MaxSv=VkSvrznici;
        strcpy(max,recenica);
    }
}
 printf("%d: %s\n",MaxSv, max);
    return 0;
}
