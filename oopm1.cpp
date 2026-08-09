#include<iostream>
using namespace std;

int main(){
    int arr[10]={1,0,5,0,3,0,7,2,0,4};
    int n= 10;

    int j=0;

    for(int i=0; i<n; i++){
        if(arr[i]==0){
            swap(arr[i],arr[j]);
            j++;
        }
    }

    cout<<"array after arranging zeroes at beginning: ";

    for(int i=0; i<n; i++){
        cout<<arr[i]<<"";

    }
    return 0;
}