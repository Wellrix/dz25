#include "Date.h"

void Date::print() const
{
    cout << (day < 10 ? "0" : "") << day << "."
        << (month < 10 ? "0" : "") << month << "."
        << year;
}
