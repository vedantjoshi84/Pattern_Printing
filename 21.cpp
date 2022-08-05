#include<bits/stdc++.h>
using namespace std;

// Dabangg Pattern
int main()
{
    int n;
    cin>>n;

    for(int i=1;i<=n;i++) {
        for(int j=1;j<=n-i+1;j++) {
            cout<<j<<" ";
        }

        // Imp
        for(int j=1;j<=((i-1)*2);j++) {
            cout<<"* ";
        }

        for(int j=n-i+1;j>=1;j--) {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
