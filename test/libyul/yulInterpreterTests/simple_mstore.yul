// RUN: %soll -lang=Yul %s
{
  mstore(10, 11)
}
// ----
// Trace:
// Memory dump:
//     20: 0000000000000000000b00000000000000000000000000000000000000000000
// Storage dump:
