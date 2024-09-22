#include<iostream>
using namespace std;

int main()
{
    int A,B,C,result,MAX;
    cin>>A>>B>>C;

    result = (A+B+abs(A-B))/2;
    MAX=(result+C+abs(result-C))/2;

    cout<<MAX<<" eh o maior"<<endl;
    return 0;
}
