SUPERMARKET MANAGEMENT SYSTEM
This project is a basic console-based application written in C++. It provides functionalities for managing a supermarket's inventory, including adding items, searching for items, and storing data persistently in a text file.

FEATURES
Add Items: Allows the user to add new items to the inventory with details such as name, quantity, and price.
Search Items: Enables the user to search for an item by its name and view its details (quantity and price).
Persistent Storage: Saves all added items into a text file (Super Market.txt), ensuring data is retained between program runs.
User-Friendly Menu: Provides a simple and interactive text-based menu for navigation.

HOW IT WORKS
1.Adding Items:
The user inputs the item's name, quantity, and price. These details are appended to the Super Market.txt file.

2.Searching Items:
The user inputs the name of the item to search for. If found, the item's details are displayed; otherwise, the program shows an "Item Not Found" message.

3.Exiting the Program:
The user can exit the program through the menu, ensuring all data has been saved.

FILE STRUCTURE
Source Code: The main C++ file (main.cpp) contains all the program logic.
Data File: The program reads and writes inventory data to a text file named Super Market.txt.

REQUIREMENTS
A C++ compiler (e.g., GCC, Clang, or MSVC).
Basic knowledge of C++ for understanding the code.
