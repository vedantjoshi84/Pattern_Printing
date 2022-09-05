// Input: n = 3
// Output: 
// 1*2*3*10*11*12
// --4*5*8*9
// ----6*7

#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    vector<string> pattern(int n){
        // code here
        vector<string> res(n, "");
        int x = n;
        
        int space = 0;
        int no = 1;
        for(int i=0;i<n;i++) {
            string s = "";
            for(int i=0;i<space;i++) {
                s+= '-';
            }
            
            for(int i=0;i<x;i++) {
                s += to_string(no);
                s += '*';
                no++;
            }
            space+=2;
            x--;
            res[i] = s;
        }
        
        x = 1;
        for(int i=n-1;i>=0;i--) {
            for(int j=0;j<x;j++) {
                res[i] += to_string(no) + "*";
                no++;
            }
            x++;
        }
        
        for(int i=0;i<n;i++) {
            res[i].pop_back();
        }
        
        return res;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        Solution ob;
        vector<string> ans = ob.pattern(n);
        for(int i = 0;i < n;i++)
            cout<<ans[i]<<"\n";
    }
    return 0;
}
// } Driver Code Ends
