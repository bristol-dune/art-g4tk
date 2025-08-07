#ifndef G4MCPPlus_h
#define G4MCPPlus_h 1

#include "globals.hh"
#include "G4ios.hh"
#include "G4ParticleDefinition.hh"

// ######################################################################
// ###                         MCP PLUS                               ###
// ######################################################################

class G4MCPPlus : public G4ParticleDefinition
{
private:
  static G4MCPPlus* theInstance;
  G4MCPPlus(){}
  ~G4MCPPlus(){}

public:

  static G4double mass;
  static G4double width;
  static G4double charge;
  static G4double lifetime;

  static G4MCPPlus* Definition();
  static G4MCPPlus* MCPPlusDefinition();
  static G4MCPPlus* MCPPlus();
};

#endif
