#include<bits/stdc++.h>
using namespace std;

//Half pyramid after 180 rotation
//n = 5

//Think of writing spaces in row's terms
int main()
{
    int n;
    cin>>n;

    for(int i=1;i<=n;i++) {
        for(int j=1;j<=n;j++) {
            if(j<=n-i) {
                cout<<"  ";
            }
            else {
                cout<<"* ";
            }
        }
        cout<<endl;
    }

    // for(int i=n-1;i>=0;i--) {

    //     for(int j=i;j>0;j--) {
    //         //space
    //         cout<<" ";
    //     }

    //     for(int k=0;k<n-i;k++) {
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

}
