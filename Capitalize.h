// Created by Fransiskus Agapa on 8/22/2022.
//

#ifndef BASICCLASS4_CAPITALIZE_H
#define BASICCLASS4_CAPITALIZE_H

#include "cctype"
#include "string"

using std::string;
using std::islower;
using std::toupper;

string Capitalize (string& bookTitle)
{
    if(islower(bookTitle[0]))
    {
        bookTitle[0] = toupper(bookTitle[0]);
    }
    return bookTitle;
};


#endif //BASICCLASS4_CAPITALIZE_H
