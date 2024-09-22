#include<stdio.h>
int main()
{
    int X,Y;
    float total;
    scanf("%d %d",&X,&Y);
    float item[5] = {4.00,4.50,5.00,2.00,1.50};
    total = item[X-1]*Y;
    printf("%Total: R$ %.2f\n",total);
    return 0;
}
