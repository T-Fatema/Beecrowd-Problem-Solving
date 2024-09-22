#include <iomanip>
#include <iostream>

using namespace std;

int main() {

    float N1,N2,N3,N4,N5;
    cin>>N1>>N2>>N3>>N4;

    float avg,avg2;

    avg = ((N1 * 2)+ (N2*3)+ (N3 *4) + (N4*1))/10;
    cout << setprecision(1);
    cout<<"Media: \n"<<avg;


    if (avg>=7.0)
        cout<<"Aluno aprovado.\n";

    else if(avg<5.0)
        cout<<"Aluno reprovado.\n";

    else{
        cout<<"Aluno em exame.\n";
        cin>>N5;
        cout << setprecision(1);
        cout<<"Nota do exame: \n"<<N5;

        avg2 = (avg+N5)/2;
        if(avg2>=0.5)
            cout<<"Aluno aprovado.\n";

        else
            cout<<"Aluno reprovado.\n";

        cout << setprecision(1);
        cout<<"Media final: \n";
    }
    return 0;
}
