// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         int n;
//         cin>>n;
//         for(int i=1; i<=n; i++)
//         {
//             string s;
//             for(int j=0; j<i; j++)
//             {
//                 s+='(';
//             }
//             for(int j=0; j<i; j++)
//             {
//                 s+=")";
//             }
//             for(int j=0; j<n-i; j++)
//             {
//                 s+="(";
//             }
//             for(int j=0; j<n-i; j++)
//             {
//                 s+=")";
//             }
//             cout<<s<<endl;
//         }
//     }
// }


#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int tt;
  cin >> tt;
  while (tt--) {
    int n;
    cin >> n;
    vector<string> res;
    string s = "";
    function<void(int, int)> Dfs = [&](int v, int b) {
      if ((int) res.size() == n) {
        return;
      }
      if (b < 0 || b > 2 * n - v) {
        return;
      }
      if (v == 2 * n) {
        res.push_back(s);
        return;
      }
      s += "(";
      Dfs(v + 1, b + 1);
      s.pop_back();
      s += ")";
      Dfs(v + 1, b - 1);
      s.pop_back();
    };
    Dfs(0, 0);
    for (auto& x : res) {
      cout << x << '\n';
    }
  }
  return 0;
}