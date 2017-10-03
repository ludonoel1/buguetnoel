// Generated by dia2code
#ifndef STATE__QG__H
#define STATE__QG__H


namespace state {
  class Building;
}

#include "Building.h"

namespace state {

  /// class QG - 
  class QG : public state::Building {
    // Attributes
  protected:
    int m_LP     = 0;
    // Operations
  public:
    QG ();
    ~QG ();
    int setLife ();
    int getLife ();
    TypeId const getTypeId ();
    // Setters and Getters
    int getM_LP() const;
    void setM_LP(int m_LP);
  };

};

#endif