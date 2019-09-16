#include <iostream>

using namespace std;

int T;
int result;

string N;

int main() {
  cin >> T;

  for (int t = 1; t <= T; t++) {
    result = 0;

    cin >> N;

    for (int i = 0; i < N.length(); i++) {
      if (N[i] == '1') {
        result++;

        for (int j = i; j < N.length(); j++) {
          if (N[j] == '1')
            N[j]--;
          else
            N[j]++;
        }
      }
    }

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}
