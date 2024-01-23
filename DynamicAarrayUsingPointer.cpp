#include<iostream>
using namespace std;
int main() {
	int i, n;
	cout << "Enter the number of items:" << "\n";
	cin >>n;
	int *arr = new int(n);
	cout << "Enter " << n << " items" << endl;
	for (i = 0; i < n; i++) {
		cin >> arr[i];
	}
	cout << "You entered: ";
	for (i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	return 0;
}
