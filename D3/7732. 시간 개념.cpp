#include <iostream>

using namespace std;

int T;

int main() {
  cin >> T;

  for (int t = 1; t <= T; t++) {
    cout << '#' << t << ' ';

    string time1;

    cin >> time1;

    string time2;

    cin >> time2;

    int hours1 = stoi(time1.substr(0, 2));
    int hours2 = stoi(time2.substr(0, 2));

    int minutes1 = stoi(time1.substr(3, 5));
    int minutes2 = stoi(time2.substr(3, 5));

    int seconds1 = stoi(time1.substr(6, 8));
    int seconds2 = stoi(time2.substr(6, 8));

    int seconds = seconds2 - seconds1;
    int minutes = minutes2 - minutes1;

    if (seconds < 0) {
      seconds += 60;

      minutes--;
    }

    int hours = hours2 - hours1;

    if (minutes < 0) {
      minutes += 60;

      hours--;
    }

    if (hours < 0) hours += 24;

    if (hours < 10) cout << 0;

    cout << hours << ':';

    if (minutes < 10) cout << 0;

    cout << minutes << ':';

    if (seconds < 10) cout << 0;

    cout << seconds << '\n';
  }

  return 0;
}