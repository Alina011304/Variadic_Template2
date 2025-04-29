#include <iostream>
#include <algorithm>

template <typename T, typename... Type>
constexpr T minimumOf(T first, Type... args) {
    return (... , (first= std::min(first, args)));
}

int main()
{
    std::cout<<minimumOf(4,5,8,1,-8)<<std::endl;
    std::cout<<minimumOf(0,-7,-9999,1236)<<std::endl;

    return 0;
}
