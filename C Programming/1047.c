#include<stdio.h>
int main()
{
    int a,b,c,d;
    int time;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    time = ((b*60)+d) - ((a*60)+c);
    if(time<=0)
        time += 24*60;
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",time/60,time%60);
    return 0;
}
