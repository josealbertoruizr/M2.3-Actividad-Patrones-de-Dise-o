#ifndef LECHEDESLACTOSADALIGHT_HPP
#define LECHEDESLACTOSADALIGHT_HPP

#include "CondimentDecorator.hpp"
#include <memory>

class LecheDeslactosadaLight : public CondimentDecorator
{
public:
    explicit LecheDeslactosadaLight(std::unique_ptr<Coffe> coffe);
    ~LecheDeslactosadaLight() override = default;

    std::string getDescription() const override;
    double cost() const override;

private:
    std::unique_ptr<Coffe> coffe;
};

#endif // LECHEDESLACTOSADALIGHT_HPP
