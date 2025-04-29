#include <iostream>
#include <cassert>
constexpr bool isSorted()
{
    return true;
}
template <typename T>
constexpr bool isSorted(T)
{
    return true;
}
template <typename T, typename U, typename ... Type>
constexpr bool isSorted(T first, U second, Type ... arg)
{
    return (first<=second) && isSorted(second,arg...);
}
static_assert(isSorted(1, 2, 3, 4));
static_assert(!isSorted(1, 3, 2));
static_assert(isSorted(5));
int main()
{
    return 0;
}