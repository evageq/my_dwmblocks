//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"Mem:", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	30,		0},
    {"Volume:", "$HOME/scripts/volume",					0,		10},
    {"Bright:", "brightnessctl | grep \"%\" | awk '{print $4}' | tr -d '[()]'",					0,		11},
    {"Layout:", "setxkbmap -query | grep layout | cut -f2 -d\":\" | tr -d '[:space:]'",	1,		0},
    {"Caps:", "xset q | grep -i \"Caps Lock\" | awk '{print $4}'",					1,		0},
	{"", "date '+%d-%m-%Y %H:%M'",					5,		0},
};

//sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
