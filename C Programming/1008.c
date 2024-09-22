#include<stdio.h>
int main()
{
    int number,hour;
    float amount;
    scanf("%d",&number);

    scanf("%d",&hour);
    scanf("%f",&amount);
    float salary;
    salary = hour * amount;

    printf("NUMBER = %d\n",number);
    printf("SALARY = U$ %.2f\n",salary);
    return 0;
}
