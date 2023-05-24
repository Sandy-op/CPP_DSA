#include<iostream>
using namespace std;
int main ()
{

    // print n*n pattern 
    /*
    int n;
    cin>> n;

    int i=1;
    while(i<=n)
    {
        int j=1;
        while (j<=n)
        {
            cout<<"*";
            j=j+1;
        }
        cout<<endl;
        i=i+1;

    }
    */
   
   
                            // print n*n counting patter
                            /*1111
                                2222
                                3333
                                */
    /*
    int n;
    cin>> n;

    int i=1;
    while(i<=n)
    {
            int j=1;
            while(j<=n)
            {
                cout<< i ;
                j=j+1;
            }
            cout<< endl;
            i=i+1;
            
    }
    */


                            //1234
                            //1234
                            //1234
/*
    int n;
    cin>> n;

    int i=1;
    while (i<=n)
    {
        int j=1;
        while(j<=n)
        {
            cout<< n-j+1 ;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
  */



 //print n*n continous counting.
/*
    int n;
    cin>> n;

    int i=1;
    int count=1;
    while (i<=n)
    {
        int j=1;
        while(j<=n)
        {
            cout<< count<<" ";
            count=count+1;
            j=j+1;
        }
        cout<< endl;
        i=i+1;
    }
*/


// print triangle "*" pattern.
/*
    int n;
    cin>> n;

    int i=1;
    while (i<=n)
    {
        int j=1;
        while(j<=i)
        {
            cout<<"*";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    
    }
  */

//counting of row
   /* 
    int n;
    cin>> n;

    int row = 1;
    while (row<=n)
    {
        int col = 1;
        while(col <= row)
        {
            cout<< row ;
            col = col + 1;
        }
        cout<<endl;
        row = row + 1;
    }
    */

/*
   int n;
   cout<<"enter input";
   cin>> n;

   int row = 1;
   int value = row;
   while (row<=n)
   {
    int col = 1;
    while (col<=row)
    {
        cout<< value;
        value = value + 1;
        col = col + 1;
    }
    cout<<endl;
    row = row + 1;
    
   }
*/ 
/*
    int n;
    cout<< "Input"<<" ";
    cin>> n;

    int row = 1;
    while (row<=n)
    {
        int col=1;
        while(col<=row)
        {
            cout<<row-col+1 <<" ";
            col = col + 1;
        }
        cout<<endl;
        row = row + 1;
    }
*/

/*
    int n;
    cout<<" Give Input";
    cin>> n;

    int row = 1; 
    while (row<=n)
    {
        int col = 1;
        while(col<=n)
        {
            char ch = 'A' + col -1;//row
            cout<< ch;
            col = col + 1;
        }
        cout<<endl;
        row = row + 1;
    }
*/
/*
    int n;
    cout<< "input de"<<" ";
    cin>> n;
    char count = 'A';
    int row = 1;
    while (row<=n)
    {
        int col = 1;
        while (col<=n)
        {
            cout<< count;
            count = count + 1;
            col = col + 1;
        }
        cout<<endl; 
        row = row + 1;
        
        
    }
*/

/*
  int n;
  cin>>n;

  int row = 1;

  while(row<=n)
  {
    int col = 1;
    while(col<=n)
    {
        char ch = 'A'+ row + col - 2;
        cout<< ch;
        col = col + 1;
    }
    cout<<endl;
    row = row + 1;
  }  
*/


    int n;
    cout<<"Input dena  " <<" ";
    cin>> n;

    int row = 1;
    //int count = 1;
    while (row<=n)
    {
       int col = 1;
       char ch = 'A' + row -1;
       while (col<=row) 
       {
            cout<< ch ;
            ch = ch + 1;
            col = col + 1;
       }
       cout<< endl; 
       row = row + 1;
       
    }    



    
    











}
