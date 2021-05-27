#include "variant"
#include <string>
#include <iostream>
// Type your code here, or load an example.

int main()
{
	using namespace gly;
    std::cout << "1\n";
	using v_t = variant<std::string, int, double>;
	v_t a("fgdsfg");
    v_t b(std::string("abcd"));
	v_t c(252);
    std::cout << "2\n";
    std::cout << get<std::string>(a) << std::endl;
	v_t d(a);
	std::cout << get<std::string>(d) << std::endl;
	v_t e(c);
	std::cout << get<int>(c) << std::endl;
	std::cout << "3\n";
}