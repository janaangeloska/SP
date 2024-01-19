/*Да се напише програма која што од датотека со име "text.txt" ќе ги одреди и ќе ги испечати на стандарден излез:
    релативната фреквенција на сите мали букви
    релативната фреквенција на сите големи букви
Релативната фреквенција на даден(и) карактер(и) се пресметува како количник на вкупното појавување на тој/тие карактер/и со вкупниот број на карактери во текстот (да се игнорираат празните места и специјалните знаци).
Да не се менува функцијата writeToFile().*/

#include <stdio.h>
void writeToFile() {
    FILE *f = fopen("text.txt", "w");
    char c;
    while((c = getchar()) != '#') {
        fputc(c, f);
    }
    fclose(f);
}
int main() {
    writeToFile();
    FILE *f = fopen("text.txt", "r");
    double RelativnaFrekvencijaMali, RelativnaFrekvencijaGolemi;
    int maliBukvi=0,golemiBukvi=0, VkupnoBukvi;
    char a;
    while((a=fgetc(f)) != EOF){
            if (islower(a) && a != ' ' && ispunct(a) == 0 && isdigit(a)==0) {
                maliBukvi++;
            }
            if (isupper(a) && a != ' ' && ispunct(a) == 0 && isdigit(a)==0) {
                golemiBukvi++;
            }
        }
    VkupnoBukvi=maliBukvi+golemiBukvi;
    RelativnaFrekvencijaMali=(double)maliBukvi/(double)VkupnoBukvi;
        RelativnaFrekvencijaGolemi=(double)golemiBukvi/(double)VkupnoBukvi;
    printf("%.4lf\n",RelativnaFrekvencijaGolemi);
        printf("%.4lf",RelativnaFrekvencijaMali);
    fclose(f);
    return 0;
}
