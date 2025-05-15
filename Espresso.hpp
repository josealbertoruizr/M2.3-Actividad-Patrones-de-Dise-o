#ifndef ESPRESSO_HPP
#define ESPRESSO_HPP

#include "Coffe.hpp"

class Espresso : public Coffe
{
public:
    Espresso();
    ~Espresso() override = default;
    double cost() const override;
};

#endif // ESPRESSO_HPP
