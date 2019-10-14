#include <algorithm>
#include <iostream>

using namespace std;

int T;

int main() {
  cin >> T;

  for (int t = 1; t <= T; t++) {
    int kyuyoung[9];
    int inyoung[9];

    bool isKyuyoung[19] = {
        false,
    };

    for (int i = 0; i < 9; i++) {
      cin >> kyuyoung[i];

      isKyuyoung[kyuyoung[i]] = true;
    }

    sort(kyuyoung, kyuyoung + 9, greater<int>());

    int index = 0;

    for (int i = 1; i <= 18; i++)
      if (!isKyuyoung[i]) inyoung[index++] = i;

    int win = 0;
    int lose = 0;

    int scoreK = 0;
    int scoreI = 0;

    do {
      scoreK = 0;
      scoreI = 0;

      for (int i = 0; i < 9; i++) {
        if (kyuyoung[i] > inyoung[i])
          scoreK += kyuyoung[i] + inyoung[i];
        else
          scoreI += kyuyoung[i] + inyoung[i];

        if (scoreK > 85 || scoreI > 85) break;
      }

      if (scoreK > scoreI) win++;
      if (scoreK < scoreI) lose++;
    } while (next_permutation(inyoung, inyoung + 9));

    cout << '#' << t << ' ' << win << ' ' << lose << '\n';
  }

  return 0;
}