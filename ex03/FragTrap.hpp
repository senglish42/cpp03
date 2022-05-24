/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: senglish <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 21:14:00 by senglish          #+#    #+#             */
/*   Updated: 2022/05/10 21:14:00 by senglish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {
    public:
        explicit FragTrap(const std::string &name);
        FragTrap( const FragTrap &copy);
        FragTrap &operator=(const FragTrap &fragTrap);
        virtual ~FragTrap();
        virtual std::string getName() const;
        virtual void        highFivesGuys();
        virtual void        getRound();
        virtual int         getDamage();
        virtual int         getHit();
        virtual int         getEnergy();
        virtual void        noEnergy();
        virtual void        noHit();
        virtual void        keepFighting();
        virtual void        takeDamage(unsigned int amount);
        virtual void        beRepaired(unsigned int amount);
        virtual void        attack(const std::string& target);
    protected:
        std::string _name;
        int         _hit;
        int         _energy;
        int         _damage;
        FragTrap();
};

#endif