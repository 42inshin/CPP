/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inshin <inshin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 03:28:21 by inshin            #+#    #+#             */
/*   Updated: 2022/02/01 03:38:29 by inshin           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CURE_H__
#define __CURE_H__

class Cure : public AMateria
{
public:
	AMateria* clone() const;
};

#endif
