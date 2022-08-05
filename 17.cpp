#include<bits/stdc++.h>
using namespace std;

// Stars in Hollow Right Triangle Shape
int main()
{
    int n;
    cin>>n;

    for(int i=1;i<=n;i++) {
        for(int j=1;j<=i;j++) {
            if(i==n || j==1 || j==i) {
                cout<<"* ";
            }
            else {
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}
