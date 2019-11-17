//
// Created by thekatze on 17/11/2019.
//

#ifndef ENGINITO_C_TRANSFORM_H
#define ENGINITO_C_TRANSFORM_H

#include <components/Component.h>
#include <types/Vector.h>

class C_Transform : public Component {
public:
    // TODO: rotation, scale
    Vector2f m_location;

    C_Transform(Vector2f location)
        : m_location(location) {}
};

#endif //ENGINITO_C_TRANSFORM_H
