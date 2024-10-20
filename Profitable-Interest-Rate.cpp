#include <bits/stdc++.h>

using namespace std;

int main()
{

    int T;
    cin >> T;

    // Profitable -->
    while (T--)
    {

        long long MoneyAlicehad;
        cin >> MoneyAlicehad;

        long long MinRequiredForProfitable;
        cin >> MinRequiredForProfitable;

        if (MoneyAlicehad >= MinRequiredForProfitable)
        {
            cout << MoneyAlicehad << endl;
        }
        else if (MinRequiredForProfitable > 2 * MoneyAlicehad)
        {
            cout << "0" << endl;
        }
        else
        {
            long long ans;
         
            ans=2*MoneyAlicehad-MinRequiredForProfitable;
            
            cout << ans << endl;
        }


    }
}