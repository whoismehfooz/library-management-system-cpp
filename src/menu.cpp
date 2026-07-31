#include "../include/menu.h"

#include <iostream>

using namespace std;

void showMenu()
{
    cout << "\n========================================\n";
    cout << "      LIBRARY MANAGEMENT SYSTEM\n";
    cout << "========================================\n";

    cout << "1. Add Book\n";
    cout << "2. View All Books\n";
    cout << "3. Search Book\n";
    cout << "4. Issue Book\n";
    cout << "5. Return Book\n";
    cout << "6. Delete Book\n";
    cout << "7. Exit\n";

    cout << "\nEnter Your Choice (1-7): ";
}