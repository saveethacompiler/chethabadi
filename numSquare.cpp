#include <iostream>
using namespace std;
int main()
{
	int i,j,n,m;
	cout<<"enter n :: ";
	cin >> n;
	cout << "enter m::";
	cin >> m;
	for (i = 0; i <n; i++) {
		for (j = 0; j<n;j++) {
			cout << m << " ";
		m++;
		}
		cout << endl;;
	}
	return 0;
}
