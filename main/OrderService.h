#ifndef CPP_ISOLATED_BY_INHERITANCE_AND_OVERRIDE_ORDERSERVICE_H
#define CPP_ISOLATED_BY_INHERITANCE_AND_OVERRIDE_ORDERSERVICE_H

#include <string>
#include <list>
#include "Order.h"
#include "BookDao.h"

using namespace std;

class OrderService {

public:
    void syncBookOrders();

protected:
    virtual list<order> getOrders();
    virtual BookDao& getBookDao();

private:
    string filePath = "C:\\temp\\testOrders.csv";
    order mapping(vector<string> columns);
};

#endif //CPP_ISOLATED_BY_INHERITANCE_AND_OVERRIDE_ORDERSERVICE_H
