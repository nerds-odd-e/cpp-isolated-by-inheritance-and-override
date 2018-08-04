#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include "SpyOrderService.h"
#include "MockBookDao.h"
#include <list>

using ::testing::NiceMock;
using ::testing::StrictMock;
using ::testing::Return;
using ::testing::ReturnRef;
using ::testing::ReturnNull;
using ::testing::ReturnPointee;
using ::testing::Invoke;
using namespace std;

using ::testing::_;
using ::testing::Eq;

namespace {

    MATCHER_P(OrderEq, order, "") {
        return arg.type == order.type && arg.price == order.price && arg.productName == order.productName && arg.customerName == order.customerName;
    };

    TEST(OrderServiceTest, BookOrder) {
        MockBookDao mockBookDao;
        EXPECT_CALL(mockBookDao, insert(OrderEq(order("Book", 100, "TDD", "Customer"))));

        SpyOrderService target(mockBookDao);
        ON_CALL(target, getOrders()).WillByDefault(Return(list<order>{
                order("Book", 100, "TDD", "Customer"),
                order("Food", 20, "Apple", "Customer")
        }));

        target.syncBookOrders();
    }

}

