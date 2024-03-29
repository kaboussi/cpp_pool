//
// Created by redone on 6/11/23.
//

#ifndef POOL_CLAPTRAP_HPP
#define POOL_CLAPTRAP_HPP

#include <iostream>
#include <string>

typedef unsigned int uint;

class ClapTrap {
protected:
    const std::string name;
    uint hitPoints;
    uint energyPoints;
    uint attackDamage;

public:
    explicit ClapTrap(const std::string name);

    ~ClapTrap();

    virtual void attack(const std::string &target);

    void takeDamage(uint amount);

    void beRepaired(uint amount);
};


#endif //POOL_CLAPTRAP_HPP
