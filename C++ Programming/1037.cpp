#include <iostream>

using namespace std;

int main() {

    float a;
    cin>>a;

    if(a<0.00 || a>100.00)
        cout<<"Fora de intervalo\n";

    else if(a>=0.00 && a<=25.00)
        cout<<"Intervalo [0,25]\n";

    else if(a>=25.01 && a<=50.00)
        cout<<"Intervalo (25,50]\n";

    else if(a>=50.01 && a<=75.00)
        cout<<"Intervalo (50,75]\n";

    else if(a>=75.01 && a<=100.00)
        cout<<"Intervalo (75,100]\n";

    return 0;
}
