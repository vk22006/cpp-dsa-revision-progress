/*
Fractional Kanpsack:
You are given a knapsack with a certain capacity and a list of items, each having a weight and a value. The goal is to select items from the list to maximize the total value while ensuring that the total weight of the selected items does not exceed the capacity of the knapsack. Implement a greedy algorithm to solve this problem.

Input format :
The first line contains an integer capacity representing the maximum weight capacity of the knapsack.
The second line contains an integer n representing the number of items in the list.
The next n lines contain two space-separated integers, weight and value, representing the weight and value of each item.

Output format :
The output consists of the following:

Hint:
The list of completely selected items, where each line contains the weight and value of an item that was taken in full. Items are selected using a greedy approach based on value-to-weight ratio.
The maximum value that can be achieved (including fractional items), rounded to two decimal places.

ALGORITHM:

Read input
↓
Store
(weight,value)
↓
Compute ratio
↓
Sort by ratio descending using comparator function
↓
For each item
↓
Fits completely?
↓
Yes
Take whole
↓
No
Take fraction
↓
Done

Input:
3
10 60
20 100
30 120
*/

#include <iostream>
#include <vector>
#include <algorithm>

struct Items {
    int value;
    int weight;
    double ratio;
};

bool compare(const Items& a, const Items& b) {    // Comparator function for sorting
    return a.ratio > b.ratio;
}

void solve() {
    int capacity;
    int size;
    std::cin >> capacity;
    std::cin >> size;

    std::vector<Items> items;
    
    for(int i=0; i<size; i++) {
        Items temp;
        std::cin >> temp.weight;
        std::cin >> temp.value;

        temp.ratio = static_cast<double>(temp.value) / temp.weight;

        items.push_back(temp);
    }

    std::sort(items.begin(), items.end(), compare);  // Sort arr based on comparator, here we will sort based on ratio

    double sum = 0;
    int wsum = 0;

    std::cout << "Selected items: \n";
    for(int i=0; i<size; i++) {
        if(wsum + items[i].weight <= capacity) {
            wsum += items[i].weight;
            sum += items[i].value;
            std::cout << "Weight: " << items[i].weight 
                << " Value: " << items[i].value << "\n";
        }
        else {
            int remaining = capacity - wsum;
            double fraction_wt = static_cast<double>(remaining) / items[i].weight;
            double fraction_val = fraction_wt * items[i].value;
            sum += fraction_val;
            break;
        }
    }
    std::cout << "Sum: " << sum;
}

int main() {
    solve();
    return 0;
}