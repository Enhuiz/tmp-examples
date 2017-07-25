#include <iostream>
#include <typeinfo>
#include "lexer.hpp"

constexpr char a[] = "+()+-*/";
constexpr char b[] = "$$$";

int main()
{
    using namespace calc;
    using namespace std;

    using s = typename parse_string<a>::type;
    cout << typeid(s).name() << endl;

    using tokens = typename tokenize<s>::type;
    cout << typeid(tokens).name() << endl;
}