#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int i=1;i<=n;i++) {
        for(int j=1;j<=i;j++) {
            char ch = 'A' + i - 1;
            cout<<ch;
        }
        cout<<endl;
    }
}

// map row => 'A'
// like for 1st row we want 1 == 'A'
// Adding row - 1 on both sides,
// row - 1 + 1 = 'A' + row - 1
// row = 'A' + row - 1
