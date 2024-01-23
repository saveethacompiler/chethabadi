#include <iostream>
using namespace std;
class class_2; 

class class_1 {
private:
    int data1;

public:
    class_1(int val) : data1(val) {}

    friend void swapData(class_1& obj1, class_2& obj2);
    int getData1() const { return data1; }
};

class class_2 {
private:
    int data2;

public:
    class_2(int val) : data2(val) {}

    friend void swapData(class_1& obj1, class_2& obj2);
    int getData2() const { return data2; }
};

void swapData(class_1& obj1, class_2& obj2) {
    int temp = obj1.data1;
    obj1.data1 = obj2.data2;
    obj2.data2 = temp;
}

int main() {
    class_1 obj1(5);
    class_2 obj2(10);

    cout << "Before swapping:" << endl;
    cout << "class_1 data: " << obj1.getData1() << endl;
    cout << "class_2 data: " << obj2.getData2() << endl;

    swapData(obj1, obj2);

    cout << "\nAfter swapping:" << endl;
    cout << "class_1 data: " << obj1.getData1() << endl;
    cout << "class_2 data: " << obj2.getData2() << endl;

    return 0;
}
