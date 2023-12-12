#pragma once

#include "src/Common.hpp"

#include <SFML/Graphics/RectangleShape.hpp>
#include <SFML/Graphics/RenderWindow.hpp>

#include <array>

class Kattam
{
public:
    Kattam();
    ~Kattam() {}

    void draw(sf::RenderWindow& window);
private:
    std::array<sf::RectangleShape, RasiCount> mRasiKattam;
};
