#include <iostream>
#include <string>
using namespace std;

bool hero_wins_battle(const string& abilities) {
    for (int i = 0; i < abilities.length() - 1; i++) {
        if (abilities[i] == 'C' && abilities[i + 1] == 'D') {
            return false;
        }
    }
    return true;
}

int count_winning_battles(int n, const string battles[]) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (hero_wins_battle(battles[i])) {
            count++;
        }
    }
    return count;
}

int main() {
    int n;
    cin >> n;
    string battles[n];
    for (int i = 0; i < n; i++) {
        cin >> battles[i];
    }

    int result = count_winning_battles(n, battles);
    cout << result << endl;

    return 0;
}
