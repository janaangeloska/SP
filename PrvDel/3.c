/*Од стандарден влез се чита еден природен број n. 
Меѓу природните броеви помали од n, да се најде оној чиј што збир на делителите е најголем. 
Во пресметувањето на збирот на делителите на даден број, да не се зема предвид самиот број. */

#include<stdio.h>
int main() 
{
    int n, i, maxSuma=0, tempSuma, j, br=0;
    scanf("%d", &n);
    for(i=1;i<n;i++){
        tempSuma=0;
        for(j=1;j<i;j++){
            if(i%j==0){
                tempSuma+=j;
            }
        }
        if(tempSuma>maxSuma){
            maxSuma=tempSuma;
            br=i;
        }
    }
    printf("%d", br);
    return 0;
}
