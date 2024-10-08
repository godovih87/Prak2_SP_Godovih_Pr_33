﻿// ConsoleApplication2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

class Student {
private:
    char name[50];
    double grades[10];

public:
    void setGrades() {
        std::cout << "Введите имя: ";
        std::cin >> name;
        std::cout << "Введите " <<5 << " оценок для " << name << ": ";
        for (int i = 0; i < 5; ++i)
        {
            std::cin >> grades[i];
        }
    }

    double calculateAverage()  {
        double sum = 0.0;
        for (int i = 0; i < 5; ++i) {
            sum += grades[i];
        }
        return sum / 5;
    }

    void displayInfo()  {
        std::cout << "Студент: " << name << "\n";
        std::cout << "Средний балл: " << calculateAverage() << "\n";
    }
};

int main() {
    Student student;
    student.setGrades();
    student.displayInfo();
    return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
