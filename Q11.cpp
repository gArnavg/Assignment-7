#include<iostream>
using namespace std;
int main() 
{
    int n;
    cout<<"Enter No Of Rows ";
    cin >> n;
    // Printing upper triangle
    for(int i = 0; i < n; ++i) 
    {
        for(int j = 0; j < n-i-1; ++j) 
        {
            cout << "  ";
        }
        for(int j = 0; j <= i; ++j) 
        {
            cout << "* ";
        }
        cout << endl;
    }
    // Printing lower triangle
    for(int i = 0; i < n-1; ++i) 
    {
        for(int j = 0; j <= i; ++j) 
        {
            cout << "  ";
        }
        for(int j = 0; j < n-i-1; ++j) 
        {
            cout << "* ";
        }
        cout << endl;
    }
}