#include<stdio.h>
int main()
{
    float x,avg,y=0;
    int count=0;

    for(int i=0; i<6; i++)
    {
        scanf("%f",&x);
        if(x>0)
        {
            y =y+x;
            count++;
        }

    }
    avg = y/count;

   printf("%d valores positivos\n%.1f\n", count, avg);


    return 0;
}
