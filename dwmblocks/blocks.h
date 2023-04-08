//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", "s_dwmblocks_battery", 1, 0}, 
	{"", "s_dwmblocks_network", 1, 0},
	{"", "s_dwmblocks_cpu", 1, 0},
	{"", "s_dwmblocks_ram", 1, 0},
	{"", "s_dwmblocks_date", 1, 0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
