#include<bits/stdc++.h>
using namespace std;

//Star pattern
int main()
{
    int n;
    cin>>n;

    for(int i=1;i<=n;i++) {
        int j;
        for(j=1;j<=n-i;j++) {
            cout<<"  ";
        }

        // OR
        // for(int j=1;j<=2*i-1;j++) {
        //     cout<<"* ";
        // }

        for(;j<=n+i-1;j++) {
            cout<<"* ";
        }
        cout<<endl;
    }

    for(int i=n;i>=1;i--) {
        int j;
        for(j=1;j<=n-i;j++) {
            cout<<"  ";
        }

        for(;j<=n+i-1;j++) {
            cout<<"* ";
        }
        cout<<endl;
    }

}
