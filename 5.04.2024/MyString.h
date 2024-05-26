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
#ifndef MYSTRING_H
#define MYSTRING_H

#include <iostream>
#include <cstring>
class MyString {
private:
    static int object_count;
    char* str = nullptr;
    int size;

public:
    MyString();
    MyString(int size);
    MyString(const char* input);
    ~MyString();

    void input();
    void output();
    void MyStrcpy(const MyString& source);
    bool MyStrStr(const char* str);
    int MyChr(char c);
    int MyStrLen() const;
    void MyStrCat(MyString& b);
    void MyDelChr(char c);
    int MyStrCmp(MyString& b);
    static int getObjectCount();

    void SetStr(char* n);
    void SetSize(int s);
   
    char* GetStr();
    int GetSize();
};

#endif
