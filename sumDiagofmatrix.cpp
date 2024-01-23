#include<iostream>
using namespace std;
int main(){
    int a[3][3],c=0,d=0,i,j;
    cout<<"enter 1st matrix::"<<endl;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cin>>a[i][j];
        }
    }
   
    cout<<"1st matrix is::"<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(i==j)
            c+=a[i][j];
            if((i+j)==3-1)
            d+=a[i][j];
        }
    }
  cout<<"after adding left diagonals matrix :: " <<c <<endl;
   cout<<"after adding right diagonals matrix :: " <<d <<endl;
}
