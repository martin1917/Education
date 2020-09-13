#include <iostream>
#include <clocale>
using namespace std;

int Sum(int map[], int k);

int main()
{
    setlocale(LC_ALL, "rus");
    
    cout << "Hello World!" << endl;
    const int k = 5;
    int map[k];

    for (int i = 0; i < k; i++)
    {
        cin >> map[i];
    }

    for (int i = 0; i < k; i++)
    {
        cout << "map[" << i << "]" << " = " << map[i] << endl;
    }

    cout <<"\nСумма эл-тов МАССИВА * 2 = "<< Sum(map, k) << endl;
}

int Sum(int map[], int k)
{
    int sum = 0;
    for (int i = 0; i < k; i++)
    {
        if(map[i] > 0) sum += map[i];
    }

    return 2 * sum;
}

/*
    Комметнарий не нужен, но я его добавлю,что бы проверить целостность git а
*/
