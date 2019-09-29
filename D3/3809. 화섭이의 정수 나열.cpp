#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

int T, N;
int result;

int num[10000] = {
    0,
};

int main() {
  cin >> T;

  for (int t = 1; t <= T; t++) {
    cin >> N;

    for (int i = 0; i < 10000; i++) num[i] = 0;

    vector<char> v;

    char tmp;

    for (int n = 0; n < N; n++) {
      cin >> tmp;

      v.push_back(tmp);

      num[tmp - '0']++;
    }

    bool flag = false;

    for (int i = 2; i <= 4; i++) {
      for (int j = 0; j < pow(10, i - 1); j++) {
        if (!num[j]) {
          result = j;

          flag = true;
          break;
        }
      }

      if (flag) break;

      string str;

      for (int j = 0; j <= N - i; j++) {
        str = "";

        for (int k = j; k < i + j; k++) {
          str += v[k];

          num[stoi(str)]++;
        }
      }
    }

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}