#include <iostream>
#include <type_traits>
#include <algorithm>
template <typename ... T>
constexpr auto largestSizeofType(T&& ... arg)
{
    return std::max({sizeof(std::decay_t<T>)...});
}

int main()
{
    std::cout << largestSizeofType(1, 4.5, -6) << std::endl;
    return 0;
}
