//
// Created by XaveF on 8/22/2022.
//

#ifndef BASICCLASS4_BOOKSTORE_H
#define BASICCLASS4_BOOKSTORE_H

#include "string"

using std::string;

class Bookstore
{
private:
    string _title;
    int _year;
    int _copies;

public:
    void SetTitle(const string& theTitle);
    void SetYear(const int& theYear);
    void SetCopies(const int& theCopies);
    string GetTitle() const;
    int GetYear() const;
    int GetCopies() const;
    void print();

};


#endif //BASICCLASS4_BOOKSTORE_H
