#include "G4MCPPlus.hh"
#include "G4PhysicalConstants.hh"
#include "G4SystemOfUnits.hh"
#include "G4ParticleTable.hh"

#include "G4MuonDecayChannel.hh"
#include "G4DecayTable.hh"

// ######################################################################
// ###                          MCP PLUS                              ###
// ######################################################################

G4double G4MCPPlus::mass     = 1.;
G4double G4MCPPlus::width    = 1.;
G4double G4MCPPlus::charge   = 0.1;
G4double G4MCPPlus::lifetime = 10000.;

G4MCPPlus* G4MCPPlus::theInstance = 0;

G4MCPPlus* G4MCPPlus::Definition()
{
  if (theInstance !=0) return theInstance;
  const G4String name = "MCP+";

  // search in particle table]
  G4ParticleTable* pTable = G4ParticleTable::GetParticleTable();
  G4ParticleDefinition* anInstance = pTable->FindParticle(name);
  if (anInstance ==0)
    {
      std::cout << "Creating " << name << std::endl;
      // create particle
      //
      //    Arguments for constructor are as follows
      //               name             mass          width         charge
      //             2*spin           parity  C-conjugation
      //          2*Isospin       2*Isospin3       G-parity
      //               type    lepton number  baryon number   PDG encoding
      //             stable         lifetime    decay table
      //             shortlived      subType    anti_encoding

      anInstance = new G4ParticleDefinition(
					    name, mass*GeV, width*MeV, charge*eplus, 
					    1,        0,        0,          
					    0,        0,        0,             
					    "lepton", -1,       0,     9900013,
					    true,     lifetime*ns,     NULL,
					    false,    "mu"
					    );
      // Bohr Magnetron
      G4double muB =  0.5*eplus*hbar_Planck/(anInstance->GetPDGMass()/c_squared) ;
   
      anInstance->SetPDGMagneticMoment( muB * 1.0011659209);

    }

  theInstance = reinterpret_cast<G4MCPPlus*>(anInstance);
  std::cout << "Returning " << theInstance << std::endl;
  return theInstance;
}

G4MCPPlus*  G4MCPPlus::MCPPlusDefinition()
{
  return Definition();
}

G4MCPPlus*  G4MCPPlus::MCPPlus()
{
  return Definition();
}
