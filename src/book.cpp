#include "../include/book.h"

#include <iostream>
#include <string>

using namespace std;



int bookIds[MAX_BOOKS];
string bookTitles[MAX_BOOKS];
string bookAuthors[MAX_BOOKS];
bool bookAvailability[MAX_BOOKS];
int bookCount = 0;



int findBookIndex(int bookId)
{
    for (int index = 0; index < bookCount; index++)
    {
        if (bookIds[index] == bookId)
        {
            return index;
        }
    }

    return -1;
}


void addBook()
{
    if (bookCount >= MAX_BOOKS)
    {
        cout << "\n🔴....Library is Full....🔴\n";
        return;
    }

    int bookId;

    cout << "\nEnter Book ID : ";
    cin >> bookId;

    if (bookId <= 0)
    {
        cout << "\n❌--- Book ID must be positive ---❌\n";
        return;
    }

    if (findBookIndex(bookId) != -1)
    {
        cout << "\n🔴....Book ID already exists....🔴\n";
        return;
    }

    cin.ignore();

    string title;
    cout << "Enter Book Title : ";
    getline(cin, title);

    if (title.empty())
    {
        cout << "\n❌--- Book Title cannot be empty ---❌\n";
        return;
    }

    string author;
    cout << "Enter Author Name : ";
    getline(cin, author);

    if (author.empty())
    {
        cout << "\n❌--- Author Name cannot be empty ---❌\n";
        return;
    }

    bookIds[bookCount] = bookId;
    bookTitles[bookCount] = title;
    bookAuthors[bookCount] = author;
    bookAvailability[bookCount] = true;

    bookCount++;

    cout << "\nBook Added Successfully....✅ \n";
}


void searchBook()
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

    cout << "\n========== Book Details ==========\n";

    cout << "Book ID     : " << bookIds[index] << endl;
    cout << "Title       : " << bookTitles[index] << endl;
    cout << "Author      : " << bookAuthors[index] << endl;

    if (bookAvailability[index])
    {
        cout << "Status      : Available\n";
    }
    else
    {
        cout << "Status      : Issued\n";
    }
}



void deleteBook()
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

    for (int current = index; current < bookCount - 1; current++)
    {
        bookIds[current] = bookIds[current + 1];
        bookTitles[current] = bookTitles[current + 1];
        bookAuthors[current] = bookAuthors[current + 1];
        bookAvailability[current] = bookAvailability[current + 1];
    }

    bookCount--;

    cout << "\nBook Deleted Successfully....✅ \n";
}