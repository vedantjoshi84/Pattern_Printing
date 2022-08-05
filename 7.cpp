#include<bits/stdc++.h>
using namespace std;

//Inverted Pattern
int main()
{
    int n;
    cin>>n;
    // for(int i=n;i>0;i--) {
    //     for(int j=1;j<=i;j++) {
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }

    // OR

    for(int i=1;i<=n;i++) {
        for(int j=1;j<=n+1-i;j++) {
            cout<<j<<" ";
        }
        cout<<endl;
    }

}
