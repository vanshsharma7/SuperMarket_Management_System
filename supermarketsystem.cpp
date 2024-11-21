#include <iostream>
#include <fstream>
#include <windows.h>
#include <string>

using namespace std;

// Market Class Definition
class Market
{
private:
    string Name;
    int Quantity, Price;

public:
    // Constructor
    Market() : Name(""), Quantity(0), Price(0) {}

    // Setter Methods
    void setName(string name)
    {
        Name = name;
    }

    void setQuant(int quantity)
    {
        Quantity = quantity;
    }

    void setPrice(int price)
    {
        Price = price;
    }

    // Getter Methods
    string getName() const
    {
        return Name;
    }

    int getQuant() const
    {
        return Quantity;
    }

    int getPrice() const
    {
        return Price;
    }
};

// Function to Add Items
void addItem(Market m)
{
    string name;
    int quantity, price;

    cout << "Enter Item Name: ";
    cin >> name;
    m.setName(name);

    cout << "Enter Quantity: ";
    cin >> quantity;
    m.setQuant(quantity);

    cout << "Enter Price: ";
    cin >> price;
    m.setPrice(price);

    ofstream out("C:/Users/ASUS/.vscode/New folder/cpp/SuperMarket.txt", ios::app);
    if (!out)
    {
        cout << "File Cannot be Opened!" << endl;
    }
    else
    {
        out << m.getName() << "," << m.getQuant() << "," << m.getPrice() << endl;
        cout << "Item Saved Successfully!" << endl;
    }
    out.close();
}

void search(Market m)
{

    string name;

    cout << "Enter Name of Item: ";

    cin >> name;

    ifstream in("C:/Users/ASUS/.vscode/New folder/cpp/SuperMarket.txt");

    if (!in)
    {

        cout << "File Not found: " << endl;
    }

    else
    {

        string line;

        bool found = false;

        while (getline(in, line))
        {

            int pos = line.find(name);

            if (pos != string::npos)
            {

                cout << "Item|Quant|Price" << endl;

                cout << line << endl;

                found = true;
            }
        }
        if (!found)
        {
            cout << "Item Not Found!" << endl;
        }
    }
}

int main()
{
    Market m;
    bool exit = false;

    while (!exit)
    {
        system("cls"); // Clear the console
        cout << "Welcome To Super Market Management System" << endl;
        cout << "******************************************" << endl;
        cout << "1. Add Items" << endl;
        cout << "2. Search Items" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter Choice: ";

        int val;
        cin >> val;

        if (val == 1)
        {
            system("cls");
            addItem(m);
            Sleep(5000);
        }
        else if (val == 2)
        {
            system("cls");
            search(m);
            Sleep(5000);
        }
        else if (val == 3)
        {
            exit = true;
        }
        else
        {
            cout << "Invalid Option! Try Again." << endl;
            cin.ignore(); // Clear input buffer
        }

        cout << "Press Enter to continue...";
        cin.ignore();
        cin.get(); // Wait for the user to press Enter
    }

    return 0;
}
