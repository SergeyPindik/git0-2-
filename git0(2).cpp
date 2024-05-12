#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    bool x = !(n % 2);
    if (x) {
        std::cout << "Yes\n";
    }
    else {
        std::cout << "No\n";
    }
}