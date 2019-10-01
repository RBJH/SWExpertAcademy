#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int T, N, K;
int result;

int main() {
  cin >> T;

  for (int t = 1; t <= T; t++) {
    cin >> N >> K;

    vector<int> v;

    int score = 0;

    for (int n = 0; n < N; n++) {
      cin >> score;

      v.push_back(score);
    }

    sort(v.begin(), v.end(), greater<int>());

    result = 0;

    for (int k = 0; k < K; k++) {
      result += v[k];
    }

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}