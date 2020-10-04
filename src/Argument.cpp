#include "Argument.h"

template<typename T>
Argument<T>::Argument(const std::string& name) : name {name}, isCompulsory {false} {}

template<typename T>
Argument<T>::Argument(const std::string& name, bool isCompulsory) : name {name}, isCompulsory {isCompulsory} {}
