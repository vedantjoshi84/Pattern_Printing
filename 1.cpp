#include<bits/stdc++.h>
using namespace std;

//Hollow rectange
// 5 4
// ****
// *  *
// *  *
// *  *
// ****

int main()
{
    int row, col;
    cin>>row>>col;

    for(int i=0;i<row;i++) {
        for(int j=0;j<col;j++) {
            if(i==0 || i==row-1 || j==0 || j==col-1) {
                cout<<"*";
            }
            else {
                cout<<" ";
            }
        }
        cout<<endl;
    }
}
