#include<bits/stdc++.h>
using namespace std;

//Palindromic pattern
int main()
{
    int n;
    cin>>n;

    for(int i=1;i<=n;i++) {
        int j;

        for(j=1;j<=n-i;j++) {
            cout<<"  ";
        }
        int k=i;
        for(;j<=n;j++) {
            cout<<k--<<" ";
        }
        k = 2;
        for(;j<=n-1+i;j++) {
            cout<<k++<<" ";
        }
        cout<<endl;
    }
}
