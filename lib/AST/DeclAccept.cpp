#include "soll/AST/Decl.h"
#include "soll/AST/DeclVisitor.h"

using namespace soll;

void SourceUnit::accept(DeclVisitor &visitor) { visitor.visit(*this); }
void SourceUnit::accept(ConstDeclVisitor &visitor) const {
  visitor.visit(*this);
}

void PragmaDirective::accept(DeclVisitor &visitor) { visitor.visit(*this); }
void PragmaDirective::accept(ConstDeclVisitor &visitor) const {
  visitor.visit(*this);
}

void ContractDecl::accept(DeclVisitor &visitor) { visitor.visit(*this); }
void ContractDecl::accept(ConstDeclVisitor &visitor) const {
  visitor.visit(*this);
}

void FunctionDecl::accept(DeclVisitor &visitor) { visitor.visit(*this); }
void FunctionDecl::accept(ConstDeclVisitor &visitor) const {
  visitor.visit(*this);
}

void VarDecl::accept(DeclVisitor &visitor) { visitor.visit(*this); }
void VarDecl::accept(ConstDeclVisitor &visitor) const { visitor.visit(*this); }
