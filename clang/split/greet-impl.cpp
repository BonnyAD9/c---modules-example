// parts of the implementation may be in different translation units

module greet;

import <iostream>;
import <string>;

void say_hello(std::string name) {
    std::cout << "Hello " << name << std::endl;
}
