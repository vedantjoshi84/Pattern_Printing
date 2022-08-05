#include<bits/stdc++.h>
using namespace std;

// Print one
int main()
{
    int n;
    cout<<"Enter odd no: ";
    cin>>n;
    cout<<endl;
    int mid = n/2 + 1;
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=n;j++) {
            if(i==n || j==mid || (i+j==mid && j<=mid)) {
                cout<<"* ";
            }
            else {
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}
