#include <cctype>
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char str[] = "Saswat is from the INDIA";
    char ch;

    cout << str << endl;

 cout <<"upper case conversion:: ";
    for (int i = 0; i < strlen(str); i++)
    {
        ch = toupper(str[i]);

        cout << ch;
    }
cout<<endl;
cout <<"lower case conversion:: ";
 for (int i = 0; i< strlen(str); i++)

    {
        ch = tolower(str[i]);

        cout << ch;
    }
    cout <<endl;
    return 0;
}
