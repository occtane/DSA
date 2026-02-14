#include <iostream>

void func(const int n)
{
    if (n > 0)
    {
        std::cout << n << '\n';
        func(n - 1);
    }
}

int main()
{
    int x = 3;
    func(3);

    return 0;
}