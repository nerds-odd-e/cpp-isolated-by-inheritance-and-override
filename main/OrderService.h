#ifndef CPP_ISOLATED_BY_INHERITANCE_AND_OVERRIDE_ORDERSERVICE_H
#define CPP_ISOLATED_BY_INHERITANCE_AND_OVERRIDE_ORDERSERVICE_H

#include <string>
#include <list>
#include "Order.h"
#include "BookDao.h"
#include <iostream>

using namespace std;

class OrderService {

public:
    void syncBookOrders();

protected:
    virtual list<order> getOrders();
    virtual BookDao& getBookDao() = 0;

private:
    string filePath = "C:\\temp\\testOrders.csv";
    order mapping(vector<string> columns);
};

class ConcreteOrderService : public OrderService {
protected:
    BookDao& getBookDao() override {
        std::cout << "call real get book dao" << std::endl;
        return bookDao;
    }

private:
    BookDao bookDao;
};

#endif //CPP_ISOLATED_BY_INHERITANCE_AND_OVERRIDE_ORDERSERVICE_H
