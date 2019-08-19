// 1221. [S/W 문제해결 기본] 5일차 - GNS
#include <iostream>
#include <vector>

using namespace std;

int T, N;

string val[10] = {"ZRO", "ONE", "TWO", "THR", "FOR",
                  "FIV", "SIX", "SVN", "EGT", "NIN"};

int main() {
  cin >> T;

  for (int t = 0; t < T; t++) {
    string str;

    cin >> str >> N;

    cout << str << '\n';

    int cnt[10] = {0, };

    for (int n = 0; n < N; n++) {
      cin >> str;

      for (int i = 0; i < 10; i++) {
        if (val[i] == str) {
          cnt[i]++;
          break;
        }
      }
    }

    for (int i = 0; i < 10; i++)
      while (cnt[i]--) cout << val[i] << ' ';

    cout << '\n';
  }

  return 0;
}
