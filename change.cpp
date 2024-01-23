#include <iostream>
using namespace std;
class Shape {
    int height;
    int width;
public:
	void set_p()
	{
	    cout << "Enter height:";
		cin >> height;
		cout << "Enter width:";
		cin >> width;
		cout<<endl;
	}
	void display_p()
	{
		cout << endl <<"height:: " <<height<<endl <<"width: "<< width <<endl;
	}
};
class Rectangle : private Shape {
	double area;
	 int height;
    int width;
public:
	void set_s()
	{
		set_p();
		 cout << "Enter height:";
		cin >> height;
		cout << "Enter width:";
		cin >> width;
		cout<<endl;
	area=(height*width);
	}
	void display_s()
	{
		display_p();
		
		cout <<"area" <<area << endl;
		cout<<endl;
	}
};
class Triangle : private Shape {
	double area1;
	 int height;
    int width;
public:
	void set_s()
	{
		set_p();
		 cout << "Enter height:";
		cin >> height;
		cout << "Enter width:";
		cin >> width;
		cout<<endl;
	area1=(height*width)/2;
	}
	void display_s()
	{
		display_p();
		
		cout <<"area" <<area1<< endl;
		cout<<endl;
	}
};
int main()
{
    Rectangle s;
    s.set_s();
    Triangle t;
	t.set_s();
	s.display_s();
	cout<<endl;
	t.display_s();
	return 0;
}
