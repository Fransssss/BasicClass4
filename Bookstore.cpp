//
// Created by XaveF on 8/22/2022.
//

#include "Bookstore.h"

void Bookstore::SetTitle(const string &theTitle)
{
    _title = theTitle;
}

void Bookstore::SetYear(const int &theYear)
{
    _year = theYear;
}

void Bookstore::SetCopies(const int &theCopies)
{
    _copies = theCopies;
}

string Bookstore::GetTitle() const
{
    return _title;
}

int Bookstore::GetYear() const
{
    return _year;
}

int Bookstore::GetCopies() const
{
    return _copies;
}
