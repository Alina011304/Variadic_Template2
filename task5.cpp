#include <iostream>

template <typename T, typename ... Type>
constexpr auto countOf( T value, Type ... arg)
{
    return  ((... + (arg == value)));
}

int main()
{
    std::cout<<countOf(2,2,5,4,2,5,2)<<std::endl;
    return 0;
}