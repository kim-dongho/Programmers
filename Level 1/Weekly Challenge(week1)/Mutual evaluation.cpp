#include <string>
#include <vector>
#include <memory.h>
using namespace std;

string solution(vector<vector<int>> scores) {
    string answer = "";
    float sum,avg,max,min;
    int count[101];
    int len = scores.size();
    for(int i = 0; i < len; ++i)
    {
        sum = 0; min = 100; max = 0;
        memset(count,0,sizeof(count));
        for(int j = 0; j < len; ++j)
        {
            count[scores[j][i]]++;
            if(max < scores[j][i])
                max = scores[j][i];
            else if(min > scores[j][i])
                min = scores[j][i];
            
            sum += scores[j][i];
        }
        
        if(max == scores[i][i])
        {
            if(count[scores[i][i]] > 1)
                avg = sum/len;
            else
                avg = (sum-max)/(len-1);
        }
        else if(min == scores[i][i])
        {
            if(count[scores[i][i]] > 1)
                avg = sum/len;
            else
                avg = (sum-min)/(len-1);
        }
        else
            avg = sum / len;
    
        if(avg >= 90)
            answer += 'A';
        else if(avg >= 80)
            answer += 'B';
        else if(avg >= 70)
            answer += 'C';
        else if(avg >= 50)
            answer += 'D';
        else
            answer += 'F';
    }
    return answer;
}
