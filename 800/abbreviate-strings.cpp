#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string word;
    for (int i = 0; i < n; i++)
    {
        cin >> word;
        string result;
        if (word.size() > 10){
          result = word.substr(0,1) + to_string(word.size() - 2) + word.substr(word.size()-1,1);
        cout<<result<<endl;
        }
        else{
            result=word;
            cout<<result<<endl;
        }
    }
}