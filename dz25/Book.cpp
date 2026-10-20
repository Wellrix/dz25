#include "Book.h"
#include <iostream>

using namespace std;

Book::Book(string a, string e, Date pub_d, long i) {
    author = a;
    edition = e;
    publication_date = pub_d;
    isbn = i;
}

void Book::displayInfo() const {
    cout << "=== Book ===\n"
        << "Author: " << author << "\n"
        << "Edition: " << edition << "\n"
        << "Publication date: ";
    publication_date.print();
    cout << "\nISBN: " << isbn << "\n";
}