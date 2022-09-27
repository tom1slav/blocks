//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/				/*Update Interval*/	/*Update Signal*/
	{"\x03 BAT ",	"$HOME/.local/bin/bar/battery",		5,			0	},
	{"\x04 MEM ",	"$HOME/.local/bin/bar/memory",		5,			0	},
	{"\x05 VOL ",	"$HOME/.local/bin/bar/volume",		0,			10	},
	{"\x06 ",	"date '+%b %d (%a) %I:%M%p'",		5,			0	},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " ";
static unsigned int delimLen = 5;
