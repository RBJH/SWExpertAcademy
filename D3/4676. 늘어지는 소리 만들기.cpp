#include <iostream>

using namespace std;

int T, H;
string result;

int main() {
  cin >> T;

  for (int t = 1; t <= T; t++) {
    string str;

    cin >> str >> H;

    int L[21] = {
        0,
    };

    int l = 0;

    for (int h = 0; h < H; h++) {
      cin >> l;

      L[l]++;
    }

    result = "";

    for (int i = 0; i <= str.length(); i++) {
      if (L[i])
        while (L[i]--) result += '-';

      if (i < str.length()) result += str[i];
    }

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}