#include "Bureaucrat.hpp"

int main()
{
    try{
        Bureaucrat b("Gilson", 5);
        b.increment();
        b.increment();
        std::cout << b << std::endl;
    }
    catch(std::exception & e){
        std::cout << e.what() << std::endl;
    }
    return (0);
}
