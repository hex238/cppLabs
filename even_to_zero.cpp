#include <iostream>
using namespace std;

int main()
{
    int m[10] = { 16,32,45,44,537,65,74,3,25,11 };
    for (int i = 0; i < 10; i++)
    {
        cout << m[i] << ' ';
        if (m[i] % 2 == 0)
            cout << 0 << endl;
        else
            cout << m[i] << endl;
    }
    return 0;
}