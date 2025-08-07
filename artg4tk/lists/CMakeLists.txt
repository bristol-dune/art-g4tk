cet_make_library(SOURCE
  ArCaptureGammas.cc
  ArParticleHPCapture.cc
  ArParticleHPCaptureFS.cc
  G4EmStandardPhysics_pseudoLaser.cc
  MyG4BiasedBertiniNeutronBuilder.cc
  MyG4DecayPhysics.cc
  MyG4HadronPhysicsQGSP_BERT_ArHP.cc
  MyG4HadronPhysicsQGSP_BERT_HP_NeutronXSBias.cc
  MyG4MuIonisationNoDelta.cc
  MyG4NeutronPHPBuilder.cc
  MyQGSP_BERT_ArHP.cc
  MyQGSP_BERT_HP_NeutronXSBias.cc
  MyQGSP_BERT_LASER.cc
  G4BetheBlochModel_MCP.cc
  G4MCPIonisation.cc
  G4EmParticleList_MCP.cc
  G4EmStandardPhysics_MCP.cc
  MyQGSP_BERT_MCP.cc
  LIBRARIES PUBLIC
  Geant4::G4physicslists
  artg4tk_particles
)

install_headers()
install_source()

