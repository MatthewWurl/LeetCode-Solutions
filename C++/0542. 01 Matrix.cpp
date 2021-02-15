// Date: Feb. 14, 2021
// Runtime: 60 ms, faster than 95.53% of C++ online submissions for 01 Matrix.
// Memory Usage: 28.8 MB, less than 65.64% of C++ online submissions for 01 Matrix.

class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<vector<int>> dist(n, vector<int>(m, -1));
        queue<pair<int, int>> q;
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if(matrix[i][j] == 0) { // source node
                    dist[i][j] = 0;
                    q.push({i, j});
                }
            }
        }
        
        // directions (up, right, down, left)
        const int dx[] = {-1, 0, 1, 0};
        const int dy[] = {0, 1, 0, -1};
        
        while (!q.empty()) {
            pair<int, int> curr = q.front(); q.pop();
            
            for (int i = 0; i < 4; i++) {
                pair<int, int> next = {curr.first + dx[i], curr.second + dy[i]};
                // check if next is valid
                if (next.first >= 0 && next.first < n
                    && next.second >= 0 && next.second < m) {
                    if (dist[next.first][next.second] == -1) {
                        dist[next.first][next.second] = dist[curr.first][curr.second] + 1;
                        q.push(next);
                    }
                }
            }
        }
        
        return dist;
    }
};
