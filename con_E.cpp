#include<bits/stdc++.h>
using namespace std;
int main()
{
    string S,m;
    int a,b;
    cin>>S;
    cin>>a>>b;
    m=S;
   swap(S[a-1],S[b-1]);
    cout<< S << endl;
    return 0;
}