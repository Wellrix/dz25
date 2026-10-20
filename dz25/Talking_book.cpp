#include "Talking_book.h"
#include <iostream>

using namespace std;

Talking_book::Talking_book(string a, string e, Date pub_d, long i,
    string spk, int dur, Date rec_d, int t)
    : Book(a, e, pub_d, i), Voice_recoding(spk, dur, rec_d) {
    tapes = t;
}

void Talking_book::displayInfo() const {
    cout << "=== Talking Book ===\n"
        << "Author: " << author << "\n"
        << "Edition: " << edition << "\n"
        << "Publication date: ";
    publication_date.print();
    cout << "\nISBN: " << isbn << "\n"
        << "Speaker: " << speaker << "\n"
        << "Duration: " << duration << " min\n"
        << "Recording date: ";
    recoding_date.print();
    cout << "\nNumber of tapes: " << tapes << "\n";
}