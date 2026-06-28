/*
Activity Selection
Start:
1 3 0 5 8 5
End:
2 4 6 7 9 9

Output:
4

Rule:
Pick earliest finish.
*/

#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>

template<typename T>
void array_input(std::vector<T>& arr) {
    std::string input;
    std::getline(std::cin, input);
    std::stringstream ss(input);
    T x;

    while(ss >> x) arr.push_back(x);
}

void solve() {
    std::vector<int> start;
    std::vector<int> end;
    std::cout << "Start:\n";
    array_input(start);
    std::cout << "End:\n";
    array_input(end);

    int size = static_cast<int>(start.size());

    std::vector<std::pair<int, int>> meetings(size);
    for(int i=0; i<size; i++) {
        meetings[i] = { end[i], start[i] };
    }
    std::sort(meetings.begin(), meetings.end());

    int count = 1;
    int currentEnd = meetings[0].first;
    
    for(int i=1; i<size; i++) {
        if(meetings[i].second >= currentEnd) {
            count++;
            currentEnd = meetings[i].first;
        }
    }

    std::cout << count;

}

int main() {
    solve();
    return 0;
}