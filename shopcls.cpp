#include <iostream>
#include <vector>
#include <algorithm>

class ShoppingList {
private:
    struct Item {
        int code;
        double price;
    };

    vector<Item> items;

public:
    void addItem(int code, double price) {
        Item newItem = {code, price};
        items.push_back(newItem);
        cout << "Item added to the list." << endl;
    }

    void deleteItem(int code) {
        auto it = remove_if(items.begin(), items.end(),
                                 [code](const Item &item) { return item.code == code; });

        if (it != items.end()) {
            items.erase(it, items.end());
        cout << "Item deleted from the list." << endl;
        } else {
            cout << "Item not found in the list." << endl;
        }
    }

    void printTotalValue() {
        double total = 0.0;
        for (const auto &item : items) {
            total += item.price;
        }

        cout << "Total value of the order: $" << total << endl;
    }
};

int main() {
    ShoppingList shoppingList;

    shoppingList.addItem(101, 5.99);
    shoppingList.addItem(102, 3.49);
    shoppingList.addItem(103, 9.99);
shoppingList.addItem(104, 10.99);
    shoppingList.printTotalValue();

    shoppingList.deleteItem(102);

    shoppingList.printTotalValue();

    return 0;
}
