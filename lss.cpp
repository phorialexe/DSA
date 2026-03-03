#include<iostream>
using namespace std;
int main(){
    string s1,s2;
    cin>>s1>>s2;
    int n1=s1.size(), n2=s2.size();
    int tracker[n1+1][n2+1];
    for(int row=0;row<n1;row++){
        for(int col=0;col<n2;col++){
            tracker[row][col]=0;
        }
    }
    int maxlen=0;
    for(int row=1;row<=n1;row++){
        for(int col=1;col<=n2;col++){
            if(s1[row-1]==s2[col-1]){
                tracker[row][col]=tracker[row-1][col-1]+1;
                maxlen=max(maxlen,tracker[row][col]);
            }
            else 
             tracker[row][col]=0;
            
        }
    }
    cout<<maxlen;
}
