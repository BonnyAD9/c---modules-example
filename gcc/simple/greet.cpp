export module greet;

import <iostream>;
import <string>;

export void say_hello(std::string name) {
    std::cout << "Hello " << name << std::endl;
}
