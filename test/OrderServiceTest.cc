#include "gtest/gtest.h"
#include "../main/OrderService.h"

namespace {

    TEST(OrderService, BookOrder) {
        // hard to isolate dependency to unit test

        OrderService target;
        target.syncBookOrders();
    }

}