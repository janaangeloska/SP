/*Дадена е текстуална датотека text.txt.
Да се избројат и испечатат сите последнователни појавувања на соседни самогласки во датотеката. 
Појавата на големи и мали букви да се игнорира. Пронајдените парови самогласки да се испечатат на екран, 
секој во нов ред со мали букви. Потоа во нов ред се печати бројот на појавувања на паровите самогласки.
Пример: за датотеката:
IO is short for Input Output
medioio medIo song
излез:

io
ou
io
oi
io
io
6
*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>

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
    char bukva, bukva1, bukva2;
    int brojac=0;
    FILE *f = fopen("text.txt", "r");
    while((bukva=fgetc(f))!=EOF) {
            bukva1 = bukva2;
            bukva2 = tolower(bukva);
            if ((bukva1 == 'a' || bukva1 == 'e' || bukva1 == 'o' || bukva1 == 'i' || bukva1 == 'u') &&
                (bukva2 == 'a' || bukva2 == 'e' || bukva2 == 'o' || bukva2 == 'i' || bukva2 == 'u')) {
                printf("%c%c\n", bukva1, bukva2);
                brojac++;
            }
        }
        printf("%d",brojac);
        fclose(f);
        return 0;
    }
