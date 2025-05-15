#include "Cream.hpp"

Cream::Cream(std::unique_ptr<Coffe> c) : coffe(std::move(c)) {}

std::string Cream::getDescription() const
{
    return coffe->getDescription() + ", Cream";
}

double Cream::cost() const
{
    return coffe->cost() + 0.5;
}