// Generated by dia2code
#ifndef ENGINE__COMMAND__H
#define ENGINE__COMMAND__H

#include <state/Element.h>
#include <vector>
#include <state/State.h>

namespace state {
  class Element;
  class State;
};
namespace engine {
  class Engine;
}

#include "state/Element.h"
#include "state/State.h"
#include "Engine.h"

namespace engine {

  /// class Command - 
  class Command {
    // Associations
    // Attributes
  public:
    std::vector<state::Element> listElementChecked;
  protected:
    int Id;
    int character;
    int direction;
    int attaquant;
    int victime;
    // Operations
  public:
    Command ();
    ~Command ();
    void execute (state::State& state);
    void undo (state::State& state);
    // Setters and Getters
    int getId() const;
    void setId(int Id);
    int getCharacter() const;
    void setCharacter(int character);
    int getDirection() const;
    void setDirection(int direction);
    int getAttaquant() const;
    void setAttaquant(int attaquant);
    int getVictime() const;
    void setVictime(int victime);
  };

};

#endif
