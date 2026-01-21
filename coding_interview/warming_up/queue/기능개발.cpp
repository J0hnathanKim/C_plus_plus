#include <string>
#include <vector>
#include <queue>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    queue<pair<int, int>> que;
    for(int i = 0; i < progresses.size(); i++){
        que.emplace(i, progresses[i]);
    }
    while(!que.empty()){
        int publish = 0;
        for(int i = 0; i < progresses.size(); i++){
            progresses[i] += speeds[i];
        }
        while(!que.empty() && progresses[que.front().first] >= 100){
            publish += 1;
            que.pop();
        }
        if(publish != 0) answer.emplace_back(publish);
    }
    return answer;
}
