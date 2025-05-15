#include "LecheEntera.hpp"

LecheEntera::LecheEntera(std::unique_ptr<Coffe> c) : coffe(std::move(c)) {}

std::string LecheEntera::getDescription() const
{
    return coffe->getDescription() + ", Whole Milk";
}

double LecheEntera::cost() const
{
    return coffe->cost() + 0.2;
}