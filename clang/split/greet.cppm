// define the public interface of the module here
// here you can also have your implementation

// this file must have the extension `cppm`, `ccm`, `cxxm` or `c++m` see
// `compile` for more info

export module greet;

import <string>;

export void say_hello(std::string name);
