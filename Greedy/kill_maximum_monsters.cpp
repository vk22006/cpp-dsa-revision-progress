#include <iostream>
#include <vector>

int main() {
    int NumberOfMonsters;
    int EnergyOfPlayer;
    std::cin >> NumberOfMonsters >> EnergyOfPlayer;

    std::vector<int> Power;
    Power.resize(NumberOfMonsters);
    for(int i=0; i<NumberOfMonsters; i++) std::cin >> Power[i];

    std::vector<int> BonusScore;
    BonusScore.resize(NumberOfMonsters);
    for(int i=0; i<NumberOfMonsters; i++) std::cin >> BonusScore[i];

    std::vector<std::pair<int, int>> Monster;
    Monster.resize(NumberOfMonsters);
    for(int i=0; i<NumberOfMonsters; i++) {
        Monster[i] = { Power[i], BonusScore[i] };
    }

    int KillCount = 0;
    for(auto& monster : Monster) {
        if(EnergyOfPlayer >= monster.first) {
            EnergyOfPlayer += monster.second;
            KillCount++;
        }
        else {
            break;
        }
    }

    std::cout << KillCount;

    return 0;
}