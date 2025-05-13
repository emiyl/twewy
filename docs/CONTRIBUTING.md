# Contributing

The ARM7 BIOS will be required for the build to produce a byte-matching executable. Name this file `arm7_bios.bin` and place it in the root directory of this repository. Instructions on how to dump this from your NDS are not included here. BIOS dumps matching the listed below have been confirmed to work.

| File name       | SHA1                                       |
| --------------- | ------------------------------------------ |
| `arm7_bios.bin` | `6ee830c7f552c5bf194c20a2c13d5bb44bdb5c03` |
| `arm7_bios.bin` | `24f67bdea115a2c847c8813a262502ee1607b7df` |

Once the BIOS file is placed, `configure.py` will utilize it to produce a matching ROM when next ran.

After initially building the project, running `ninja` again will reprocess any necessary configurations and rebuild the project if changes are detected. The build process will report errors should the built ROM not be identical to the original.

Any pull requests should ensure they can produce a matching build before being submitted. Note, this currently does not require that files be 100% identical, simply that `ninja` reports "OK" for *all* checks and that compilation completes successfully.

In the event that your PR will 100% a given translation unit (TU), please add the "complete" flag to the respective delink entry and then confirm that rebuilding the project still reports "OK".

[Objdiff](https://github.com/encounter/objdiff) is supported and preferred for analysing reverse engineered progress. [Ghidra](https://github.com/NationalSecurityAgency/ghidra) in combination with the [dsd-ghidra](https://github.com/AetiasHax/dsd-ghidra) extension are invaluable for this process.
