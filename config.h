//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval(s)*/	/*Update Signal*/
	{"",	    "sb-taskw",	          300,               11},
	{"",	    "sb-cpu",		          10,	               18}, 
	{"",	    "sb-volume",	        1,	               10},
	{"",	    "sb-internet",	      5,               	  4},
	{"",	    "sb-battery2",	      5,                	3},
	{"",	    "sb-clock",	          60,               	1},
	{"",	    "sb-moonphase",	      18000,            	17}, 
	{"",	    "sb-help-icon",     	0,                	15},
};

//Sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char *delim = "  ";

// Have dwmblocks automatically recompile and run when you edit this file in
// vim with the following line in your vimrc/init.vim:

// autocmd BufWritePost ~/.local/src/dwmblocks/config.h !cd ~/.local/src/dwmblocks/; sudo make install && { killall -q dwmblocks;setsid dwmblocks & }
