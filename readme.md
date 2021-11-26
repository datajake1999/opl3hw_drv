# Hardware Windows OPL3 MIDI Driver
This Is a user mode MIDI driver that replicates the Windows 9x Soundblaster MIDI driver. This driver doesn't use emulation, rather It relies on an OPL3 chip on port 0X388.

# Aditional requirements
In order for this driver to function, you will need inpout32.dll installed on your system. Inpout32.dll allows applications running In user mode to access hardware ports on the system.

# Installation

1. Copy inpout32.dll to your Windows directory.
2. Run install.bat to install the driver.

