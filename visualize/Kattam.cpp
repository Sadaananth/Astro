#include "visualize/Kattam.hpp"

#include <SFML/Graphics/Color.hpp>

Kattam::Kattam()
{
    sf::Vector2f position{300, 200};
    const float width = 100;
    const float height = 100;
    auto index = 0;
    for(auto& rasiKattam : mRasiKattam) {
        rasiKattam.setFillColor(sf::Color::White);
        rasiKattam.setOutlineColor(sf::Color::Green);
        rasiKattam.setOutlineThickness(2);
        rasiKattam.setSize(sf::Vector2f(width, height));
        rasiKattam.setPosition(position);

        ++index;
        if(index <= 2) {
            position.x += width;
        } else if(index <= 5) {
            position.y += height;
        } else if(index <= 8) {
            position.x -= width;
        } else if(index <= 12) {
            position.y -= height;
        }
    }
}

void Kattam::draw(sf::RenderWindow& window)
{
    for(auto& rasiKattam : mRasiKattam) {
        window.draw(rasiKattam);
    }
}
