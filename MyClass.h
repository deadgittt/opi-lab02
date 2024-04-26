#ifndef MY_HEADER_H
#define MY_HEADER_H

#include <iostream>
#include <string>

class MyClass {
public:
    MyClass(); // Конструктор
    ~MyClass(); // Деструктор
    void sayHello(); // Метод для вывода сообщения
    void setName(const std::string& name); // Метод для установки имени
private:
    std::string name; // Приватное поле для имени
};

#endif
