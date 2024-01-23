#include <iostream>
using namespace std;
int main() {
    int num,n1=0,n2=1,n3=0;
     cout << "Enter an integer: ";
    cin >> num;
    cout << "Fibanocci series :: " ;
for(int i=2;i<num;i++)
{
    n3=n1+n2;
    cout << n3 << " " ;
    n1=n2;
    n2=n3;
}
    return 0;
}
