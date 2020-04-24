#include <string>
#include <vector>
#include <cmath>
using namespace std;

int solution(string dartResult) {
    int answer = 0;
    int length = dartResult.size();
    vector<int> arr;
    int cnt = 0,num = 0;
    
    for(int i = 0; i < length; i++)
    {
        if(dartResult[i] == 'S')
        {
            arr.push_back(num);
            cnt++;
            num = 0;
        } 
        else if(dartResult[i] == 'D')
        {
            arr.push_back(pow(num,2));
            cnt++;
            num = 0;
        }        
        else if(dartResult[i] == 'T')
        {
            arr.push_back(pow(num,3));
            cnt++;
            num = 0;
        }    
        else if(dartResult[i] == '*')
        {
            if(cnt == 1)
                arr[0] *= 2;
            else
                arr[cnt-1] *= 2;
                arr[cnt-2] *= 2;
        }
        else if(dartResult[i] == '#')
        {
            arr[cnt-1] *= -1;
        }    
        else
        {
            num *= 10;
            num += dartResult[i] - '0';
        }
    }
    
    for(int i = 0; i < arr.size(); i++)
        answer += arr[i];
    
    return answer;
}
