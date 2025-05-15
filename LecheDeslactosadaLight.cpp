#include "LecheDeslactosadaLight.hpp"

LecheDeslactosadaLight::LecheDeslactosadaLight(std::unique_ptr<Coffe> c) : coffe(std::move(c)) {}

std::string LecheDeslactosadaLight::getDescription() const
{
    return coffe->getDescription() + ", Skim Light Milk";
}

double LecheDeslactosadaLight::cost() const
{
    return coffe->cost() + 0.2;
}