#include <iostream>
using namespace std;

class LibraryBook
{
private:
    string bookname;
    string authorName;
    int bookId;
    float price;
    bool availability;

public:
    void getData()
    {
        cout << "Enter Book ID: ";
        cin >> bookId;

        cout << "Enter Book Name: ";
        cin >> bookname;

        cout << "Enter Author Name: ";
        cin >> authorName;

        cout << "Enter Book Price: ";
        cin >> price;

        cout << "Is Book Available? (1 for Yes, 0 for No): ";
        cin >> availability;
    }

    void display()
    {
        cout << "\n----- Library Book Details -----" << endl;
        cout << "Book ID: " << bookId << endl;
        cout << "Book Title: " << bookname << endl;
        cout << "Author Name: " << authorName << endl;
        cout << "Book Price: " << price << endl;
        if (availability == 1)
            cout << "Book is Available" << endl;
        else
            cout << "This book Not Available" << endl;
    }
};

int main()
{
    LibraryBook b1;

    b1.getData();
    b1.display();
    
    return 0;
}