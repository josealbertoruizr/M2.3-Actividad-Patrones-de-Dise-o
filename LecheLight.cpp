#include "LecheDeslactosada.hpp"

LecheDeslactosada::LecheDeslactosada(std::unique_ptr<Coffe> c) : coffe(std::move(c)) {}

std::string LecheDeslactosada::getDescription() const
{
    return coffe->getDescription() + ", Light Milk";
}

double LecheDeslactosada::cost() const
{
    return coffe->cost() + 0.2;
}
