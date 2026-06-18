#include <iostream>

class Employee {
    public:
        std::string name;
        int years;
};

std::ostream& operator<<(std::ostream& out, const Employee& emp) {
    out << emp.name << " " << emp.years;
    return out;
}

std::istream& operator>>(std::istream& in, Employee& emp) {
    in >> emp.name >> emp.years;
    return in;
}

int main() {
    Employee emp;
    std::cout << "Enter input: ";
    std::cin >> emp;
    std::cout << emp;

    return 0;
}