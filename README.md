# 📚 Library Management System (C++)

A modular command-line Library Management System built using modern C++ fundamentals.

This project demonstrates modular programming by organizing the application across multiple source and header files while implementing a simple library workflow using arrays, functions, and shared data.

---

## ✨ Features

- ✅ Add New Book
- ✅ View All Books
- ✅ Search Book
- ✅ Issue Book
- ✅ Return Book
- ✅ Delete Book
- ✅ Duplicate Book ID Validation
- ✅ Empty Title & Author Validation
- ✅ Book Availability Tracking
- ✅ Multi-file Project Architecture

---

## 📂 Project Structure

```
library-management-system-cpp/
│
├── include/
│   ├── book.h
│   ├── library.h
│   └── menu.h
│
├── src/
│   ├── book.cpp
│   ├── library.cpp
│   ├── menu.cpp
│   └── main.cpp
│
├── README.md
├── LICENSE
└── .gitignore
```

---

## 🛠 Technologies Used

- C++17
- g++
- Visual Studio Code
- Git
- GitHub

---

## ⚙️ Compile

```bash
g++ src/*.cpp -Iinclude -Wall -Wextra -pedantic -std=c++17 -o app
```

---

## ▶️ Run

```bash
./app
```

---

## 📚 Learning Objectives

This project focuses on:

- Modular Programming
- Multi-file Project Organization
- Arrays
- Functions
- Shared Data using `extern`
- Boolean State Management
- Helper Functions
- Business Rule Validation
- Command-Line Application Design

---

## 🚀 Future Improvements

- Store books using file handling
- Replace arrays with classes
- Add borrower information
- Track issue & return dates
- Add fine calculation
- Improve input validation

---

## 👨‍💻 Author

**Mehfooz**

Learning C++ through project-based development.
