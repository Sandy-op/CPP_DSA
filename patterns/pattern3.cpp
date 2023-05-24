#include<iostream>
using namespace std;
int main()
{

    int n;
    cout<<"input idhr"<<" ";
    cin>>n;

    int row ;
    while (row<=n)
    {
        int space = 1;
        while(space<=row)
        {
            cout<<" ";
            space = space + 1;
        }
        int col = 1;
        while(col<= n-row)
        {
            cout<< "*";
            col = col + 1;
        }
        cout<< endl;
        row = row + 1;
    }
    
}