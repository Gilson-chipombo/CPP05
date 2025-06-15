/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbravo-f <gbravo-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 18:31:17 by gbravo-f          #+#    #+#             */
/*   Updated: 2025/06/07 18:36:29 by gbravo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP
#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;
class Form{
    private:
        const std::string name;
        bool isSigned;
        const int grade_to_sign;
        const int grade_to_execute;
    public:
        Form(const std::string& name, int gradeToSigin, int gradeToexecute);
        Form& operator=(const Form& other);
        //Form(const Form& other);
        ~Form();
        const std::string& getName() const;
        bool getIsSigned() const;
        int getGradeTosign() const;
        int getGradeToExecute() const;
        class  GradeTooHighException : public std::exception{
            const char * what() const throw();
        };
        class GradeTooLowException : public std::exception{
            const char * what() const throw();
        };
        void beSigned(const Bureaucrat& bureaucrat) = 0;
};
std::ostream& operator<<(std::ostream& os, const Form& form);

#endif