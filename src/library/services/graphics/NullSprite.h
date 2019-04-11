//
// Created by thekatze on 17/02/19.
//

#ifndef ENGINITO_NULLSPRITE_H
#define ENGINITO_NULLSPRITE_H

#include "Sprite.h"

class NullSprite : public Sprite {
public:
    NullSprite(const Vector2& location, const Vector2& dimensions) : Sprite(location, dimensions) {}
    ~NullSprite() override = default;

    void setTexture(const Texture& texture) override {}
    void draw() override {}

    void translate(const Vector2& translation) override {}
};

#endif //ENGINITO_NULLSPRITE_H
