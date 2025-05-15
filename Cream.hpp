#ifndef CREAM_HPP
#define CREAM_HPP

#include "CondimentDecorator.hpp"
#include <memory>

class Cream : public CondimentDecorator
{
public:
    explicit Cream(std::unique_ptr<Coffe> coffe);
    ~Cream() override = default;

    std::string getDescription() const override;
    double cost() const override;

private:
    std::unique_ptr<Coffe> coffe;
};

#endif // CREAM_HPP