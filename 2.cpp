#include<bits/stdc++.h>
using namespace std;

//Inverted half pyramid
//n = 5
int main()
{
    int n;
    cin>>n;
    for(int i=n;i>0;i--) {
        for(int j=1;j<=i;j++) {
            cout<<"*";
        }
        cout<<endl;
    }
}
