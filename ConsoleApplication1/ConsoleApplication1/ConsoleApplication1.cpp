// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
    //1

    //const int size = 10;
    //int array[size] = { 1,2,3,4,5,6,7,8,9,10 };
    //int sum = 0;
    //for (int i = 0; i < 10; i++) {
    //    std::cout << array[i] << " ";
    //}
    //std::cout << " \n" << array[5];
    //   // sum += array[i];
    
    //std::cout << "Среднее арифметическое значение: " << sum / 10;

    //2

    //const int rows = 3;
    //const int cols = 3;
    //int array[rows][cols] = {
    //    {1, 2, 3},
    //    {4, 5, 6},
    //    {7, 8, 9}
    //};

    //int columnSums[cols] = { 0 };

    //for (int i = 0; i < rows; ++i) {
    //    for (int j = 0; j < cols; ++j) {
    //        std::cout << array[i][j] << " ";
    //        //columnSums[j] += array[i][j];
    //    }
    //    std::cout << " \n";
    //}

    //std::cout << "Суммы по столбцам:" << std::endl;
    //for (int j = 0; j < cols; ++j) {
    //    std::cout << "столбец " << j + 1 << ": " << columnSums[j] << std::endl;
    //}
    //return 0;
}
    //3

struct Point {
    double x;
    double y;
};

double calculateDistanceSquared(const Point& p1, const Point& p2) {
    double deltaX = p2.x - p1.x;
    double deltaY = p2.y - p1.y;
    return deltaX * deltaX + deltaY * deltaY;
}

int main() {
    Point point1, point2;

    std::cout << "Введите координаты первой точки (x y): ";
    std::cin >> point1.x >> point1.y;

    std::cout << "Введите координаты второй точки (x y): ";
    std::cin >> point2.x >> point2.y;

    double distanceSquared = calculateDistanceSquared(point1, point2);
    std::cout << "Квадрат расстояния между точками: " << distanceSquared << std::endl;
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
