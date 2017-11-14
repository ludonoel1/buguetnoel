// Generated by dia2code
#ifndef AI__AI__H
#define AI__AI__H

#include <vector>
#include <state/State.h>

namespace engine {
  class Command;
  class Engine;
};
namespace state {
  class State;
}

#include "engine/Command.h"

namespace ai {

  /// class Ai - 
  class Ai {
    // Attributes
  public:
    int Id;
    int Team;
    std::vector<int> listElementChecked;
    std::vector<engine::Command> list_att;
    std::vector<engine::Command> list_mov;
    // Operations
  public:
    void play (engine::Engine& engine, int character, state::State& state);
    Ai ();
    ~Ai ();
    void init ( );
    // Setters and Getters
  };

};

#endif
