#ifndef DECAF_HPP
#define DECAF_HPP

#include "Coffe.hpp"

class Decaf : public Coffe
{
public:
    Decaf();
    ~Decaf() override = default;
    double cost() const override;
};

#endif // DECAF_HPP