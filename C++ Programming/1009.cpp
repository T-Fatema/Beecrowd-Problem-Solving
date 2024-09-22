
#include <bits/stdc++.h>
using namespace std;

int main()
{
    char name[20];
    cin>>name;
    double salary,value,total;
    cin>>salary>>value;
    total = salary + value*.15;
    cout<<fixed;
    cout<<setprecision(2)<<"TOTAL = R$ "<<total<<endl;

    return 0;
}
