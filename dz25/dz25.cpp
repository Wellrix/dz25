#include <iostream>
#include <iomanip>

#include "PassengerCar.h"
#include "CargoCar.h"
#include "Book.h"
#include "Voice_recoding.h"
#include "Talking_book.h"

using namespace std;

int main() {
    cout << fixed << setprecision(2);

    PassengerCar sedan("Toyota Camry", "Black", 60.0f, 7.5f);
    sedan.displayInfo();

    cout << "\n";

    {
        CargoCar truck("Volvo FH16", "Blue", 300.0f, 28.0f, 20.0f);
        truck.displayInfo();

        float fuel_price = 55.50f;
        cout << "Transportation cost: "
            << truck.calculateTransportCost(fuel_price) << " UAH\n";
    }

    cout << "\n";

    Book book("George Orwell", "Collector's Edition", { 15, 6, 1949 }, 9785170801152L);
    Voice_recoding recording("Alexander Klyukvin", 680, { 10, 11, 2020 });
    Talking_book talkingBook("Arthur Conan Doyle", "Audiobook", { 14, 10, 1892 }, 9780140437867L,
        "Sergey Chonishvili", 320, { 5, 4, 2021 }, 4);

    book.displayInfo();
    cout << "\n";

    recording.displayInfo();
    cout << "\n";

    talkingBook.displayInfo();
    cout << "\n";

    return 0;
}
