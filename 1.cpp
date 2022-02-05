#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  int cur = -1, res = 1;

  unordered_map<char, int> a;
  string calphs;
  cin >> calphs;
  for (int i = 0; i < calphs.length(); i++)
    a[calphs[i]] = i;

  string hum;
  cin >> hum;
  for (auto &i : hum) {
    if (a[i] > cur)
      cur = a[i];
    else {
      res++;
      cur = a[i];
    }
  }

  cout << res;
}