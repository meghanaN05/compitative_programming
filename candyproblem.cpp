#include <iostream>
#include <vector>

int main() {
    int N, C;
    std::cin >> N >> C;
    std::vector<int> T(N);


    for (int i = 0; i < N; ++i) {
        std::cin >> T[i];
    }

    int candies = 0;  
    int lastCandyTime = -C; 

    for (int i = 0; i < N; ++i) {
        if (T[i] - lastCandyTime >= C) {
            candies++;
            lastCandyTime = T[i]; 
        }
    }

    std::cout << candies << std::endl; 
    return 0;
}
