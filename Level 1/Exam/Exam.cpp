#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    
    int std1[5] = { 1,2,3,4,5 };
    int std2[8] = { 2,1,2,3,2,4,2,5 };
    int std3[10] = { 3,3,1,1,2,2,4,4,5,5 };
    
    int length = answers.size();
    int cnt[4] = { 0 }; 
    
    for(int i = 0; i < length; i++)
    {
        if(std1[i%5] == answers[i])
            cnt[1]++;
        if(std2[i%8] == answers[i])
            cnt[2]++;
        if(std3[i%10] == answers[i])
            cnt[3]++;       
    }

   for(int i = 1; i <= 3; i++)
   {
       if(answer.empty())
           answer.push_back(i);
       else if(cnt[answer[0]] > cnt[i])
           continue;
       else if(cnt[answer[0]] == cnt[i])
           answer.push_back(i);
       else if(cnt[answer[0]] < cnt[i]){
           answer.clear();
           answer.push_back(i);
       }
   }
    return answer;
}
