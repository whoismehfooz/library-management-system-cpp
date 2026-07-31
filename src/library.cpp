#include "../include/library.h"
#include "../include/book.h"

#include <iostream>

using namespace std;


void viewBooks()
{
    if (bookCount == 0)
    {
        cout << "\n🔴....No Books Available....🔴\n";
        return;
    }

    cout << "\n========== Library Books ==========\n";

    for (int index = 0; index < bookCount; index++)
    {
        cout << "\nBook " << index + 1 << endl;
        cout << "--------------------------\n";
        cout << "Book ID : " << bookIds[index] << endl;
        cout << "Title   : " << bookTitles[index] << endl;
        cout << "Author  : " << bookAuthors[index] << endl;

        if (bookAvailability[index])
        {
            cout << "Status  : Available\n";
        }
        else
        {
            cout << "Status  : Issued\n";
        }
    }
}



void issueBook()
{
    int bookId;

    cout << "\nEnter Book ID : ";
    cin >> bookId;

    if (bookId <= 0)
    {
        cout << "\n❌--- Book ID must be positive ---❌\n";
        return;
    }

    int index = findBookIndex(bookId);

    if (index == -1)
    {
        cout << "\n🔴....Book Not Found....🔴\n";
        return;
    }

    if (!bookAvailability[index])
    {
        cout << "\n🔴....Book is already issued....🔴\n";
        return;
    }

    bookAvailability[index] = false;

    cout << "\nBook Issued Successfully....✅\n";
}



void returnBook()
{
    int bookId;

    cout << "\nEnter Book ID : ";
    cin >> bookId;

    if (bookId <= 0)
    {
        cout << "\n❌--- Book ID must be positive ---❌\n";
        return;
    }

    int index = findBookIndex(bookId);

    if (index == -1)
    {
        cout << "\n🔴....Book Not Found....🔴\n";
        return;
    }

    if (bookAvailability[index])
    {
        cout << "\n🔴....Book is already available....🔴\n";
        return;
    }

    bookAvailability[index] = true;

    cout << "\nBook Returned Successfully....✅\n";
}