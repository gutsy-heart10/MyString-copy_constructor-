#include<iostream>
#include "MyString.h"
using namespace std;

int MyString::count = 0;
int MyString::getCount() {
    return count;
}


void MyString::inputString() {
    cout << "Enter a string: ";
    cin.getline(str, length + 1);
}


void MyString::displayString() {
    cout << "String: " << str << endl;
}

int main() {
    // konstruktor po umolcaniyu
    MyString defaultString("Salam");
    defaultString.displayString();

    // konstruktor proizvolnoqo razmera
    MyString customSizeString(50);
    customSizeString.inputString();
    customSizeString.displayString();

    // konstructor inicizlizirovanniy polzovatelem
    cout << "Enter a string to initialize: ";
    char* userInput = new char[100];
    cin.getline(userInput, 100);

    MyString userInputString(userInput); 
    userInputString.displayString();

    delete[] userInput;
    // copy constructor
    MyString copiedString(userInputString);
    cout << "Copied String: ";
    copiedString.displayString();

    cout << "Number of created String objects: " << MyString::getCount() << endl;
    return 0;
}
