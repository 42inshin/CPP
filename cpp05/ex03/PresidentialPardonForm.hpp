/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inshin <inshin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 01:02:58 by inshin            #+#    #+#             */
/*   Updated: 2022/02/09 02:09:09 by inshin           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */


#ifndef __PRESIDENTIALPARDONFORM_H__
#define __PRESIDENTIALPARDONFORM_H__

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
private:
	PresidentialPardonForm();

public:
	void execute(Bureaucrat const & executor) const;

	PresidentialPardonForm(const std::string target);
	PresidentialPardonForm(const PresidentialPardonForm& copy);
	PresidentialPardonForm& operator=(const PresidentialPardonForm& copy);
	~PresidentialPardonForm();
};

#endif
