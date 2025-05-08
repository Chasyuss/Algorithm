#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<string>> board, int h, int w) {
    int answer = 0;
    
    int a[4] = {0, 1, -1, 0};
    int b[4] = {1, 0, 0, -1};
    
    for(int i = 0; i < 4; i++){
        if ((0 <= h + a[i]) && (h + a[i] < board.size()) && (0 <= w+b[i]) && (w+b[i] < board[0].size())){
            if (board[h][w] == board[h+a[i]][w+b[i]]){
                answer++;
            }
        }
    }
    
    return answer;
}
