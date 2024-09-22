#include<iostream>
using namespace std;

int main()
{
    double R,A;
    cin>>R;

    A = 3.14159 * R * R;

    cout<<fixed;
    cout << setprecision(3) << A;

    return 0;
}
