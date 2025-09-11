#include "greetingutils.h"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;
int main() {
	cout << "Please enter your name: ";
	string name;
	cin >> name;
	string str = GreetingUtils::create_message(name);
	char* C_str = GreetingUtils::format_as_c_string(str);
	for (int i = 0; i < str.size() + 1; ++i) {
		cout << C_str[i];
	}
	cout << endl;
	delete[] C_str;
}
