//
// Created by thekatze on 10/02/2019.
//

#ifndef ENGINITO_OPENGLSPRITE_H
#define ENGINITO_OPENGLSPRITE_H

#include "../Sprite.h"

#include <GL/glew.h>

class OpenGLSprite : Sprite {
    const unsigned int VERTEX_AMOUNT = 4;
    GLuint m_vertexArrayObject, m_vertexBufferObject;
public:
    ~OpenGLSprite() override = default;

    void setTexture(Texture texture) override;
    void draw() override;
};


#endif //ENGINITO_OPENGLSPRITE_H