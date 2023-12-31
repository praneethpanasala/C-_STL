/* out put to the below program : 
 * Original Vector : 5 3 8 1 7 2 4 6 
 * push element using push_back API : 5 3 8 1 7 2 4 6 9 
 * push element using emplace_back API : 5 3 8 1 7 2 4 6 9 10 
 * pop element pop_back API : 5 3 8 1 7 2 4 6 9 
 * Size: 9
 * Empty: false
 * Print the vector after clear : 
 * new Vector : 1 2 3 4 5 
 * Front: 1
 * Back : 5
 * Print the vector after erase : 1 2 4 5 
 * Print the vector after erase range : 4 5 
 * Capacity : 5
 * Capacity after reverse : 14
 * Print before shrink_to_fit  : 4 5 0 1 2 3 4 5 6 7 8 9 
 * Capacity : 12
 * sort : 0 1 2 3 4 4 5 5 6 7 8 9 
 * Found : 1
 * for_each : 0 2 4 6 8 8 10 10 12 14 16 18 
 * accumulate : 108
 * copy the vector : 0 2 4 6 8 8 10 10 12 14 16 18 
 * Final Vector: 18 16 14 12 10 10 8 8 6 4 2 0 
 * */

#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

void print_function(vector<int> v) {
    for (auto& it : v) {
        cout << it << " ";
    }
    cout << endl;
}

int main() {
    vector<int> numbers = {5, 3, 8, 1, 7, 2, 4, 6};
    cout << "Original Vector : ";
    print_function(numbers);

    numbers.push_back(9);
    cout << "push element using push_back API : ";
    print_function(numbers);

    numbers.emplace_back(10);
    cout << "push element using emplace_back API : ";
    print_function(numbers);

    numbers.pop_back();
    cout << "pop element pop_back API : ";
    print_function(numbers);

    cout << "Size: " << numbers.size() << endl;
    cout << "Empty: " << (numbers.empty() ? "true" : "false") << endl;

    numbers.clear();
    cout << "Print the vector after clear : ";
    print_function(numbers);

    vector<int> newNumbers = {1, 2, 3, 4, 5};
    cout << "new Vector : ";
    print_function(newNumbers);
    cout << "Front: " << newNumbers.front() << endl;
    cout << "Back : " << newNumbers.back() << endl;

    newNumbers.erase(newNumbers.begin() + 2);
    cout << "Print the vector after erase : ";
    print_function(newNumbers);

    newNumbers.erase(newNumbers.begin(), newNumbers.begin() + 2);
    cout << "Print the vector after erase range : ";
    print_function(newNumbers);

    cout << "Capacity : " << newNumbers.capacity() << endl;

    newNumbers.reserve(14);
    cout << "Capacity after reverse : " << newNumbers.capacity() << endl;

    for (int i = 0; i < 10; i++) {
        newNumbers.push_back(i);
    }
    cout << "Print before shrink_to_fit  : ";
    print_function(newNumbers);
    newNumbers.shrink_to_fit();
    cout << "Capacity : " << newNumbers.capacity() << endl;

    std::sort(newNumbers.begin(), newNumbers.end());
    cout << "sort : ";
    print_function(newNumbers);

    auto found = std::find(newNumbers.begin(), newNumbers.end(), 1);
    if (found != newNumbers.end()) {
        std::cout << "Found : " << *found << std::endl;
    } else {
        std::cout << "Not found" << std::endl;
    }

    for_each(newNumbers.begin(), newNumbers.end(), [](int& num) {
        num *= 2;
    });
    cout << "for_each : ";
    print_function(newNumbers);

    int sum = accumulate(newNumbers.begin(), newNumbers.end(), 0);
    cout << "accumulate : " << sum << endl;

    std::vector<int> destination;
    std::copy(newNumbers.begin(), newNumbers.end(), std::back_inserter(destination));
    cout << "copy the vector : ";
    print_function(destination);

    std::reverse(destination.begin(), destination.end());
    cout << "Final Vector: ";
    print_function(destination);

    return 0;
}

