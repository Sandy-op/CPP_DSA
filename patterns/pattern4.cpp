#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"intput de";
    cin>> n;
    
    int row = 1 ;
    while (row<=n)
    {
        int col = n - row ;
        while(col)
        {
            cout<<"*";
            col = col - 1;
        }
        cout<< endl; 
        row = row + 1;
     
    }
    
}