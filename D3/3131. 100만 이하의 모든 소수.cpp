#include <iostream>

using namespace std;

int main() {
  bool prime[1000000] = {
      false,
  };

  for (int i = 2; i < 1000000; i++) prime[i] = true;

  for (int i = 2; i < 1000; i++)
    if (prime[i])
      for (int j = i * i; j < 1000000; j += i) prime[j] = false;

  for (int i = 2; i < 1000000; i++)
    if (prime[i]) cout << i << ' ';

  return 0;
}