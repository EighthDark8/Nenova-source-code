/*Задание 2*/
/*Решено с помощью цикла с постусловием*/
/*Создайте программу, выводящую на экран все четырёхзначные числа последовательности 1000 1003 1006 1009 1012 1015.*/
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a = 1000;
    int b = 3;
    do
    {
        cout << "\n" << a;
        a += b;
    }
    while((int)(log10(a) + 1) == 4);
    
    cout << "\n------------------------"<<endl;
    cout << "\nCreated by Ivan Goldobin"<<endl;
    cout << "\n------------------------"<<endl;
}