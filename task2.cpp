#include <iostream>

template<typename ... T>
constexpr auto  sumAll(T ... arg)
{
    return (arg + ... +0);
}

int main()
{
    std::cout<<sumAll(4,5)<<std::endl;
    std::cout<<sumAll(4.5,2.5,9.4,6.3)<<std::endl;
    std::cout<<sumAll()<<std::endl;

    return 0;
}