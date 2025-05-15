#include "Mocha.hpp"

Mocha::Mocha(std::unique_ptr<Coffe> c) : coffe(std::move(c)) {}

std::string Mocha::getDescription() const
{
    return coffe->getDescription() + ", Mocha";
}

double Mocha::cost() const
{
    return coffe->cost() + 0.5;
}