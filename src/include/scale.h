#ifndef SF_SCALE
#define SF_SCALE

/* A structure used to hold one 12-ET scale */

typedef struct _SFscale {

	/*
	 * The scale notes, string
	 *
	 * The string contains a maximum of 12 notes,
	 * first of which is the scale tonic note,
	 * and the string escape character
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

	char notes[13];

	/* The scale name, string */

	char *name;

} sfscale;

/*
 * Given the 12-ET notes passed as the argument,
 * find the musical scales which contain them
 */

void sfFind(char *notes);

#endif
