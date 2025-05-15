#ifndef HOUSEBLEND_HPP
#define HOUSEBLEND_HPP

#include "Coffe.hpp"

class HouseBlend : public Coffe
{
public:
    HouseBlend();
    ~HouseBlend() override = default;
    double cost() const override;
};

#endif // HOUSEBLEND_HPP