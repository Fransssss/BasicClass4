// Created by Fransiskus Agapa on 8/22/2022.
//

#ifndef BASICCLASS4_VALIDATENUMBER_H
#define BASICCLASS4_VALIDATENUMBER_H

#include "cctype"
#include "string"

using std::isalpha;
using std::string;
using std::to_string;
using std::isdigit;

bool ValidateNumber(const string& number)
{
    int amountDigit = number.size();             // the whole user input has to be digit
    int checkAmountDigit = 0;

    for(size_t i = 0; i < number.size(); ++i)
    {
        if(isdigit(number[i]))
        {
            checkAmountDigit += 1;
        }
    }

    if(checkAmountDigit == amountDigit)           //  input is digit
    {
        return true;
    }

    return false;
};


#endif //BASICCLASS4_VALIDATENUMBER_H
