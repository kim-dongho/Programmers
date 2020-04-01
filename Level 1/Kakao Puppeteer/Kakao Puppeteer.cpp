#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstdlib>

using namespace std;

int solution(vector<vector<int>> board, vector<int> moves) {
    int answer = 0;
    int length = moves.size();
    vector<int> tmp;
    int l = 0;
    for(int i = 0; i < length; i++)
    {
        for(int j = 0; j < board[0].size(); j++)
        {
            if(moves[i]-1 == j)
            {
                for(int k = 0; k < board[0].size(); k++)
                {
                    if(board[k][j] == 0)
                        continue;
                    else
                    {
                        tmp.push_back(board[k][j]);
                        if(l > 0 && (tmp[l] == tmp[l-1]))
                        {
                            tmp.pop_back();
                            tmp.pop_back();
                            answer += 2;
                            l -= 2;
                        }
                        l++;
                        board[k][j] = 0;
                        break;
                    }
                }
            break;
            }
        }
    }
    return answer;
}
