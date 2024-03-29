#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> d, int budget) {
    int answer = 0;
    int val = 0;
    
    sort(d.begin(), d.end());
    
    for(int i=0; i<d.size(); i++){
        if(val + d[i] <= budget){
            val += d[i];
            answer++;
        }else break;
    }
    
    return answer;
}
