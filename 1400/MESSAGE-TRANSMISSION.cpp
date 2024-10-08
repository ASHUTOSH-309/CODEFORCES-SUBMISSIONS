#include <bits/stdc++.h>

#include <iostream>

using namespace std;

int main(){

    string ans="sample123";
    string t;

    cin>>t;

    int front;
    int back;
    if(t.size()%2==0){
        front=t.size()/2 -1;
        back=t.size()/2;
    }
    else{
        front=back=t.size()/2;
    }
    int breakingIndex;
    while(back>0 && front<t.size()-1){
            if((t.substr(0,front+1)==t.substr(back,t.size()-back)) && front>=back ){
                    breakingIndex=back;
                    ans=t.substr(back,t.size()-back);
            }
            back--;
            front++;

    }

    if(ans=="sample123"){
        cout<<"NO";
        return 0;
    }
    cout<<"YES"<<endl;
    cout<<ans<<endl;
    return 0;
}