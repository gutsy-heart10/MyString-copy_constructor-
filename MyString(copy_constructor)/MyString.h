

class MyString {
private:
    char* str;
    int length;
    static int count;
public:
    MyString() : MyString(80) {}

    MyString(int size) : str(new char[size + 1]), length(size) {
        count++;
    }

    MyString(const char* inputStr) : str(new char[strlen(inputStr) + 1]), length(strlen(inputStr)) {
        strcpy_s(str, strlen(inputStr) + 1, inputStr);
        count++;
    }
    MyString(const MyString& string) : str{ new char[strlen(string.str) + 1] } {
        strcpy_s(str, strlen(string.str) + 1, string.str);
    }

    ~MyString() {
        delete[] str;
        count--;
    }

    static int getCount();

    void inputString();

    void displayString();
};

