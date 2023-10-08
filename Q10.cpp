
#include<iostream>
using namespace std;
int main()
{
    int ro;
    cout<<"Please Enter the no. of required rows ";
    cin>>ro;
    for(int i = 0; i < ro; ++i) 
    {
        for(int j = i+1; j >= 1; --j) 
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}