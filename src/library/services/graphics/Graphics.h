//
// Created by thekatze on 25/12/2018.
//

#ifndef ENGINITO_GRAPHICS_H
#define ENGINITO_GRAPHICS_H

#include <memory>
#include "font/FreeType.h"
#include "../../resources/ResourceManager.h"
#include "../../types/Color.h"
#include "Shader.h"
#include "Sprite.h"
#include "../../resources/Texture.h"
#include "Camera.h"
#include "NullShader.h"

class Graphics {
protected:
    ResourceManager<Texture> m_textures;

    std::shared_ptr<Camera> m_camera;

    std::shared_ptr<Shader> m_currentShader;

    FreeType m_freeType;
public:
    Graphics() = default;
    virtual ~Graphics() = default;

    virtual void clear() = 0;
    virtual void setClearColor(Color color) = 0;

    virtual void initialize(int windowWidth, int windowHeight) = 0;

    virtual void setViewport(int width, int height) = 0;

    virtual std::shared_ptr<Texture> loadTexture(const std::string& filePath) = 0;

    virtual void useTexture(std::shared_ptr<Texture> texture) = 0;

    //TODO: Maybe make a standalone shaderfactory?
    virtual std::shared_ptr<Shader> createShader() = 0;
    virtual std::shared_ptr<Sprite> createSprite(Vector2f location, Vector2f dimensions) = 0;

    std::shared_ptr<Camera> getCamera() { return m_camera; }

    std::shared_ptr<Shader> getCurrentShader() { return m_currentShader; }

    virtual void bindShader(const std::shared_ptr<Shader> shader) {
        if (m_currentShader)
            m_currentShader->unbind();

        m_currentShader = shader;
        shader->bind();
    }

    virtual void drawText(const std::string& text, Vector2f location) = 0;

    virtual void drawToRect(Vector2f location, Vector2f dimensions) = 0;
};

#endif //ENGINITO_GRAPHICS_H
