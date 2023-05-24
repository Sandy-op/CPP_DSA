// Selection Shorting 

#include<iostream>
using namespace std;

int main(){
    
    int n=6;
    int arr[]{7,2,4,9,10};
    for(int i=0; i<n-1; i++){
        int minindex = i;

        for(int j=i+1; j<n; j++){
            
            if(arr[j] < arr[minindex]){
                minindex = j;
            }
        }
        swap(arr[minindex] , arr[i]);
        cout<< arr[i] << " ";
    }
}



// it is used for shorting an array in accending or decending order. 
// for shorting an array we swap a minimum value of array to larger one.