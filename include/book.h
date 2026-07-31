#pragma once

#include <string>

const int MAX_BOOKS = 100;

// Shared Data
extern int bookIds[MAX_BOOKS];
extern std::string bookTitles[MAX_BOOKS];
extern std::string bookAuthors[MAX_BOOKS];
extern bool bookAvailability[MAX_BOOKS];
extern int bookCount;

// Helper Function
int findBookIndex(int bookId);

// Book Operations
void addBook();
void searchBook();
void deleteBook();