/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccottin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 05:07:35 by ccottin           #+#    #+#             */
/*   Updated: 2022/10/11 05:07:37 by ccottin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <string>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {

	public :
	
	ScavTrap(void);
	ScavTrap(std::string name);
	ScavTrap(ScavTrap const & c);
	ScavTrap &operator=(ScavTrap const & c);
	~ScavTrap(void);
	
	void	guardGate(void);
	void	attack(const std::string & target);
	
	protected :

	int	_gate;

	private :
	
};

#endif
