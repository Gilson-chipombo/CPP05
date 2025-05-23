#include <iostream>
#include <exception>
#include <string>

class Bureaucrat{
    private:
        const std::string name;
        int grade;
    public:
        class GradeTooHighException : public std::exception
        {
            public:
                const char* what() const throw();
        };

        class GradeTooLowException : public std::exception
        {
            public:
                const char* what() const throw();
        };
        Bureaucrat(const std::string& name_, int grade_);
        int getGrade() const;
        void setGrade(int grade_);
        
        void tooHighException();
        void tooLowException();
        
        const std::string& getName() const;

        void increment();
        void decrement();
};
std::ostream& operator<<(std::ostream& os, const Bureaucrat& b);