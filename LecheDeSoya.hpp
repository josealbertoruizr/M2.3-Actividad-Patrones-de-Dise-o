#ifndef LECHEDESOYA_HPP
#define LECHEDESOYA_HPP

#include "CondimentDecorator.hpp"
#include <memory>

class LecheDeSoya : public CondimentDecorator
{
public:
    explicit LecheDeSoya(std::unique_ptr<Coffe> coffe);
    ~LecheDeSoya() override = default;

    std::string getDescription() const override;
    double cost() const override;

private:
    std::unique_ptr<Coffe> coffe;
};

#endif // LECHEDESOYA_HPP