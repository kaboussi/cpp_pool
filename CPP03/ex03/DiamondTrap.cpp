//
// Created by redone on 6/12/23.
//

#include "DiamondTrap.hpp"


DiamondTrap::DiamondTrap(const std::string name)
        : ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name), diamondName(name) {
    std::cout << "DiamondTrap constructor called. Name: " << diamondName << std::endl;
    hitPoints = FragTrap::HitPoints;
    energyPoints = ScavTrap::EnergyPoints;
    attackDamage = FragTrap::AttackDamage;

    std::cout << "FragTrap " << FragTrap::name << std::endl;
    std::cout << "hitPoints: " << FragTrap::hitPoints << std::endl;
    std::cout << "energyPoints: " << FragTrap::energyPoints << std::endl;
    std::cout << "attackDamage: " << FragTrap::attackDamage << std::endl;
}

DiamondTrap::~DiamondTrap() {
    std::cout << "DiamondTrap destructor called. Name: " << diamondName << std::endl;
}

void DiamondTrap::whoAmI() {
    std::cout << "I am DiamondTrap " << diamondName << ", also known as ClapTrap " << ClapTrap::name << "!"
              << std::endl;
}

void DiamondTrap::attack(const std::string &target) {
    ScavTrap::attack(target);
}
