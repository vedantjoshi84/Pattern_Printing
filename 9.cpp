#include<bits/stdc++.h>
using namespace std;

// Rhombus pattern
int main()
{
    int n;
    cin>>n;

    for(int i=1;i<=n;i++) {
        for(int j=1;j<=n-i;j++) {
            cout<<"  ";
        }
        for(int j=1;j<=n;j++) {
            cout<<"* ";
        }
        cout<<endl;
    }

}
