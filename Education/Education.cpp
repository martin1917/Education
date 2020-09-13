#include <iostream>
using namespace std;

int main()
{
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
}

