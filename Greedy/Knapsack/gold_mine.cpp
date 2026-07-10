/*
Gold Mine:

A miner has a bag of capacity W.
There are N gold chunks.

Each chunk has:
Weight
Value

The miner can cut gold chunks into smaller pieces.
Find the maximum value that can be carried.

Example:
Capacity = 60
Items = 3
Weight Value
10 60
20 100
30 120

Expected:
280
*/

#include <iostream>
#include <vector>
#include <algorithm>

struct Items {
    int weight;
    int value;
    double ratio;
};

bool compare(const Items& a, const Items& b) {
    return a.ratio > b.ratio;
}

void solve() {
    int capacity;
    int noOfItems;
    std::cout << "Capacity: ";
    std::cin >> capacity;
    std::cout << "Items: ";
    std::cin >> noOfItems;

    std::vector<Items> chunks;
    std::cout << "Weight Value \n";
    for(int i=0; i<noOfItems; i++) {
        Items temp;
        std::cin >> temp.weight;
        std::cin >> temp.value;
        temp.ratio = static_cast<double>(temp.value) / temp.weight;
        chunks.push_back(temp);
    }

    std::sort(chunks.begin(), chunks.end(), compare);

    int maxVal = 0;
    int currWeight = 0;

    for(int i=0; i<noOfItems; i++) {
        if(currWeight + chunks[i].weight <= capacity) {
            currWeight += chunks[i].weight;
            maxVal += chunks[i].value;
        }
        else {
            int remaining = capacity - currWeight;
            double fraction_wt = static_cast<double>(remaining) / chunks[i].weight;
            double fraction_val = fraction_wt * chunks[i].value;
            maxVal += fraction_val;
            break;
        }
    }

    std::cout << maxVal;
}

int main() {
    solve();
    return 0;
}