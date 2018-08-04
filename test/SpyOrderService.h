#ifndef CPP_ISOLATED_BY_INHERITANCE_AND_OVERRIDE_SPYORDERSERVICE_H
#define CPP_ISOLATED_BY_INHERITANCE_AND_OVERRIDE_SPYORDERSERVICE_H

#include "../main/OrderService.h"
#include "gmock/gmock.h"

class SpyOrderService : public OrderService {

public:
    MOCK_METHOD0(getOrders, list<order>());

    explicit SpyOrderService(BookDao& bookDao) : bookDao(bookDao) {}

    BookDao& getBookDao() override {
        std::cout << "get book dao from spy" << std::endl;
        return bookDao;
    }

private:
    BookDao& bookDao;

//    MOCK_METHOD0(syncBookOrders, void());

//    void realSyncBookOrders() {
//        OrderService::syncBookOrders();
//    }
};

#endif //CPP_ISOLATED_BY_INHERITANCE_AND_OVERRIDE_SPYORDERSERVICE_H
