#ifndef LECHEDESLACTOSADA_HPP
#define LECHEDESLACTOSADA_HPP

#include "CondimentDecorator.hpp"
#include <memory>

class LecheDeslactosada : public CondimentDecorator
{
public:
    explicit LecheDeslactosada(std::unique_ptr<Coffe> coffe);
    ~LecheDeslactosada() override = default;

    std::string getDescription() const override;
    double cost() const override;

private:
    std::unique_ptr<Coffe> coffe;
};

#endif // LECHEDESLACTOSADA_HPP