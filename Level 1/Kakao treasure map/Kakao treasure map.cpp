#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer;
    vector<int> tmp;
    
    for(int i = 0; i < n; i++)
        tmp.push_back(arr1[i] | arr2[i]);
    
    for(int i = 0; i < n; i++)
    {
        string dummy = "";
        for(int j = 0; j < n; j++)
        {
            if(tmp[i] % 2 == 1)
                dummy += "#";
            else
                dummy += " ";
            tmp[i] /= 2;
        }
        reverse(dummy.begin(),dummy.end());
        answer.push_back(dummy);
    }
    
    return answer;
}
