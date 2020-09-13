#include <iostream>
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

    cout <<"\nСумма эл-тов массива = "<< Sum(map, k) << endl;
}

int Sum(int map[], int k)
{
    int sum = 0;
    for (int i = 0; i < k; i++)
    {
        sum += map[i];
    }

    return sum;
}

