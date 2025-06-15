/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbravo-f <gbravo-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 18:31:10 by gbravo-f          #+#    #+#             */
/*   Updated: 2025/06/07 18:31:11 by gbravo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>
#include <string>
#include "Form.hpp"

class Form;
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
        void signForm(Form& form) const;
};
std::ostream& operator<<(std::ostream& os, const Bureaucrat& b);

#endif