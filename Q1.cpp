#include<iostream>
using namespace std;
int main()
{
    int colm;
    int ro;

    cout<<"Please Enter the no. of required columns ";
    cin>>colm;

    cout<<"Please Enter the no. of required rows ";
    cin>>ro;

    for(int i = 1; i<=ro ; i++)
    {
        for(int j = 1; j<=colm ; j++)
        {
            cout<<i;
        }
        cout<<endl;

    }
}
