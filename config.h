//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval(s)*/	/*Update Signal*/
	{"",	    "sb-taskw",	          60,                  10},
	{"",	    "sb-cpu",		          10,	                 11}, 
	{"",	    "sb-volume",	        1,	                 12},
	{"",	    "sb-internet",	      5,                	 13},
	{"",	    "sb-battery2",	      5,                   14},
	{"",	    "sb-clock",	          60,                  15},
	{"",	    "sb-moonphase",	      18000,             	 16}, 
	{"",	    "sb-help-icon",     	0,                   17},
};

//Sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char *delim = "  ";

// Have dwmblocks automatically recompile and run when you edit this file in
// vim with the following line in your vimrc/init.vim:

// autocmd BufWritePost ~/.local/src/dwmblocks/config.h !cd ~/.local/src/dwmblocks/; sudo make install && { killall -q dwmblocks;setsid dwmblocks & }
