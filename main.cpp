#include <iostream>
#include <memory>
#include "DarkRoast.hpp"
#include "Decaf.hpp"
#include "HouseBlend.hpp"
#include "Espresso.hpp"
#include "Mocha.hpp"
#include "Cream.hpp"
#include "LecheEntera.hpp"
#include "LecheDeslactosada.hpp"
#include "LecheLight.hpp"
#include "LecheDeslactosadaLight.hpp"
#include "LecheDeSoya.hpp"

int main()
{
    std::unique_ptr<Coffe> coffe1 = std::make_unique<DarkRoast>();
    coffe1 = std::make_unique<Cream>(std::move(coffe1));
    std::cout << coffe1->getDescription() << " $" << coffe1->cost() << std::endl;

    std::unique_ptr<Coffe> coffe2 = std::make_unique<Decaf>();
    coffe2 = std::make_unique<Mocha>(std::move(coffe2));
    coffe2 = std::make_unique<Cream>(std::move(coffe2));
    std::cout << coffe2->getDescription() << " $" << coffe2->cost() << std::endl;

    return 0;
}
