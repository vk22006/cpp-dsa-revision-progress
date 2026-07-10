/*
Given an array,

print:
Maximum Sum
Starting Index
Ending Index

Example:
7
2 -1 3 -5 6 2 -1

Output:
Sum = 8
Start = 4
End = 5
*/

#include <iostream>
#include <vector>

void solve() {
    int size;
    std::cin >> size;
    std::vector<int> arr(size);
    for(int i=0; i<size; i++) std::cin >> arr[i];

    int current = arr[0];
    int best = arr[0];
    int start = 0;
    int end = 0;

    int candidatestart = 0;

    for(int i=1; i<size; i++) {
        if(arr[i] > current + arr[i]) {
            candidatestart = i;
        }
        current = std::max(arr[i], current + arr[i]);
        if(current > best) {
            best = current;
            start = candidatestart;
            end = i;
        }
    }

    std::cout << "Sum = " << best << "\n";
    std::cout << "Start = " << start << "\n";
    std::cout << "End = " << end << "\n";
}

int main() {
    solve();
    return 0;
}