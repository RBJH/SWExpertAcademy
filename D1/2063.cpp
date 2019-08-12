// 2063. 중간값 찾기
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int N;

int main() {
  cin >> N;

  vector<int> v;

  int num = 0;

  for (int n = 0; n < N; n++) {
    cin >> num;

    v.push_back(num);
  }

  sort(v.begin(), v.end());

  cout << v[N / 2];

  return 0;
}