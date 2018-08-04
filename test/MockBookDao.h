#ifndef CPP_ISOLATED_BY_INHERITANCE_AND_OVERRIDE_MOCKBOOKDAO_H
#define CPP_ISOLATED_BY_INHERITANCE_AND_OVERRIDE_MOCKBOOKDAO_H

#include "../main/BookDao.h"
#include "gmock/gmock.h"

class MockBookDao : public BookDao {

public:
    MOCK_METHOD1(insert, void(order));

};

#endif //CPP_ISOLATED_BY_INHERITANCE_AND_OVERRIDE_MOCKBOOKDAO_H
