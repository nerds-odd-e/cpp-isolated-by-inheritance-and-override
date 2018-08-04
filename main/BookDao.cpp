#include "BookDao.h"
#include <stdexcept>
#include <iostream>

void BookDao::insert(order& order) {
    std::cout << "call real insert" << std::endl;
    throw std::logic_error("Not Implemented");
}
