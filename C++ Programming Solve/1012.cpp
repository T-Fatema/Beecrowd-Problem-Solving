#include<bits/stdc++.h>
using namespace std;
int main()
{
    double A,B,C;
    cin>>A>>B>>C;

    cout<<fixed;
    cout<<setprecision(3)<<"TRIANGULO: "<<0.5*A*C<<endl;
    cout<<setprecision(3)<<"CIRCULO: "<<3.14159*C*C<<endl;
    cout<<setprecision(3)<<"TRAPEZIO: "<<0.5*(A+B)*C<<endl;
    cout<<setprecision(3)<<"QUADRADO: "<<B*B<<endl;
    cout<<setprecision(3)<<"RETANGULO: "<<A*B<<endl;

    return 0;
}

