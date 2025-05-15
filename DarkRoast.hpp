#ifndef DARKROAST_HPP
#define DARKROAST_HPP

#include "Coffe.hpp"

class DarkRoast : public Coffe
{
public:
    DarkRoast();
    ~DarkRoast() override = default;
    double cost() const override;
};

#endif // DARKROAST_HPP