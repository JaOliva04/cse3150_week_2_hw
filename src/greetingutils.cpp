#include "greetingutils.h"
#include <iostream>

namespace GreetingUtils {
	std::string create_message(const std::string& name) {
		std::string msg = "Hello, " + name + "!";
		return msg;
	}

	char* format_as_c_string(const std::string& msg) {
		int len = msg.size();
		char* array = new char[len + 1];
		for(int i = 0; i < len; i++) {
			array[i] = msg[i];
		}
		array[len] = '\0';
		return array;
	}

}
