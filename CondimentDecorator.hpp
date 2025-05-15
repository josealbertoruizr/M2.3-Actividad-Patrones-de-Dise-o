
#ifndef COFFE_HPP
#define COFFE_HPP

#include "Coffe.hpp"

class CondimentDecorator : public Coffe
{
public:
    virtual string getDescription() const override = 0;
    ~CondimentDecorator() override = default;
};

#endif