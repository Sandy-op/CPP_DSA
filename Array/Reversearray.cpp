//Reverse an array
// for reversing an array we assum index 0 as start and n-1 as end node and swap it one bye one with start+1 and end-1 till start < than end.

#include<iostream>
using namespace std;
void reverse(int arr[], int n){
    int start = 0;
    int end = n-1;
    while (start<=end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    
}

void printArray(int arr[], int n){
    for( int i = 0; i < n; i++){
        cout<< arr[i] << " ";
    }
    cout<< endl;
}

int main(){
    int arr[5]{12,1,4,6,6,};
    int brr[6]{12,4,6,7,34,67};

    reverse(arr, 5);
    reverse(brr, 6);


    printArray(arr, 5);
    printArray(brr, 6);

    return 0;
}