#ifndef ARGUMENT_H
#define ARGUMENT_H

#include <iostream>

template<typename T>
class Argument {

private:
  std::string name;
  bool isCompulsory;

public:
  Argument(const std::string& name);
  Argument(const std::string& name, bool isCompulsory);
};

#endif
