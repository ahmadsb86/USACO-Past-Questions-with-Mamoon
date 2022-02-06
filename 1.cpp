// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//   ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
//   int cur = -1, res = 1;

//   unordered_map<char, int> a;
//   string calphs; cin >> calphs;
//   for (int i = 0; i < calphs.length(); i++)
//     a[calphs[i]] = i; 

//   string hum; cin >> hum;
//   for (auto &i : hum) {
//     if (a[i] <= cur) res++;
//     cur = a[i];
//   }

//   cout << res;
// }


#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
  int cur = -1, res = 1;  //set cur to -1 so the if statment doesn't get triggered on first alphabet while traversing the hum

  int pos[26];    //holds position of each alphabet in cow alphabets (eg. if cow alphabets were dcab, then pos[0] = 2 representing that a (pos[0]) is in position 2 in cow alphabets)
  string calphs; cin >> calphs;
  for (int i = 0; i < calphs.length(); i++)
    pos[int(calphs[i]-97)] = i;             //fill up pos array with ascii magic

  string hum; cin >> hum;
  for (auto &i : hum) {                     //traverse hum
    if (pos[int(i-97)] <= cur) res++;       //if we break ascending order, add one to the number of minimum repetitions
    cur = pos[int(i-97)];                   //update cur
  }

  cout << res;       //return answer
}