#include<bits/stdc++.h>
using namespace std;

// 0-1 pattern
int main()
{
    int n;
    cin>>n;
    // bool flag;
    for(int i=1;i<=n;i++) {
        // if(i%2!=0) {
        //     flag = true;
        // }
        // else {
        //     flag = false;
        // }
        for(int j=1;j<=i;j++) {
            // Nice logic -
            if((i+j)%2==0) {
                cout<<1<<" ";
            }
            else {
                cout<<0<<" ";
            }
            // cout<<flag<<" ";
            // flag = !flag;
        }
        cout<<endl;
    }

}
