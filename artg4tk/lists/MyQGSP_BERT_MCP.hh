#ifndef MyQGSP_BERT_MCP_h
#define MyQGSP_BERT_MCP_h 1

#include "Geant4/globals.hh"
#include "Geant4/G4VModularPhysicsList.hh"

class MyQGSP_BERT_MCP: public G4VModularPhysicsList
{
public:
  MyQGSP_BERT_MCP(G4int ver = 1);
  virtual ~MyQGSP_BERT_MCP()=default;

  MyQGSP_BERT_MCP(const MyQGSP_BERT_MCP &) = delete;
  MyQGSP_BERT_MCP & operator=(const MyQGSP_BERT_MCP &)=delete;
  
};

#endif
