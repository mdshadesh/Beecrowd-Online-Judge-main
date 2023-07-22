#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int elevator_button_presses(int f, int s, int g, int u, int d) {
    if (s == g) {
        return 0;
    }

    vector<bool> visited(f + 1, false);
    queue<pair<int, int>> q;
    q.push(make_pair(s, 0));
    visited[s] = true;

    while (!q.empty()) {
        int floor = q.front().first;
        int presses = q.front().second;
        q.pop();

        if (floor == g) {
            return presses;
        }

        vector<int> next_floors = {floor + u, floor - d};
        for (int next_floor : next_floors) {
            if (next_floor >= 1 && next_floor <= f && !visited[next_floor]) {
                visited[next_floor] = true;
                q.push(make_pair(next_floor, presses + 1));
            }
        }
    }

    return -1; // "use the stairs"
}

int main() {
    int f, s, g, u, d;
    cin >> f >> s >> g >> u >> d;

    int result = elevator_button_presses(f, s, g, u, d);
    if (result == -1) {
        cout << "use the stairs" << endl;
    } else {
        cout << result << endl;
    }

    return 0;
}
