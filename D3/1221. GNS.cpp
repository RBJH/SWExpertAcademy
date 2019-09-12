#include <iostream>

using namespace std;

int T, N;

int main() {
  cin >> T;

  for (int t = 1; t <= 10; t++) {
    string testCase;

    cin >> testCase >> N;

    cout << testCase << '\n';

    string num[10] = {"ZRO", "ONE", "TWO", "THR", "FOR",
                      "FIV", "SIX", "SVN", "EGT", "NIN"};

    string str;

    int cnt[10] = {
        0,
    };

    for (int n = 0; n < N; n++) {
      cin >> str;

      for (int i = 0; i < 10; i++) {
        if (num[i] == str) {
          cnt[i]++;
          break;
        }
      }
    }

    for (int i = 0; i < 10; i++)
      for (int j = 0; j < cnt[i]; j++) cout << num[i] << ' ';
  }

  return 0;
}