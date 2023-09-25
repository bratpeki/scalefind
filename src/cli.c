#include "./include/cli.h"

#include <stdio.h>

void cliHelp() {

	printf(
		"scalefind by brat.peki\n"
		"https://github.com/bratpeki/scalefind\n"
		"\n"
		"USAGE:\n"
		"    (./)scalefind (args)\n"
		"\n"
		"ARGS:\n"
		"    scalefind accepts strings of a size no larger than 12.\n"
		"    the args must contain only the characters in the table below:\n"
		"\n"
		"    Note | Character\n"
		"    C    | c\n"
		"    C#   | C\n"
		"    D    | d\n"
		"    D#   | D\n"
		"    E    | e\n"
		"    F    | f\n"
		"    F#   | F\n"
		"    G    | g\n"
		"    G#   | G\n"
		"    A    | a\n"
		"    A#   | A\n"
		"    B    | b\n"
		"\n"
		"    Any string arg represents a set of notes,\n"
		"    ex. \"cFA\" represents C, F# and A#.\n"
		"\n"
		"OUTPUT:\n"
		"    For any given arg, scalefind returns the scales\n"
		"    which contain all the named notes.\n"
		"    The program is always guaranteed to return the\n"
		"    chromatic scale.\n"
		"\n"
		"Happy usage!\n"
	);

}
