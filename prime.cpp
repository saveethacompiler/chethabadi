#include <iostream>
using namespace std;
int main() {
    int num;
     cout << "Enter an integer: ";
    cin >> num;
int flag=0; 
for(int i=2;i<num/2;i++) 
{ 
    if(num%i==0) 
    cout<< "It's not a prime number";  
    flag=1;   
} 
if(flag==0) 
    cout << "It's a prime number"; 

    return 0;
}
