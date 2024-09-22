#include<stdio.h>
int main()
{
    float N1,N2,N3,N4,N5;
    float avg,avg2;
    scanf("%f %f %f %f",&N1,&N2,&N3,&N4);

    avg = ((N1*2)+(N2*3)+(N3 *4)+N4)/10;

    printf("Media: %.1f\n",avg);


    if (avg>=7.0)
        printf("Aluno aprvoado.\n");

    else if(avg<5.0)
        printf("Aluno reprovado.\n");

    else{
        printf("Aluno em exame\n");
        scanf("%f",&N5);
        printf("Nota do exame: %.1f\n",N5);

        avg2 = (avg+N5)/2;
        if(avg2>=0.5)
            printf("Aluno aprovado.\n");

        else
            printf("Aluno reprovado.\n");

        printf("Media final: %.1f\n",avg2);
    }
   return 0;
}
