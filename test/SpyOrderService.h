#ifndef CPP_ISOLATED_BY_INHERITANCE_AND_OVERRIDE_SPYORDERSERVICE_H
#define CPP_ISOLATED_BY_INHERITANCE_AND_OVERRIDE_SPYORDERSERVICE_H

#include "../main/OrderService.h"
#include "gmock/gmock.h"

class SpyOrderService : public OrderService {

public:
    SpyOrderService(BookDao& bookDao) : OrderService(bookDao) { }

    MOCK_METHOD0(getOrders, list<order>());

};

#endif //CPP_ISOLATED_BY_INHERITANCE_AND_OVERRIDE_SPYORDERSERVICE_H
