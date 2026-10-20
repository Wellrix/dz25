#include "Voice_recoding.h"
#include <iostream>

using namespace std;

Voice_recoding::Voice_recoding(string spk, int dur, Date rec_d) {
    speaker = spk;
    duration = dur;
    recoding_date = rec_d;
}

void Voice_recoding::displayInfo() const {
    cout << "=== Voice Recording ===\n"
        << "Speaker: " << speaker << "\n"
        << "Duration: " << duration << " min\n"
        << "Recording date: ";
    recoding_date.print();
    cout << "\n";
}