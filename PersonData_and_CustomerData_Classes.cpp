#include <iostream>
#include <string>
using namespace std;

class PersonData {
private:
    string lastName;
    string firstName;
    string address;
    string city;
    string state;
    string zip;
    string phone;

public:
    // Accessor functions for PersonData
    string getLastName() const { return lastName; }
    string getFirstName() const { return firstName; }
    string getAddress() const { return address; }
    string getCity() const { return city; }
    string getState() const { return state; }
    string getZip() const { return zip; }
    string getPhone() const { return phone; }

    // Mutator functions for PersonData
    void setLastName(const std::string& last) { lastName = last; }
    void setFirstName(const std::string& first) { firstName = first; }
    void setAddress(const std::string& addr) { address = addr; }
    void setCity(const std::string& c) { city = c; }
    void setState(const std::string& s) { state = s; }
    void setZip(const std::string& z) { zip = z; }
    void setPhone(const std::string& p) { phone = p; }
};

class CustomerData : public PersonData {
private:
    int customerNumber;
    bool mailingList;

public:
    // Accessor functions for CustomerData
    int getCustomerNumber() const { return customerNumber; }
    bool getMailingList() const { return mailingList; }

    // Mutator functions for CustomerData
    void setCustomerNumber(int num) { customerNumber = num; }
    void setMailingList(bool subscribe) { mailingList = subscribe; }
};

int main() {
    CustomerData customer;

    // Set personal information using mutator functions
    customer.setLastName("Smith");
    customer.setFirstName("John");
    customer.setAddress("123 Main St");
    customer.setCity("Anytown");
    customer.setState("CA");
    customer.setZip("12345");
    customer.setPhone("555-555-5555");

    // Set customer-specific information using mutator functions
    customer.setCustomerNumber(1001);
    customer.setMailingList(true);

    // Display the customer's information using accessor functions
    


    cout << "Customer Information:" << std::endl;
    cout << "Name: " << customer.getFirstName() << " " << customer.getLastName() << std::endl;
    cout << "Address: " << customer.getAddress() << ", " << customer.getCity() << ", " << customer.getState() << " " << customer.getZip() << std::endl;
    cout << "Phone: " << customer.getPhone() << std::endl;
    cout << "Customer Number: " << customer.getCustomerNumber() << std::endl;
    cout << "Mailing List: " << (customer.getMailingList() ? "Subscribed" : "Not Subscribed") << std::endl;

    return 0;
}
