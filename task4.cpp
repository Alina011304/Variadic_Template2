#include <iostream>

template <typename ... T>
constexpr auto multiplyAll(T ... arg)
{
    return (arg * ... * 1);
}
int main()
{
    std::cout<<multiplyAll(4,5)<<std::endl;
    std::cout<<multiplyAll(-2,5,12,4)<<std::endl;

    return 0;
}