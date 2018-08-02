#ifndef CPP_ISOLATED_BY_INHERITANCE_AND_OVERRIDE_ORDER_H
#define CPP_ISOLATED_BY_INHERITANCE_AND_OVERRIDE_ORDER_H

#include <string>

using namespace std;

struct order {
    string type;
    int price;
    string productName;
    string customerName;

    order(string type, int price, string productName, string customerName) : type(type), price(price), productName(productName), customerName(customerName) {}
};

#endif //CPP_ISOLATED_BY_INHERITANCE_AND_OVERRIDE_ORDER_H
