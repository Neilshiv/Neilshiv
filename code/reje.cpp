#include <bits/stdc++.h>
#include <vector>
using namespace std;
int maxoccurence(int arr[], int n)
{
  vector<int> v(n);
  for (int i = 0; i < n; i++)
  {
    v[i] = arr[i];
  }
  sort(v.begin(), v.end());
  // return v;
  int smax;
  for (int i = n - 1; i >= 0; i--)
  {
    if (v[i] != v[n - 1])
    {
      smax = v[i];
      break;
    }
  }
  int cnt = 0;
  for (int i = 0; i < v.size(); i++)
  {
    if (v[i] == smax)
      cnt++;
  }
  return cnt;
}
int main()
{
  int arr[15] = {1, 6, 4, 8, 7, 9, 6, 7, 8, 8, 5, 8, 1, 4, 9};
  int n = 15;

  // vector<int> result = maxoccurence(arr, 12);
  // for (int i = 0; i < result.size(); i++)
  // {
  //   cout << result[i] << " ";
  // }
  int result = maxoccurence(arr, 12);
  cout << "result:" << result;
}