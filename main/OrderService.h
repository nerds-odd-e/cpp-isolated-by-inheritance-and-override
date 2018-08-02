#ifndef CPP_ISOLATED_BY_INHERITANCE_AND_OVERRIDE_ORDERSERVICE_H
#define CPP_ISOLATED_BY_INHERITANCE_AND_OVERRIDE_ORDERSERVICE_H

#include <string>
#include <list>
#include "Order.h"

using namespace std;

class OrderService {

public:
    void syncBookOrders();

private:
    string filePath = "C:\\temp\\testOrders.csv";
    list<order> getOrders();
    order mapping(vector<string> columns);
};

#endif //CPP_ISOLATED_BY_INHERITANCE_AND_OVERRIDE_ORDERSERVICE_H
