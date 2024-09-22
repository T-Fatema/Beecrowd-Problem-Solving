#include <stdio.h>
int main()
{
    char name[20];
    scanf("%s", name);
    double salary,value,total;
    scanf("%lf %lf",&salary,&value);
    total = salary + value*.15;
    printf("TOTAL = R$ %.2lf\n",total);
    return 0;
}
