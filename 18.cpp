#include<bits/stdc++.h>
using namespace std;

// Square Pattern Printing with diagonals
int main()
{
    int n;
    cin>>n;

    for(int i=1;i<=n;i++) {
        for(int j=1;j<=n;j++) {
            if(i==1 || j==1 || j==n || i==n || (i==j) || (i==n-j+1)) {
                cout<<"* ";
            }
            else {
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}


