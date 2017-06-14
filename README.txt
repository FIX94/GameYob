
Branch Notes:

This is just a quickly thrown together version of GameYob DS that plays a "rom.gb" file put into the platform/ds/arm9/data folder after compiling it.
It does not save anything and has to be compiled with the Makefile in platform/ds and with devkitARM r46 if you want the compiled .nds file to work with DS Download Play via for example HaxxStation or Wii DS ROM Sender.
Developer Note: the "libwhy.a" in platform/ds/arm9/lib is just an empty definition of "__sync_synchronize" to actually make it compilable with devkitARM r46, no clue why it wont compile otherwise.



Original README:

GameYob v0.5
Author: Drenn


Basic list of features:

- Gameboy, Gameboy Color, Super Gameboy emulation
- Supports Gameboy Color Bios ("boot rom") for custom palettes
- Auto SRAM saving
- Save States
- Cheat Codes
- Remappable controls
- Custom borders
- Scale to fill the screen
- Gameboy Printer emulation
- GBS music playback


See the GBAtemp thread for more information:

http://gbatemp.net/threads/gameyob-a-gameboy-emulator-for-ds.343407/
