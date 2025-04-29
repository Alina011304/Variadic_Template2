#include <iostream>

template <typename ... T>
constexpr bool allTrue(T ... args)
{
    return (... && args);
}
template <typename ... T>
constexpr bool anyTrue(T ... args)
{
    return (... || args);
}

int main()
{
    std::cout<<allTrue(true,true,true)<<std::endl;
    std::cout<<allTrue(true,false,true,false,false)<<std::endl;
    std::cout<<anyTrue(true,true,true)<<std::endl;
    std::cout<<anyTrue(true,false)<<std::endl;

}