//
// Created by thekatze on 17/11/2019.
//

#ifndef SHVRD_C_TILEMAP_H
#define SHVRD_C_TILEMAP_H

#include <memory>

#include <components/Component.h>
#include "Tile.h"

class C_TileMap : public Component {
    enum TileMap : unsigned int {
        NOTHING = 0, SOMETHING = 1
    };

    Tile tiles[2] = {
            {0, nullptr, false},
            {1, nullptr, false}
    };

    std::unique_ptr<Tile[]> m_tiles;
    unsigned int m_width, m_height;
public:
    C_TileMap(unsigned int width, unsigned int height)
        : m_tiles(std::make_unique<Tile[]>(width * height))
        , m_width(width)
        , m_height(height) {}

    const Tile& getTileAt(unsigned int x, unsigned int y) const {
        return m_tiles[x + m_width * y];
    }

    void setTileAt(unsigned int x, unsigned int y, const Tile& tile) {
        m_tiles[x + m_width * y] = tile;
    }

    void setTileAt(unsigned int x, unsigned int y, unsigned int paletteId) {
        m_tiles[x + m_width * y] = tiles[paletteId];
    }

    unsigned int getSize() const {
        return m_width * m_height;
    }

    unsigned int getWidth() const {
        return m_width;
    }

    unsigned int getHeight() const {
        return m_height;
    }

    // TODO:
    /*
      Tile& safelyGetTileAt(unsigned int x, unsigned int y) {
          return m_tiles[x + m_width * y];
    }
    */
};

#endif //SHVRD_C_TILEMAP_H
