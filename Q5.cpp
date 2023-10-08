#include<iostream>
using namespace std;
int main() 
{
    int ro;
    cout<<"Enter Number of Rows";
    cin >> ro;
    // Printing upper triangle
    for(int i = 0; i <= ro; ++i)
    {
        for(int j = 0; j <= i; ++j) 
        {
            cout << "* ";
        }
        cout << endl;
    }
    // Printing lower triangle
    for(int i = 0; i < ro-1; ++i) 
    {
        for(int j = 0; j < ro - i - 1; ++j)
        {
            cout << "* ";
        }
        cout << endl;
    }
}