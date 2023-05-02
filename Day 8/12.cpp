#include<bits/stdc++.h>
using namespace std;

int operation(string &a, string &b, int i, int j){
    if(j==0){
       return i;
        
    }
    if(i==0){
       return j;
    }
    int cnt=0;
    if(a[i-1]==b[j-1]){
        cnt+=operation(a, b, i-1,j-1);
    }
    else{
        cnt=1+ min(operation(a, b, i-1, j-1), min(operation(a, b, i, j-1), operation(a, b, i-1, j)));
    }
    

    return cnt;


}

int main()
{
    vector<string> a = {"abcd", "geeksforgeeks", "heap", "abcd", "cue", "edl"};
    vector<string> b = {"abc", "geeks", "pea", "anc", "dgo", "xcqja"};
    for(int i=0; i<6; i++){
        cout<<operation(a[i], b[i], a[i].size(), b[i].size())<<" ";
    }

 return 0;
}
