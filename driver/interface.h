//
// Copyright (C) 2015 Alexey Khokholov (Nuke.YKT)
//
// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU General Public License
// as published by the Free Software Foundation; either version 2
// of the License, or (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//

class midisynth {
public:
	virtual int midi_init() = 0;
	virtual void midi_write(unsigned int data) = 0;
	virtual void midi_write_sysex(char *buffer, unsigned int length) = 0;
	virtual void midi_panic() = 0;
	virtual void midi_reset() = 0;
	virtual void midi_close() = 0;
};

midisynth* getsynth();
