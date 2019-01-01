//
// Created by thekatze on 24/12/2018.
//

#ifndef GENERIC_LIBRARY_NULLWINDOW_H
#define GENERIC_LIBRARY_NULLWINDOW_H

#include "Window.h"

class NullWindow : public Window {
public:
    NullWindow() = default;
    ~NullWindow() = default;

    virtual void initialize(unsigned int width, unsigned int height, const std::string& windowTitle) override {}

    virtual void swapBuffers() override {}
    virtual void pollEvents() override {}

    virtual bool windowShouldClose() override {}
};

#endif //GENERIC_LIBRARY_NULLWINDOW_H
