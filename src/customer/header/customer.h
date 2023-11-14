#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <string>

class Customer {
 public:
  std::string name;
  std::string iD_number;

  static void addCustomer(const Customer &customer);
  static void deleteCustomer(const Customer &customer);
  static Customer findCustomerByName(const std::string &name);

};

#endif // CUSTOMER_H
