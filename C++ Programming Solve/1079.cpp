#include<iostream>
using namespace std;
int main()
{
    int i,n;
    float a,b,c,total;

    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>a>>b>>c;
        total = a*2.0 + b*3.0 + c*5.0;
        cout<<total<<endl;
    }

    return 0;
}
