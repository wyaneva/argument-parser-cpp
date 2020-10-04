#ifndef ARGUMENT_PARSER_H
#define ARGUMENT_PARSER_H

#include "Argument.h"
#include <iostream>
#include <vector>

class ArgumentParser {
private:
  std::vector<Argument> arguments;

public:
  template<typename T>
  void registerArgument(std::string name);

  template<typename T>
  void registerArgument(std::string name, bool isCompulsory);

  int parseInt();
  std::string parseString();
  bool parseBool();

  void parseArguments();
};

#endif
