#include<iostream>
using namespace std;
int main(){
    int a[2][2],b[2][2],c[2][2],i,j,k;
    cout<<"enter 1st matrix::"<<endl;
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            cin>>a[i][j];
        }
    }
    cout<<"enter 2nd matrix::"<<endl;
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            cin>>b[i][j];
        }
    }
    cout<<"1st matrix is::"<<endl;
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
     cout<<"2nd matrix is::"<<endl;
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++){
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            c[i][j]+=a[i][k]*b[k][j];
        }
    }
  cout<<"after adding tow matrix::"<<endl;
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }
}
