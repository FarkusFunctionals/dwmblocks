//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	/* {"⌨", "sb-kbselect", 0, 30}, */
	{"", "cat /tmp/recordingicon 2>/dev/null",	0,	9},
	{"",	"/home/pc2/statusbar/sb-music",	0,	11},
	{"",	"/home/pc2/statusbar/sb-pacpackages",	0,	8},
	{"",	"/home/pc2/statusbar/sb-news",		0,	6},
	{"",	"/home/pc2/statusbar/sb-memory",	10,	14}, 
	{"",	"/home/pc2/statusbar/sb-cpu",		10,	18}, 
	{"",	"/home/pc2/statusbar/sb-forecast",	18000,	5},
	{"",	"/home/pc2/statusbar/sb-nettraf",	1,	16},
	{"",	"/home/pc2/statusbar/sb-volume",	0,	10},
	{"",	"/home/pc2/statusbar/sb-battery",	5,	3},
	{"",	"/home/pc2/statusbar/sb-clock",	60,	1},
	{"",	"/home/pc2/statusbar/sb-internet",	5,	4},
};

//Sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char *delim = " | ";

// Have dwmblocks automatically recompile and run when you edit this file in
// vim with the following line in your vimrc/init.vim:

// autocmd BufWritePost ~/.local/src/dwmblocks/config.h !cd ~/.local/src/dwmblocks/; sudo make install && { killall -q dwmblocks;setsid dwmblocks & }
