# set example files
SET(EXAMPLE_SRC main.cpp ExampleScene.h C_PlayerController.h C_TileMapRenderable.h C_TileMap.h Tile.h TileMapLoader.cpp TileMapLoader.h C_Collidable.h EmptyScene.h)

# add to executable
ADD_EXECUTABLE(shvrd_example ${EXAMPLE_SRC})

# add the libs and includes
TARGET_LINK_LIBRARIES(shvrd_example shvrd_library)
TARGET_INCLUDE_DIRECTORIES(shvrd_example PUBLIC ../library)
