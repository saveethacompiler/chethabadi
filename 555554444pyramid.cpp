#include <iostream>
using namespace std;
int main() {
  int n,i,j;
    cout <<"enter n::";
    cin >> n;
    for(i=n;i>=0;i--){
        for(j=0;j<=i-1;j++){
            cout << i <<" ";
        }
        cout << endl;
    }
    return 0;
}
