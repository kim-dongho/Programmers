#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int> > commands) 
{
    vector<int> answer;
    
    for(int i = 0; i < commands.size(); i++)
    {
        vector<int> commands1;
        vector<int> commands2;
        
        for(int j = 0; j < 3; j++)
        {
            commands1.push_back(commands[i][j]);
        }
                
        for(int k = commands1.at(0); k <= commands1.at(1); k++)
        {
            commands2.push_back(array.at(k-1));
        }
        sort(commands2.begin(),commands2.end());
        
        int count = commands2.at(commands1.at(2)-1);
        commands1.clear();
        commands2.clear();
        answer.push_back(count);
    }
    return answer;
}
