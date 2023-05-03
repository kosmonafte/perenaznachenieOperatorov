// 24.04.23_2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "Plenty.h"
using namespace std;
int main()
{
    int* array = new int[7] {1,2,3,4,5,6,7};
    int* array2 = new int[7] {13, 12, 3, 34, 4, 86, 1};
    Plenty plenty(array, 7);
    Plenty plenty2(array2, 7);
    cout << plenty.getElements() << endl;
    cout << plenty2.getElements() << endl;
    plenty + 23;
    plenty += 54;
    plenty + 23;
    plenty + 54;
    plenty + 132;
    cout << plenty.getElements() << endl;
    cout << plenty.getElement(2);
    cout << endl << endl;

    Plenty plenty3 = plenty += plenty2;
    cout << plenty3;
    plenty3.delElement(223);
    cout << endl << endl;
    cout << plenty3;
    //plenty.addElement(5);
    //plenty.addElement(20);
    //plenty.addElement(234);
    //cout << plenty.getElements();
    //plenty + 4;
    //plenty + 34;
    //plenty + 41;
    //cout << plenty.getElements();
    //cout << endl << endl;
    //cout << plenty;
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
