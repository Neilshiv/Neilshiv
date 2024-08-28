#include <bits/stdc++.h>
using namespace std;
void maxoccurence(int arr[], int n)
{
  map<int, int> mpp;
  for (int i = 0; i < n; i++)
  {
    mpp[arr[i]] = 0;
  }
  for (int i = 0; i < n; i++)
  {
    if (mpp.find(arr[i]) != mpp.end())
    {
      mpp[arr[i]]++;
    }
  }

  int smax;
  // sort(arr, arr + n);
  for (int i = n - 1; i > 0; i--)
  {
    if (arr[i] != arr[n - 1])
    {
      smax = arr[i];
      break;
    }
  }
  cout << smax << endl;
  cout << mpp[smax] << endl;
  // int k = mpp.size();
  // for (auto it : mpp)
  // {
  //   cout << it.first << " " << it.second << "\n";
  // }
  // cout << k << endl;
  // cout << mpp[k - 2];
}
int main()
{
  int arr[15] = {1, 6, 4, 8, 7, 9, 6, 7, 8, 8, 5, 7, 8, 1, 7};
  sort(arr, arr + 15);
  int n = 15;

  maxoccurence(arr, 15);
  // cout << "result:" << result;
}