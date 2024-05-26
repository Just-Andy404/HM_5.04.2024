/*
����������� ����� MyString
�	����������� �� ���������, ����������� ������� ������ ������ 80 ��������;
�	�����������, ����������� ��������� ������ ������������� �������;
�	�����������, ������� ������ ������ � �������������� � �������, ���������� �� ������������.
�	����������;
�	������ ��� ����� ����� � ���������� � ������ ����� �� �����.
�	void MyStrcpy(MyString & obj);// ����������� �����
�	bool MyStrStr(const char * str);// ����� ��������� � ������
�	int  MyChr(char c); // ����� ������� � ������(������ ���������� �������, ���� -1)
�	int MyStrLen();// ���������� ����� ������
�	void MyStrCat(MyString& b); // ����������� �����
�	void MyDelChr(char c); // ������� ��������� ������
�	int MyStrCmp(MyString &b); // ��������� �����
                                   -1 � ������ ������ ������ ��� ������
                                    1 � ������ ������ ��� ������
                                    0 � ������ �����!
�	����������� ���� ��������� ���-�� ��������� ��������.

*/
#include <iostream>
#include <cstring>
#include "MyString.h"
using namespace std;

int main() {
    int choice;
    MyString s1, s2;     
    while (true) {
    cout << "\n--- MyString Operations Menu ---\n";
    cout << "1. Input\n";
    cout << "2. Output\n";
    cout << "3. MyStrcpy (Copy s2 to s1)\n";
    cout << "4. MyStrStr (Search substring in s1)\n";
    cout << "5. MyChr (Search character in s1)\n";
    cout << "6. MyStrLen (Show length of s1)\n";
    cout << "7. MyStrCat (Concatenate s2 to s1)\n";
    cout << "8. MyDelChr (Delete character from s1)\n";
    cout << "9. MyStrCmp (Compare s1 and s2)\n";
    cout << "0. Exit\n";
    cout << "\nEnter choice: ";
    cin >> choice;
        switch (choice) {
        case 1:
            cout << "Enter string for s1: ";
            s1.input();
            cout << "===============================\n";
            cout << "Enter string for s2: ";
            s2.input();
            break;
        case 2:
            cout << "s1: ";
            s1.output();
            cout << "===============================\n";
            cout << "s2: ";
            s2.output();
            break;
        case 3:
            s1.MyStrcpy(s2);
            cout << "Copied s2 to s1.\n";
            break;
        case 4:
        {
            char substring[255];
            cout << "Enter substring to search: ";
            cin >> substring;
            if (s1.MyStrStr(substring))
                cout << "Substring found.\n";
            else
                cout << "Substring not found.\n";
        }
        break;
        case 5:
        {
            char ch;
            cout << "Enter character to search in s1: ";
            cin >> ch;
            int pos = s1.MyChr(ch);
            if (pos != -1)
                cout << "Character found at position: " << pos+1 << "\n";
            else
                cout << "Character not found.\n";
        }
        break;
        case 6:
            cout << "Length of s1: " << s1.MyStrLen() << "\n";
            break;
        case 7:
            s1.MyStrCat(s2);
            cout << "Concatenated s2 to s1.\n";
            break;
        case 8:
        {
            char ch;
            cout << "Enter letter to delete from s1: ";
            cin >> ch;
            s1.MyDelChr(ch);
            cout << "letter deleted from s1.\n";
        }
        break;
        case 9:
        {
            int result = s1.MyStrCmp(s2);
            if (result == 0)
                cout << "s1 is equal to s2.\n";
            else if (result < 0)
                cout << "s2 is bigger than s1.\n";
            else
                cout << "s1 is bigger than s2.\n";
        }
        break;
        case 0:
            return 0;
        default:
            cout << "Invalid choice. Please choose again.\n";
            break;
        }
    }
    return 0;
}
