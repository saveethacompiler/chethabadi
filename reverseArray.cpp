#include<iostream>
using namespace std;
int main(){
    int arr[100];
    int n,i,j,t;
    cout<<"enter no of elements:";
    cin>>n;
    cout<<"enter array elements::";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"array elements are::";
    for(i=0;i<n;i++){
    cout<<arr[i] <<endl;
    }
    for(i=0,j=n-1;i<n/2;i++,j--){
    t=arr[i];
    arr[i]=arr[j];
    arr[j]=t;
    }
    cout<<"reverse array::";
    for(i=0;i<n;i++){
    cout<<arr[i] <<endl;
    }
    return 0;
}
