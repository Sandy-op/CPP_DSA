#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter the first digit"<<endl;
    cin>> a;
    cout<<"Enter the second digit"<<endl;
    cin>> b;

    char op;
    cout<<"Enter the opreator"<<endl;
    cin>> op;

    switch (op)
    {
    case '+': cout<< (a+b) <<endl;
        break;
    case '-': cout<< (a-b) <<endl;
        break;
    case '*' : cout<< (a*b) <<endl;
        break;
    case '/' : cout<< (a/b) <<endl;
            
    default: cout<<"Enter valid operator"<<endl;
        break;
    }
}