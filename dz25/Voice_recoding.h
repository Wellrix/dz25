#pragma once
#include <string>
#include "Date.h"

using namespace std;

class Voice_recoding {
protected:
    string speaker;
    int duration;
    Date recoding_date;

public:
    Voice_recoding(string spk, int dur, Date rec_d);
    virtual ~Voice_recoding() = default;

    virtual void displayInfo() const;
};