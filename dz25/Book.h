#pragma once
#include <string>
#include "Date.h"

using namespace std;

class Book {
protected:
    string author;
    string edition;
    Date publication_date;
    long isbn;

public:
    Book(string a, string e, Date pub_d, long i);
    virtual ~Book() = default;

    virtual void displayInfo() const;
};