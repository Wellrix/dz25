#pragma once
#include "Book.h"
#include "Voice_recoding.h"

using namespace std;

class Talking_book : public Book, public Voice_recoding {
protected:
    int tapes;

public:
    Talking_book(string a, string e, Date pub_d, long i,
        string spk, int dur, Date rec_d, int t);

    void displayInfo() const override;
};