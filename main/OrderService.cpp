#include "OrderService.h"
#include "BookDao.h"
#include <list>
#include <iterator>
#include <sstream>
#include <fstream>
#include <vector>

void OrderService::syncBookOrders() {
    list<order> orders = getOrders();

    // only get orders of book
    list<order> ordersOfBook;
    copy_if(orders.begin(), orders.end(), back_inserter(ordersOfBook), [&](order o) {
        return o.type == "Book";
    });

    BookDao bookDao;
    for (order order : ordersOfBook) {
        bookDao.insert(order);
    }
}

list<order> OrderService::getOrders() {
    // parse csv file to get orders
    list<order> result;

    ifstream infile(filePath);
    string line;
    int rowCount = 0;
    while (getline(infile, line)) {
        rowCount++;

        // Skip CSV header line
        if (rowCount > 1) {
            vector<string> columns;
            istringstream f(line);
            string s;
            while (getline(f, s, ',')) {
                columns.push_back(s);
            }
            result.push_back(mapping(columns));
        }
    }

    return result;
}

order OrderService::mapping(vector<string> columns) {
    return order(columns[0], atoi(columns[2].c_str()), columns[1], columns[3]);
}

