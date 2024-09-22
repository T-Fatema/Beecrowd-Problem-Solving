#include<stdio.h>
int main()

{
    int a;
    scanf("%d",&a);

    if(a>=0.00 || a<=100.00)
        printf("Fora de intervalo\n");

    else if(a>=0.00 && a<=100.00)
        printf("Intervalo [0,25]\n");

    else if(a>=25.01 && a<=50.00)
        printf("Intervalo (25,50]");

    else if(a>=50.01 && a<=75.00)
        printf("Intervalo (50,75]");

    else if(a>=75.01 && a<=100.00)
        printf("Intervalo (75,100]");

    return 0;

}
