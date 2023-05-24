#include<iostream>
using namespace std;


void finddupli(int arr[], int n){
    int ans = 0;
    for(int i=0; i<n; i++){
        ans = ans^arr[i];
    }
    for(int i=1; i<n; i++){
        ans = ans^i;
    }
}

void printdupli(int arr[],int n){
    for(int i=0; i<n; i++){
        cout<< arr[i]^i <<endl;
    }
}

int main (){
    int arr[6]{1,2,3,4,1,5};

    finddupli(arr, 6);
    printdupli(arr, 6);
}