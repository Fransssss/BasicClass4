
#include <iostream>
#include "Bookstore.h"
#include "Capitalize.h"
#include "ValidateNumber.h"

using std::cout;
using std::endl;
using std::cin;
using std::getline;
using std::stoi;


int main()
{
    cout << endl << "== Summary Happy Bookstore Purchase ==" << endl;
    cout << "1. Start Input" << endl;
    cout << "e. Exit" << endl;
    cout << "choice: ";
    string choice;
    cin >> choice;

    while(choice != "e" and choice != "E")
    {
        if(choice == "1")
        {

            Bookstore book;
            string bookTitle;
            string bookYear;                                    // as string to check its value
            string bookCopies;
            bool validNumber = true;

            // title
            cout << endl << "Input the title of a book: ";
            while(bookTitle.size() == 0)                        // input title/something to pass the loop
            {
                getline(cin, bookTitle);
            }
            Capitalize(bookTitle);                              // capitalize the title
            book.SetTitle(bookTitle);
            cout << endl;

            // year
            cout << "Input the year of publishing: ";
            cin >> bookYear;
            validNumber = ValidateNumber(bookYear);      // make sure only digit
            if (validNumber)
            {
                book.SetYear(stoi(bookYear));
            }
            else
            {
                cout << "\n[ Invalid year ]" << endl;
                book.SetYear(0);
            }
            cout << endl;

            // copies
            cout << "How many copies were bought: ";
            cin >> bookCopies;
            validNumber = ValidateNumber(bookCopies);
            if (validNumber)
            {
                book.SetCopies(stoi(bookCopies));
            }
            else
            {
                cout << "\n[ Invalid number ]" << endl;
                book.SetCopies(0);
            }
            cout << endl;

            cout << endl << "== Summary of Purchase ==" << endl;
            cout << endl << "Title: " << book.GetTitle() << endl;
            cout << "Year: " << book.GetYear() << endl;
            cout << "Copies: " << book.GetCopies() << endl;

        }
        else
        {
            cout << "\n[ Invalid choice ]" << endl;
        }

        cout << endl << "== Summary Happy Bookstore Purchase ==" << endl;
        cout << "1. Start Input" << endl;
        cout << "e. Exit" << endl;
        cout << "choice: ";
        cin >> choice;
    }

    if(choice == "e" or choice == "E")
    {
        cout << "\n== Exit Program ==" << endl;
    }

    return 0;
}