// Generated by dia2code
#ifndef STATE__MINION__H
#define STATE__MINION__H


namespace state {
  class MobileElement;
}

#include "MobileElement.h"
#include "MinionStatus.h"

namespace state {

  /// class Minion - 
  class Minion : public state::MobileElement {
    // Associations
    state::MinionStatus status;
    // Attributes
  public:
     ;
    // Operations
  public:
    Minion ();
    ~Minion ();
    TypeId const getTypeId ();
    bool const isHero ();
    // Setters and Getters
    MinionStatus getStatus() const;
    void setStatus(MinionStatus status);
  };

};

#endif