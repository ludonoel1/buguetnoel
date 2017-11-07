// Generated by dia2code
#ifndef RENDER__VIEW__H
#define RENDER__VIEW__H

#include <SFML/Graphics.hpp>
#include <vector>
#include <state/State.h>

namespace render {
  class Textures;
};
namespace state {
  class State;
};
namespace render {
  class Tiles;
}

#include "Textures.h"
#include "Tiles.h"

namespace render {

  /// class View - 
  class View {
    // Associations
    // Attributes
  public:
    sf::View view;
    int type;
    std::vector<sf::Sprite> list_sprite;
    std::vector<Textures> list_texture;
    // Operations
  public:
    View ();
    ~View ();
    void init (state::State& state_game);
    void draw (sf::RenderWindow& window);
    void add_Sprite (sf::Sprite sprite);
    // Setters and Getters
  };

};

#endif
