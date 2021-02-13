class Solution {
    int xs[8] = {-1, -1, -1,  0, 0,  1, 1, 1};
    int ys[8] = {-1,  0,  1, -1, 1, -1, 0, 1};
    
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        if (grid.empty() || grid[0].empty()) return 0;
        
        int step = 1; 
        
        int m = grid.size(), n = grid[0].size();
        
        if (grid[0][0] == 1) return -1;
        
        queue<pair<int, int>> q; q.emplace(0, 0); grid[0][0] = 1;
        
        while (!q.empty()) {
            int size = q.size(); 
            
            for (int i = 0; i < size; i++) {
                const auto [x, y] = q.front(); q.pop();  
                            
                if (x == m - 1 && y == n - 1) return step;
  
                for (int j = 0; j < 8; j++) {
                    int nx = x + xs[j], ny = y + ys[j]; 

                    if (0 <= nx && nx < m && 0 <= ny && ny < n && grid[nx][ny] == 0) {
                        q.emplace(nx, ny); grid[nx][ny] = 1;
                    }
                }
            }
            
            step++;
        }
        
        return -1;
    }
};
