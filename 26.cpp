#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int i=1;i<=n;i++) {
        for(int j=1;j<=n;j++) {
            char ch = 'A' + i + j - 2;
            cout<<ch;
        }
        cout<<endl;
    }
}

// n = 3

// 123         ABC
// 234         BCD
// 345         CDE
// i + j - 1 = 1 map to => 'A'
// Add 'A'-1 on both sides
// i + j - 1 + ('A' - 1) = 1 + ('A' - 1)
// 'A' + i + j - 2 = 'A'
