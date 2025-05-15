#ifndef LECHELIGHT_HPP
#define LECHELIGHT_HPP

#include "CondimentDecorator.hpp"
#include <memory>

class LecheLight : public CondimentDecorator
{
public:
    explicit LecheLight(std::unique_ptr<Coffe> coffe);
    ~LecheLight() override = default;

    std::string getDescription() const override;
    double cost() const override;

private:
    std::unique_ptr<Coffe> coffe;
};

#endif // LECHELIGHT_HPP