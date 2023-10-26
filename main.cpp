#include <iostream>

struct MobilePhone {
    double weight;
    bool is_broken;
    double price;
};

int main () {
    int count;
    std::cin >> count;
    MobilePhone *mobilki = new MobilePhone[count];

    if (count == 0) {std::cout << "<MobilePhones>" << std::endl; std::cout << "</MobilePhones>" << std::endl;}

    else {
        for (int i = 0; i < count; i++) {
            std::cin >> mobilki[i].weight >> mobilki[i].is_broken >> mobilki[i].price;
        }
        
        std::cout << "<MobilePhones>" << std::endl;

        for (int i = 0; i < count; i++) {
            std::cout << "\t<MobilePhone id=\"" << i << "\" weight=\"" << mobilki[i].weight << "\" is_broken=\"" 
                    << std::boolalpha << mobilki[i].is_broken << "\" price=\"" << mobilki[i].price << "\"/>" << std::endl;
        }

        std::cout << "</MobilePhones>" << std::endl;
    }

    return 0;

}
