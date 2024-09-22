#include<bits/stdc++.h>
using namespace std;
int main()
{
    double R,VOLUME;
    cin>>R;

    VOLUME = (4/3.0)*3.14159*R *R *R;
    cout<<fixed;
    cout<<setprecision(3)<<"VOLUME = "<<VOLUME<<endl;
    return 0;
}
