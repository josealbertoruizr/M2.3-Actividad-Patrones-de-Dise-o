#ifndef MOCHA_HPP
#define MOCHA_HPP

#include "CondimentDecorator.hpp"
#include <memory>

class Mocha : public CondimentDecorator
{
public:
    explicit Mocha(std::unique_ptr<Beverage> beverage);
    ~Mocha() override = default;

    std::string getDescription() const override;
    double cost() const override;

private:
    std::unique_ptr<Beverage> beverage;
};

#endif // MOCHA_HPP
