#include <iostream>
#include <type_traits>
#include <cassert>

template<typename T, typename... Type>
constexpr bool allSameType(T&&, Type&&...) {
    return (... && std::is_same_v<std::decay_t<T>, std::decay_t<Type>>);
}
static_assert(allSameType(1, 2, 3));   
int main()
{
    std::cout<<allSameType(1, 2, 3)<<std::endl;
    std::cout<<allSameType(1, 2.2, 3)<<std::endl;

}