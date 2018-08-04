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

class DummyBookDao : public BookDao {
public:
    void insert(order order) override {
        std::cout << "do nothing dao" << std::endl;
    }
};
namespace {

    TEST(OrderServiceTest, BookOrder) {
        MockBookDao mockBookDao;
        EXPECT_CALL(mockBookDao, insert(_));
//        DummyBookDao dummyBookDao;
        SpyOrderService target(mockBookDao);
        EXPECT_CALL(target, getOrders()).WillOnce(Return(list<order>{
                order("Book", 100, "TDD", "Customer"),
                order("Food", 20, "Apple", "Customer")
        }));
//        mockBookDao.insert(order("Book", 100, "TDD", "Customer"));
//        EXPECT_CALL(target, getBookDao()).WillOnce(ReturnRef(dummyBookDao));
//        EXPECT_CALL(target, syncBookOrders()).WillOnce(Invoke(&target, &SpyOrderService::realSyncBookOrders));
//
        target.syncBookOrders();
    }

}

