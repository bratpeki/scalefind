#ifndef SF_SCALE
#define SF_SCALE

/*
 * This header file is reserved for all datatypes
 * and functions used in the project
 *
 * The notes and scales are all given in 12-ET
 * musical system, as characters/strings, where
 * notes are represented by a special character
 *
 * The notes are assigned the following characters:
 *
 * Note | Character
 * C    | c
 * C#   | C
 * D    | d
 * D#   | D
 * E    | e
 * F    | f
 * F#   | F
 * G    | g
 * G#   | G
 * A    | a
 * A#   | A
 * B    | b
 */

/* A structure used to hold one scale */

typedef struct _SFscale {

	/*
	 * The scale notes; a fixed-size string
	 *
	 * The string contains a maximum of 12 notes,
	 * first of which is the scale tonic note,
	 * and the string escape character
	 */

	char notes[13];

	/* The scale name; a variable-sized string */

	char *name;

} sfscale;

/*
 * Given a string argument which represents the notes,
 * print out the scales which use all the passed notes
 */

void sfFind(char *notes);

#endif
