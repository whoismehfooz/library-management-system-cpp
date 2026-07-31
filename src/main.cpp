#include "../include/book.h"
#include "../include/library.h"
#include "../include/menu.h"

#include <iostream>

using namespace std;

int main()
{
    int choice;

    do
    {
        showMenu();

        cin >> choice;

        switch (choice)
        {
        case 1:
            addBook();
            break;

        case 2:
            viewBooks();
            break;

        case 3:
            searchBook();
            break;

        case 4:
            issueBook();
            break;

        case 5:
            returnBook();
            break;

        case 6:
            deleteBook();
            break;

        case 7:
            cout << "\n👋 Thank You for Using the Library Management System....\n";
            break;

        default:
            cout << "\n❌--- Invalid Choice. Please Try Again ---❌\n";
        }

    } while (choice != 7);

    return 0;
}