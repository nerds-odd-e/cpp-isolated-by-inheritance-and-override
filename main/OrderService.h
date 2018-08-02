#ifndef CPP_ISOLATED_BY_INHERITANCE_AND_OVERRIDE_ORDERSERVICE_H
#define CPP_ISOLATED_BY_INHERITANCE_AND_OVERRIDE_ORDERSERVICE_H

#include <string>
#include <list>

using namespace std;

class OrderService {

public:
    void syncBookOrders();
    struct order {
        string type;
        int price;
        string productName;
        string customerName;

        order(string type, int price, string productName, string customerName) : type(type), price(price), productName(productName), customerName(customerName) {}
    };

private:
    string filePath = "C:\\temp\\testOrders.csv";
    list<order> getOrders();
    order mapping(vector<string> columns);
};

#endif //CPP_ISOLATED_BY_INHERITANCE_AND_OVERRIDE_ORDERSERVICE_H
