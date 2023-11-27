#include <iostream>
#include <vector>

using namespace std;

int n, m;

bool isValid(int i, int j) {
    return i >= 0 && i < n && j >= 0 && j < m;
}
// hh

int dfs(vector<vector<int>>& table, int i, int j, vector<vector<int>>& dp) {
    if (!isValid(i, j)) {
        return 0;
    }

    if (dp[i][j] != -1) {
        return dp[i][j];
    }

    int ways = 1; // Include the current cell

    if (isValid(i + 1, j) && table[i + 1][j] >= table[i][j]) {
        ways += dfs(table, i + 1, j, dp);
    }

    if (isValid(i, j + 1) && table[i][j + 1] >= table[i][j]) {
        ways += dfs(table, i, j + 1, dp);
    }

    dp[i][j] = ways;
    return ways;
}

void findCellsWithScore(vector<vector<int>>& table, int k) {
    vector<vector<int>> dp(n, vector<int>(m, -1));

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            int score = dfs(table, i, j, dp);
            if (score == k) {
                cout << i << " " << j << "\n";
            }
        }
    }
}

int main() {
    cin >> n >> m;

    vector<vector<int>> table(n, vector<int>(m));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> table[i][j];
        }
    }

    int k;
    cin >> k;

    findCellsWithScore(table, k);

    return 0;
}
