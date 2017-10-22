// Generated by dia2code
#ifndef RENDER__VIEW__H
#define RENDER__VIEW__H

#include <SFML/Graphics.hpp>
#include <vector>
#include <SFML/Graphics.hpp>

namespace render {

  /// class View - 
  class View {
    // Attributes
  public:
    sf::View view;
    int type;
    std::vector<sf::Sprite> list_sprite;
    std::vector<render::Textures> list_texture;
    // Operations
  public:
    View (int view);
    ~View ();
    void init (const state::State& state);
    void draw (sf::RenderWindow& window);
    void add_Sprite (sf::Sprite sprite);
    // Setters and Getters
  };

};

#endif
