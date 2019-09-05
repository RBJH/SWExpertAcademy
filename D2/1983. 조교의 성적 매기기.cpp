#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int T, N, K;

int main() {
  cin >> T;

  for (int t = 1; t <= T; t++) {
    cin >> N >> K;

    int mid = 0;
    int fin = 0;
    int assign = 0;

    double target = 0.0;

    double score = 0.0;

    vector<double> v;

    for (int n = 1; n <= N; n++) {
      cin >> mid >> fin >> assign;

      score = mid * 0.35 + fin * 0.45 + assign * 0.2;

      if (n == K) target = score;

      v.push_back(score);
    }

    sort(v.begin(), v.end(), greater<double>());

    int th = 0;

    for (int i = 0; i < v.size(); i++)
      if (target == v[i]) th = i;

    string result;

    switch (th / (N / 10)) {
      case 0:
        result = "A+";
        break;
      case 1:
        result = "A0";
        break;
      case 2:
        result = "A-";
        break;
      case 3:
        result = "B+";
        break;
      case 4:
        result = "B0";
        break;
      case 5:
        result = "B-";
        break;
      case 6:
        result = "C+";
        break;
      case 7:
        result = "C0";
        break;
      case 8:
        result = "C-";
        break;
      default:
        result = "D0";
    }

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}