#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

typedef long long ll;
typedef pair<ll,ll> p;


// prototype declare to print
struct Container;

template <class>
struct Ignore;

template <class, class X>
struct PrintObj;

template<class T>
struct PrintObj<T, typename Ignore<typename T::iterator>::type>;

template<class T>
void print(T value);

template<class T, class U>
ostream& operator << (ostream& os, const pair<T, U> p);

//////////////////////////////////////////////


int main(void){

}



template <class>
struct Ignore{
  typedef Container type;
};

template <class T, class X=Container>
struct PrintObj{
  void operator()(T value){
    cout << value;
  }
};

template<class T>
struct PrintObj<T, typename Ignore<typename T::iterator>::type>{
  void operator()(T value){
    // cout << endl << "[";
    cout << "[";
    bool isFirst = true;
    for(auto a : value){
      if(!isFirst){
        cout << ", ";
      }
      PrintObj<typename T::value_type>()(a);
      isFirst = false;
    }
    cout << "]";
  }
};

template<class T>
void print(T value){
  PrintObj<T>()(value);
  cout << endl;
}

template<class T, class U>
ostream& operator << (ostream& os, const pair<T, U> p){
  os << "(" << p.first << " : " << p.second << ")";
  return os;
}
