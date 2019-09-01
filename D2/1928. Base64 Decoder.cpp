#include <iostream>
#include <vector>

using namespace std;

int T;

string base64 =
    "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";

int main() {
  cin >> T;

  for (int t = 1; t <= T; t++) {
    string str;

    cin >> str;

    vector<int> vi;

    for (int i = 0; i < str.length(); i++) {
      for (int j = 0; j < 64; j++) {
        if (base64[j] == str[i]) {
          vi.push_back(j);
          break;
        }
      }
    }

    vector<int> decoded;

    vector<int> bin;

    int tmp = 0;

    for (int i = 0; i < vi.size(); i++) {
      tmp = vi[i];

      while (bin.size() < 6) {
        bin.push_back(tmp % 2);

        tmp /= 2;
      }

      while (!bin.empty()) {
        decoded.push_back(bin[bin.size() - 1]);

        bin.pop_back();
      }
    }

    string result = "";

    int dec = 0;
    int mul = 0;

    for (int i = 0; i < decoded.size(); i += 8) {
      dec = 0;
      mul = 1;

      for (int j = i + 7; j >= i; j--) {
        if (decoded[j]) dec += decoded[j] * mul;

        mul *= 2;
      }

      result += dec;
    }

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}