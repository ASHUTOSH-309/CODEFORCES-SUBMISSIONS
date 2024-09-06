#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int x1, x2, x3;
    int attempted = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> x1 >> x2 >> x3;
        if (x1 + x2 + x3 >= 2)
            attempted++;
    }

    cout << attempted;
}