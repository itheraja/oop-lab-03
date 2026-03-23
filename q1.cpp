#include <iostream>
using namespace std;

class Book {
private:
    string title;
    string author;
    double price;

public:
    // Default Constructor
    Book() {
        title = "Untitled";
        author = "Anonymous";
        price = 0.0;
    }

    // Parameterized Constructor
    Book(string t, string a, double p) {
        title = t;
        author = a;
        price = p;
    }

    // Copy Constructor
    Book(const Book &b) {
        title = b.title;
        author = b.author;
        price = b.price;
    }

    // Constructor with Default Arguments
    Book(string t, string a = "Unknown", double p = 0.0) {
        title = t;
        author = a;
        price = p;
    }

    // Display Function
    void display() {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price: $" << price << endl;
        cout << "----------------------\n";
    }
};

int main() {
    // Default constructor
    Book b1;

    // Parameterized constructor
    Book b2("C++ Programming", "Bjarne Stroustrup", 50.0);

    // Copy constructor
    Book b3(b2);

    // Constructor with only title (default arguments used)
    Book b4("Mystery Book");

    // Constructor with title and author
    Book b5("Science Book", "Ali");

    // Display all books
    cout << "Book 1 (Default):\n";
    b1.display();

    cout << "Book 2 (Parameterized):\n";
    b2.display();

    cout << "Book 3 (Copy of Book 2):\n";
    b3.display();

    cout << "Book 4 (Only Title):\n";
    b4.display();

    cout << "Book 5 (Title + Author):\n";
    b5.display();

    return 0;
}
