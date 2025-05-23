#include <string>
#include "Bureaucrat"

class Form{
    private:
        const std::string name;
        bool iaSigned;
        const int grade_to_sign;
        const int grade_to_execute;
    public:
        class  GradeTooHighException : public std::exception{
            const char * what() const throw();
        }
        class GradeTooLowException : public std::exception{
            const char * what() const throw();
        }
        void beSigned(const Bureaucrat& bureaucrat);

};