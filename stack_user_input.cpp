#include <iostream>
#include <stack>

int main() {
    std::stack<int> s;
    int n, value;

    std::cout << "How many elements to push? ";
    std::cin >> n;

    std::cout << "Enter " << n << " numbers:\n";
    for (int i = 0; i < n; ++i) {
        std::cin >> value;
        s.push(value);
    }

    std::cout << "Stack contents:\n";
    while (!s.empty()) {
        std::cout << s.top() << " ";
        s.pop();
    }

    return 0;
}
