#include <array>
#include <cstdlib>
#include <iostream>
#include <map>
#include <sstream>
#include <string>
#include <type_traits>
#include <vector>
#include <array>

struct Container{};

//template吸収用
template <class>
struct Ignore{
    typedef Container type;
};

//1変数出力用のPrintObj
template <class T, class X=Container >
struct PrintObj{
    void operator()(T value){
        std::cout << value;
    }
};


//配列出力用PrintObj
template<class T>
struct PrintObj<T, typename Ignore<typename T::iterator>::type>{
    void operator()(T value){
        std::cout << std::endl << "{";
        bool isFirst = true;
        for(auto a : value){
            if(!isFirst){
                std::cout << ", ";
            }
            PrintObj<typename T::value_type>()(a);
            isFirst = false;
        }
        std::cout << "}";
    }
};


template<class T>
void Print(T value){
    PrintObj<T>()(value);
}

template<class T, class U>
std::ostream& operator << (std::ostream& os, const std::pair<T, U> p){
    os << "(" << p.first << "," << p.second << ")";
    return os;
}

// int main(void){
//     std::array<int, 5> a = {1,2,3,4,5};
//
//     Print(a);
//
//      return 0;
// }
