/*
–азработать класс MyString
Х	конструктор по умолчанию, позвол€ющий создать строку длиной 80 символов;
Х	конструктор, позвол€ющий создавать строку произвольного размера;
Х	конструктор, который создаЄт строку и инициализирует еЄ строкой, полученной от пользовател€.
Х	деструктор;
Х	методы дл€ ввода строк с клавиатуры и вывода строк на экран.
Х	void MyStrcpy(MyString & obj);// копирование строк
Х	bool MyStrStr(const char * str);// поиск подстроки в строке
Х	int  MyChr(char c); // поиск символа в строке(индекс найденного символа, либо -1)
Х	int MyStrLen();// возвращает длину строки
Х	void MyStrCat(MyString& b); // объединение строк
Х	void MyDelChr(char c); // удал€ет указанный символ
Х	int MyStrCmp(MyString &b); // сравнение строк
                                   -1 Ц перва€ строка меньше чем втора€
                                    1 Ц перва€ больше чем втора€
                                    0 Ц строки равны!
Х	—татическое поле сохран€ет кол-во созданных объектов.

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
