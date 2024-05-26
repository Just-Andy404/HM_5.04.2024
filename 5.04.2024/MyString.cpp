#include "MyString.h"
#include <cstring>
using namespace std;

int MyString::object_count = 0;

MyString::MyString() : size(80) {
    str = new char[size + 1];
    str[0] = '\0';
    object_count++;
}

MyString::MyString(int size) : size(size) {
    str = new char[size + 1];
    str[0] = '\0';
    object_count++;
}

MyString::MyString(const char* input) {
    if (input) {
        size = strlen(input);
        str = new char[size + 1];
        strcpy_s(str, size + 1, input);
    }
    else {
        size = 0;
        str = new char[1];
        str[0] = '\0';
    }
    object_count++;
}

MyString::~MyString() {
    delete[] str;
    object_count--;
}


void MyString::SetStr(char* n)
{
    this->str = n;
}

void MyString::SetSize(int s)
{
    size = s;
}

char* MyString::GetStr()
{
    return this->str;
}

int MyString::GetSize()
{
    return this->size;
}


void MyString::input() {
    char new_str[255];
    cout << "Enter str: ";
    cin >> new_str;
    int size = strlen(new_str);
    delete[] str;
    str = new char[size + 1];
    strcpy_s(str, size + 1, new_str);
    this->size = size;
}


void MyString::output() {
    cout << "String is \" " << GetStr() << " \" and its size is " <<
        GetSize() << endl;
}

void MyString::MyStrcpy(const MyString& source) {
    if (this != &source) {
        delete[] str; 
        size = source.size;
        str = new char[size + 1];
        strcpy_s(str, size + 1, source.str);
    }
}



bool MyString::MyStrStr(const char* str)
{
    for (int i = 0; this->str[i] != '\0'; ++i) {
        int j = 0;
        while (str[j] != '\0' && this->str[i + j] == str[j]) {
            ++j;
        }
        if (str[j] == '\0') {
            return true; // Подстрока найдена
        }
    }
    return false; // Подстрока не найдена
}

int MyString::MyChr(char c) {
        for (int i = 0; i < this->size; i++) {
            if (this->str[i] == c)
                return i;
        }
        return -1;

}

int MyString::MyStrLen() const {
    return this->size;
}

void MyString::MyStrCat(MyString& b) {
    int new_len = this->size + b.size;
    char* new_str = new char[size + b.size + 1];

    strcpy_s(new_str, this->size + 1, this->str);
    strcat_s(new_str, new_len + 1, b.str);

    delete[] this->str;
    this->str = new_str;
    this->size = new_len;
}

void MyString::MyDelChr(char c) {
    int counter = 0;
    for (int i = 0; i < this->size; i++)
    {
        if (this->str[i] == c)
        {
            counter++;
        }
    }
    int newLength = this->size - counter + 1;
    char* newStr = new char[newLength];
    for (int i = 0, j = 0; i < this->size; i++)
    {
        if (this->str[i] != c)
        {
            newStr[j] = this->str[i];
            j++;
        }
    }
    newStr[newLength - 1] = '\0';
    this->size = newLength;
    delete[] this->str;
    this->str = newStr;
}

int MyString::MyStrCmp(MyString& b) {
    int len1 = MyStrLen();
    int len2 = b.MyStrLen();
    if (len1 < len2)
    {
        return -1;
    }
    else if (len1 > len2)
    {
        return 1;
    }

    else if (len1 == len2)
    {
        return 0;
    }
}

int MyString::getObjectCount() {
    return object_count;
}
