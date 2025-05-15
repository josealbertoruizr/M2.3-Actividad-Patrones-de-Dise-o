#ifndef LECHEENTERA_HPP
#define LECHEENTERA_HPP

#include "CondimentDecorator.hpp"
#include <memory>

class LecheEntera : public CondimentDecorator
{
public:
    explicit LecheEntera(std::unique_ptr<Coffe> coffe);
    ~LecheEntera() override = default;

    std::string getDescription() const override;
    double cost() const override;

private:
    std::unique_ptr<Coffe> coffe;
};

#endif // LECHEENTERA_HPP