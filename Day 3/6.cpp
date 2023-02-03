#include<bits/stdc++.h>
using namespace std;
 
void permute(string str, string s)
{
    if (str.size() == 0) {
        cout << s << " ";
        return;
    }
    char ch1 = tolower(str[0]);
    char ch2 = toupper(str[0]);
    str = str.substr(1);
 
    permute(str, s + ch1);
    permute(str, s + ch2);
}
int main()
{
    string str = "AB";
    permute(str, "");
    return 0;
}
