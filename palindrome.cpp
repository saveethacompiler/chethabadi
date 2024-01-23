#include <iostream>
using namespace std;
int main() {
    int num,temp,res=0,r;
     cout << "Enter an integer: ";
    cin >> num;
temp=num;
for(; num!=0 ; num/=10)
{
    r=num%10;
    res= (res * 10) + r;
   
}
if(temp==res){
    cout << "palindrome" ;
}
else{
    cout << "not palindrome" ;
}

    return 0;
}
