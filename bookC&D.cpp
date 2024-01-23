#include <iostream>
#include <string>
using namespace std;
class Book {
private:
    string title;
    string author;

public:
    Book(const string& bookTitle, const string& bookAuthor) : title(bookTitle), author(bookAuthor) {
        cout << "Constructor called for book: " << title << endl;
    }

    ~Book() {
        cout << "Destructor called for book: " << title << endl;
    }
    void displayDetails() const {
        cout << "Book Title: " << title << ", Author: " << author << endl;
    }
};

int main() {
    Book book1("The Great Gatsby", "F. Scott Fitzgerald");
    book1.displayDetails();
    Book book2("To Kill a Mockingbird", "Harper Lee");
    book2.displayDetails();
 return 0;
}
