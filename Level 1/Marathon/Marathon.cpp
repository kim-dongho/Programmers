#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    int length = completion.size();
    
    sort(participant.begin(),participant.end());
    sort(completion.begin(),completion.end());
    
    for(int i = 0; i < length; i++)
    {
        if(participant[i] != completion[i])
            return participant[i];
    }
    return participant.back();
}
