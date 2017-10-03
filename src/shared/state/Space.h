// Generated by dia2code
#ifndef STATE__SPACE__H
#define STATE__SPACE__H


namespace state {
  class StaticELement;
}

#include "SpaceTypeId.h"
#include "StaticELement.h"

namespace state {

  /// class Space - 
  class Space : public state::StaticELement {
    // Associations
    state::SpaceTypeId SpaceTypeId;
    // Operations
  public:
    Space (SpaceTypeId id);
    bool const isSpace ();
    TypeId const getTypeId ();
    SpaceTypeId const getSpaceTypeId ();
    void setSpaceTypeId (SpaceTypeId id);
    // Setters and Getters
  };

};

#endif