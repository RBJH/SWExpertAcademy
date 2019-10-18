#include <iostream>

using namespace std;

int T;
string result;

int main() {
  cin >> T;

  string hole = "ADOPQR";

  for (int t = 1; t <= T; t++) {
    string str1, str2;

    result = "SAME";

    cin >> str1 >> str2;

    if (str1.length() != str2.length()) result = "DIFF";

    if (result == "SAME") {
      string s1 = "";
      string s2 = "";

      for (int i = 0; i < str1.length(); i++) {
        if (str1[i] == 'B') s1 += str1[i];
        if (str2[i] == 'B') s2 += str2[i];

        for (int j = 0; j < hole.length(); j++) {
          if (hole[j] == str1[i]) s1 += hole[0];
          if (hole[j] == str2[i]) s2 += hole[0];
        }

        if (s1.length() == i) s1 += "C";
        if (s2.length() == i) s2 += "C";

        if (s1[i] != s2[i]) {
          result = "DIFF";
          break;
        }
      }
    }

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}