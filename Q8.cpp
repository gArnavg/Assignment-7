#include<iostream>
using namespace std;
int main()
{
    int ro;
    cout<<"Please Enter the no. of required rows ";
    cin>>ro;
    for(int i = 1; i<=ro ; i++)
    {
        for(int j = 1; j<=i ; j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;

    }
}