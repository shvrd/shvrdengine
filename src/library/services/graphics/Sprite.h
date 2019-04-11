//
// Created by thekatze on 10/02/2019.
//

#ifndef ENGINITO_SPRITE_H
#define ENGINITO_SPRITE_H

#include "../../types/Texture.h"
#include "../../types/Vector.h"

class Sprite {
protected:
    Vector2 m_location;
    Vector2 m_dimensions;
public:
    Sprite(const Vector2& location, const Vector2& dimensions)
        : m_location(location)
        , m_dimensions(dimensions) {

    }

    virtual ~Sprite() = default;

    virtual void setLocation(const Vector2& location) {
        m_location = location;
    }

    virtual void setDimensions(const Vector2& dimensions) {
        m_dimensions = dimensions;
    }

    Vector2 getLocation() {
        return m_location;
    }

    Vector2 getDimensions() {
        return m_dimensions;
    }

    virtual void translate(const Vector2 &translation) = 0;

    virtual void setTexture(const Texture& texture) = 0;
    virtual void draw() = 0;

};

#endif //ENGINITO_SPRITE_H
