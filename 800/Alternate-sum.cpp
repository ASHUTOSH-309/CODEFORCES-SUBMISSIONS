#include <iostream>

using namespace std;

int main()
{

    int cases;
    cin>>cases;

    for (int i = 0; i < cases; i++)
    {

        int n;
        cin >> n;
        int sum = 0;
        for (int i = 1; i <= n; i++)
        {
            int num;
            cin >> num;
            if (i % 2 == 0)
                num = -1 * num;
            sum += num;
        }

        cout << sum<<endl;
    }
}