#include <iostream>
#include <type_traits>


template <typename T, typename... Arg>
constexpr int count_Types(int count)
{
    if constexpr ((std::is_same_v<T, Arg> || ...)) {
        return count;  
    } else {
        return count + 1;  
    }
}

template <typename... T>
constexpr int countTypes(T&&... arg)
{ 
    return (count_Types<T, T...>(0)); 
}

int main()
{
    std::cout<<countTypes(1,2,2.0,'c')<<std::endl;
   
    return 0;
}
