//===-- X86ATTInstPrinter.h - Convert X86 MCInst to assembly syntax -------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//
//
// This class prints an X86 MCInst to AT&T style .s file syntax.
//
//===----------------------------------------------------------------------===//

#ifndef X86_ATT_INST_PRINTER_H
#define X86_ATT_INST_PRINTER_H

#include "llvm/MC/MCInstPrinter.h"

namespace llvm {
  class MCOperand;
  
class X86ATTInstPrinter : public MCInstPrinter {
public:
  X86ATTInstPrinter(raw_ostream &O, const MCAsmInfo &MAI)
    : MCInstPrinter(O, MAI) {}

  
  virtual void printInst(const MCInst *MI);
  virtual StringRef getOpcodeName(unsigned Opcode) const;

  // Autogenerated by tblgen.
  void printInstruction(const MCInst *MI, raw_ostream &OS);
  static const char *getRegisterName(unsigned RegNo);
  static const char *getInstructionName(unsigned Opcode);

  void printOperand(const MCInst *MI, unsigned OpNo, raw_ostream &OS);
  void printMemReference(const MCInst *MI, unsigned Op, raw_ostream &OS);
  void printLeaMemReference(const MCInst *MI, unsigned Op, raw_ostream &OS);
  void printSSECC(const MCInst *MI, unsigned Op, raw_ostream &OS);
  void print_pcrel_imm(const MCInst *MI, unsigned OpNo, raw_ostream &OS);
  
  void printopaquemem(const MCInst *MI, unsigned OpNo, raw_ostream &O) {
    printMemReference(MI, OpNo, O);
  }
  
  void printi8mem(const MCInst *MI, unsigned OpNo, raw_ostream &O) {
    printMemReference(MI, OpNo, O);
  }
  void printi16mem(const MCInst *MI, unsigned OpNo, raw_ostream &O) {
    printMemReference(MI, OpNo, O);
  }
  void printi32mem(const MCInst *MI, unsigned OpNo, raw_ostream &O) {
    printMemReference(MI, OpNo, O);
  }
  void printi64mem(const MCInst *MI, unsigned OpNo, raw_ostream &O) {
    printMemReference(MI, OpNo, O);
  }
  void printi128mem(const MCInst *MI, unsigned OpNo, raw_ostream &O) {
    printMemReference(MI, OpNo, O);
  }
  void printf32mem(const MCInst *MI, unsigned OpNo, raw_ostream &O) {
    printMemReference(MI, OpNo, O);
  }
  void printf64mem(const MCInst *MI, unsigned OpNo, raw_ostream &O) {
    printMemReference(MI, OpNo, O);
  }
  void printf80mem(const MCInst *MI, unsigned OpNo, raw_ostream &O) {
    printMemReference(MI, OpNo, O);
  }
  void printf128mem(const MCInst *MI, unsigned OpNo, raw_ostream &O) {
    printMemReference(MI, OpNo, O);
  }
  void printlea32mem(const MCInst *MI, unsigned OpNo, raw_ostream &O) {
    printLeaMemReference(MI, OpNo, O);
  }
  void printlea64mem(const MCInst *MI, unsigned OpNo, raw_ostream &O) {
    printLeaMemReference(MI, OpNo, O);
  }
  void printlea64_32mem(const MCInst *MI, unsigned OpNo, raw_ostream &O) {
    printLeaMemReference(MI, OpNo, O);
  }
};
  
}

#endif
