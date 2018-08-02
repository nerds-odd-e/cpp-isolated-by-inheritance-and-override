#ifndef CPP_ISOLATED_BY_INHERITANCE_AND_OVERRIDE_BOOKDAO_H
#define CPP_ISOLATED_BY_INHERITANCE_AND_OVERRIDE_BOOKDAO_H

#include "OrderService.h"

class BookDao {

public:
    void insert(OrderService::order order);
};

#endif //CPP_ISOLATED_BY_INHERITANCE_AND_OVERRIDE_BOOKDAO_H
