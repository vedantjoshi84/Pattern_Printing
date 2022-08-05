#include<bits/stdc++.h>
using namespace std;

// Swastik pattern
// Can be done taking i, j = 0. Split it in i<row/2 and after that
int main()
{
    int n;
    cout<<"Enter odd input: ";
    cin>>n;
    cout<<endl;

    int i, j;
    int mid = (n/2)+1;

    for(int i=1;i<=n;i++) {
        for(int j=1;j<=n;j++) {
            if( (i==mid || j==mid) || (i==1 && j>=mid) || (j==1 && i<=mid) || (i==n && j<=mid) || (j==n && i>=mid) ) {
                cout<<"* ";
            }
            else {
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}
