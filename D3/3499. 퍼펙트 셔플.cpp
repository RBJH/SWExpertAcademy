#include <iostream>
#include <vector>

using namespace std;

int T, N;
int result;

int main() {
  cin >> T;

  for (int t = 1; t <= T; t++) {
    cout << '#' << t << ' ';

    cin >> N;

    string str;

    vector<string> v;

    for (int n = 0; n < N; n++) {
      cin >> str;

      v.push_back(str);
    }

    for (int i = 0; i < N / 2; i++) {
      cout << v[i] << ' ';

      if (N % 2)
        cout << v[N / 2 + 1 + i] << ' ';
      else
        cout << v[N / 2 + i] << ' ';
    }

    if (N % 2) cout << v[N / 2];

    cout << '\n';
  }

  return 0;
}