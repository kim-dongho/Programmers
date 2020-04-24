#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> A, vector<int> B)
{
    sort(A.begin(),A.end());
    sort(B.begin(),B.end());
    int answer = 0;

    for(int i = 0,j = B.size()-1; i < A.size(); i++,j--)
    {
            answer += A[i] * B[j];
    }
    return answer;
}

