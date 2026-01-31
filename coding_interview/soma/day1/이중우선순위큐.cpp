//프로그래머스
#include <string>
#include <vector>
#include <algorithm>   // min_element, max_element

using namespace std;

vector<int> solution(vector<string> operations) {
    vector<int> queue;

    for (const string& o : operations) {
        if (o[0] == 'I') {
            // "I 숫자"
            int value = stoi(o.substr(2));
            queue.push_back(value);
        }
        else if (o == "D -1") {
            if (queue.empty()) continue;

            auto it = min_element(queue.begin(), queue.end());
            queue.erase(it);
        }
        else if (o == "D 1") {
            if (queue.empty()) continue;

            auto it = max_element(queue.begin(), queue.end());
            queue.erase(it);
        }
    }

    if (queue.empty()) return {0, 0};

    int maxVal = *max_element(queue.begin(), queue.end());
    int minVal = *min_element(queue.begin(), queue.end());

    return {maxVal, minVal};
}
