// Coffee.hpp
#ifndef COFFEE_HPP
#define COFFEE_HPP

#include <string>
using namespace std;

// Clase abstracta que actúa como "interfaz"
class Coffe
{
protected:
    string description = "Unknown Coffee";
    double coffeCost = 0.0;

public:
    // Método virtual puro: obliga a las subclases a implementarlo
    Coffe() : description("Unknown Coffee") {}

    virtual double cost() const = 0;

    virtual string getDescription() const
    {
        return description;
    }

    // Siempre conviene un destructor virtual en clases base polimórficas
    virtual ~Coffe() = default;
};

#endif // COFFEE_HPP