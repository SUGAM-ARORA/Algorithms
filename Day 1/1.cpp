#include <bits/stdc++.h>
using namespace std;

int res(int n) 
{
  if (n <= 1) 
  return 1;
  if (n == 2) 
  return 2;
  if (n == 3) 
  return 4;
  return res(n - 1) + res(n - 2) + res(n - 3);
}
int main() 
{
  int n;
  cin >> n;
  cout << res(n) << endl;
  return 0;
}
