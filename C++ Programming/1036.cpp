#include<bits/stdc++.h>
using namespace std;

int main()
{
    double A,B,C,pr1;
    cin>>A>>B>>C;

    pr1 = (B*B)-(4*(A)*(C));

    if(pr1>0 && A!=0)
    {
        double X,Y;
		pr1 = sqrt(pr1);
		X = (-B + pr1)/(2*A);
		Y = (-B - pr1)/(2*A);
		cout<<fixed;
		cout<<setprecision(5)<<X<<endl;
		cout<<setprecision(5)<<Y<<endl;
    }
    else
	 {
		cout<<"Impossivel calcular"<<endl;
	}
}
