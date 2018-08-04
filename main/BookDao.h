#ifndef CPP_ISOLATED_BY_INHERITANCE_AND_OVERRIDE_BOOKDAO_H
#define CPP_ISOLATED_BY_INHERITANCE_AND_OVERRIDE_BOOKDAO_H

#include "Order.h"

class BookDao {

public:
    virtual void insert(order order);
};

#endif //CPP_ISOLATED_BY_INHERITANCE_AND_OVERRIDE_BOOKDAO_H
