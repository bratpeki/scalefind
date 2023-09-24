#ifndef SF_SCALE
#define SF_SCALE

/*
 * This header file is reserved for all datatypes
 * and functions used in the project
 *
 * The notes and scales are all given in the 12-ET
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
 *
 * This program will only rely on sharps,
 * instead of using the standard combination of
 * sharps and flats
 *
 * All scales are written so that
 * the first character is the tonic note
 * and every character after it is the
 * next note in the scale
 *
 * In other words, every scale is given in
 * the standard succession
 *
 * The tonic note is not repeated, that is
 * C major is written as "cdefgab", not "cdefgabc"
 */

#include <stdio.h>
#include <string.h>

/* A structure used to hold one scale */

typedef struct _SFscale {

	/*
	 * The scale notes; a fixed-size string
	 *
	 * The string contains a maximum of
	 * 12 note characters and
	 * one string escape character
	 */

	char notes[13];

	/* The scale name; a variable-sized string */

	char *name;

} sfscale;

/*
 * Given an sfscale argument,
 * print out information about it
 */

void sfPrintScale(sfscale scale);

/*
 * Print out every scale which contains
 * the notes in the argument string
 */

void sfFind(char *notes);

#endif
