#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Person {
private:
    string name;
    int age;
    string address;

public:
    Person(string n, int a, string addr) : name(n), age(a), address(addr) {}

    string getName() const { return name; }
    int getAge() const { return age; }
    string getAddress() const { return address; }

    void setName(const string& n) { name = n; }
    void setAge(int a) { age = a; }
    void setAddress(const string& addr) { address = addr; }

    void display() const {
        cout << "Name: " << name << ", Age: " << age << ", Address: " << address << endl;
    }
};

int main() {
    int N;
    cout << "Enter the number of persons: ";
    cin >> N;

    vector<Person> persons;

    for (int i = 0; i < N; i++) {
        string name, address;
        int age;

        cout << "\nEnter details for Person " << i + 1 << ":" << endl;
        cout << "Name: ";
        cin.ignore(); 
        getline(cin, name);
        cout << "Age: ";
        cin >> age;
        cin.ignore(); 
        cout << "Address: ";
        getline(cin, address);

        persons.emplace_back(name, age, address);
    }

    cout << "\nDetails of Persons:\n";
    for (int i = 0; i < persons.size(); i++) {
        cout << "Person " << i + 1 << ":" << endl;
        persons[i].display();
        cout << endl;
    }

    return 0;
}
