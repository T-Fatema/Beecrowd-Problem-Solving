
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int number,hour;
    float amount,salary;
    cin>>number;
    cin>>hour;
    cin>>amount;

    salary = hour * amount;

    cout<<"NUMBER = "<<number<<endl;
    cout<<fixed;
    cout<< setprecision(2)<<"SALARY = U$ " <<salary<<endl;
    return 0;

}
