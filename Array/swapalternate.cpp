#include<iostream>
using namespace std;

int reverse(int arr[], int n){
    for(int i=0; i<n; i+=2 ){
        if(i+1 < n){
            swap(arr[i], arr[i+1]);
        }
        cout<<endl;
    }
}

void printarr(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<< arr[i]<<" ";
    }
    cout<<endl;
}
int main (){
    int arr[6]{1,3,5,6,8,10};
    int brr[5]{9,7,5,3,2};

    reverse(arr,6);
    printarr(arr,6);
    
    reverse(brr,5);
    printarr(brr,5);

    return 0;
}