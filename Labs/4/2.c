/*Од стандарден влез се вчитува број N, а потоа и N цели броеви. 
Да се испечати на екран најголемата разлика помеѓу два последователно внесени броја.
Да се реши без користење на низи!
Објаснување на примерот:
N=5, па се внесуваат 5 броја: 1,3,0,5,2. Разликите се соодветно:
3-1 = 2
0-3 = -3
5-0 = 5
2-5 = -3
Најголема разлика е 5.*/

#include<stdio.h>
int main() {
int n, N, i, razlika=0, broj1, broj2,MaxRazlika;
scanf("%d%d%d",&n, &broj1, &broj2);
MaxRazlika=broj2-broj1;
for(i=3;i<=n;i++) {
    scanf("%d", &N);
    broj1=broj2;
    broj2=N;
   razlika=broj2-broj1;
  if(MaxRazlika<razlika)
  MaxRazlika=razlika;
}
printf("%d",MaxRazlika);
return 0;
}
