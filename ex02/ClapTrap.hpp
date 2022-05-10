/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: senglish <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 12:40:00 by senglish          #+#    #+#             */
/*   Updated: 2022/05/06 12:40:00 by senglish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <cstdlib>

class ClapTrap {
    public:
        ClapTrap(std::string name);
        ClapTrap( const ClapTrap &copy);
        ClapTrap operator=(const ClapTrap &clapTrap);
        ~ClapTrap( void );
        const std::string   getName( void );
        int                 getDamage( void );
        int                 getHit( void );
        int                 getEnergy( void );
        void                noEnergy(bool &flag);
        void                noHit(bool &flag);
        void                keepFighting( void );
        void                five_boost(const std::string fragTrap);
        void                attack(const std::string& target);
        void                takeDamage(unsigned int amount);
        void                beRepaired(unsigned int amount);
        void                getRound(const ClapTrap &clapTrap);
    protected:
        std::string         _name;
        int                 _hit;
        int                 _energy;
        int                 _damage;
        static int          _round;
        ClapTrap( void );
};

ClapTrap *clapTrap(std::string name);

#endif