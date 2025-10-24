#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};
    
    int sum = 0;
    for (int i = 0; i < numbers.size(); i++) {
        sum += numbers[i];
    }

    std::cout << "Sum: " << sum << std::endl;
    return 0;
}