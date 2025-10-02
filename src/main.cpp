#include "greetingutils.h"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::getline;
int main() {
	string name;
	getline(cin, name);
	string str = GreetingUtils::create_message(name);
	char* C_str = GreetingUtils::format_as_c_string(str);
	cout << C_str << endl;
	delete[] C_str;
}
