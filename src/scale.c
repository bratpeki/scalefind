#include "./include/scale.h"

#include <stdio.h>
#include <string.h>

/* A variable which contains all our scales */

sfscale sfScalesAll[] = {

	{ "cCdDefFgGaAb", "Chromatic"          },

	{ "cdefgab",      "C Major"            },
	{ "CDfFGAc",      "C# Major"           },
	{ "deFgabC",      "D Major"            },
	{ "DfgGAcd",      "D# Major"           },
	{ "eFGabCD",      "E Major"            },
	{ "fgaAcde",      "F Major"            },
	{ "FGAbCDf",      "F# Major"           },
	{ "gabcdeF",      "G Major"            },
	{ "GAcCDfg",      "G# Major"           },
	{ "abCdeFG",      "A Major"            },
	{ "AcdDfga",      "A# Major"           },
	{ "bCDeFGA",      "B Major"            },

	{ "cdDfgGA",      "C Minor (Aeolian)"  },
	{ "CDeFGab",      "C# Minor (Aeolian)" },
	{ "defgaAc",      "D Minor (Aeolian)"  },
	{ "DfFGAbC",      "D# Minor (Aeolian)" },
	{ "eFgabcd",      "E Minor (Aeolian)"  },
	{ "fgGAcCD",      "F Minor (Aeolian)"  },
	{ "FGabCde",      "F# Minor (Aeolian)" },
	{ "gaAcdDf",      "G Minor (Aeolian)"  },
	{ "GAbCDeF",      "G# Minor (Aeolian)" },
	{ "abcdefg",      "A Minor (Aeolian)"  },
	{ "AcCDfFG",      "A# Minor (Aeolian)" },
	{ "bCdeFga",      "B Minor (Aeolian)"  },

	{ "cdDfgGb",      "C Harmonic Minor"   },
	{ "CDeFGac",      "C# Harmonic Minor"  },
	{ "defgaAC",      "D Harmonic Minor"   },
	{ "DfFGAbd",      "D# Harmonic Minor"  },
	{ "eFgabcD",      "E Harmonic Minor"   },
	{ "fgGAcCe",      "F Harmonic Minor"   },
	{ "FGabCdf",      "F# Harmonic Minor"  },
	{ "gaAcdDF",      "G Harmonic Minor"   },
	{ "GAbCDeg",      "G# Harmonic Minor"  },
	{ "abcdefG",      "A Harmonic Minor"   },
	{ "AcCDfFa",      "A# Harmonic Minor"  },
	{ "bCdeFgA",      "B Harmonic Minor"   },

	{ "cdDfgab",      "C Melodic Minor"    },
	{ "CDeFGAc",      "C# Melodic Minor"   },
	{ "defgabC",      "D Melodic Minor"    },
	{ "DfFGAcd",      "D# Melodic Minor"   },
	{ "eFgabCD",      "E Melodic Minor"    },
	{ "fgGAcde",      "F Melodic Minor"    },
	{ "FGabCDf",      "F# Melodic Minor"   },
	{ "gaAcdeF",      "G Melodic Minor"    },
	{ "GAbCDfg",      "G# Melodic Minor"   },
	{ "abcdeFG",      "A Melodic Minor"    },
	{ "AcCDfga",      "A# Melodic Minor"   },
	{ "bCdeFGA",      "B Melodic Minor"    },

};

/* Print the formatted notes (no newline at the end) */

void sfPrintNotes(const char* notes) {

	unsigned char notesNum = strlen(notes);

	for ( unsigned char i = 0; i < notesNum; i++ ) {

		switch ( notes[i] ) {

			case 'c': printf("C");  break;
			case 'C': printf("C#"); break;
			case 'd': printf("D");  break;
			case 'D': printf("D#"); break;
			case 'e': printf("E");  break;
			case 'f': printf("F");  break;
			case 'F': printf("F#"); break;
			case 'g': printf("G");  break;
			case 'G': printf("G#"); break;
			case 'a': printf("A");  break;
			case 'A': printf("A#"); break;
			case 'b': printf("B");  break;

		}

		if ( i != notesNum - 1 ) printf (" - ");

	}

}

/* Print the scale information */

void sfPrintScale(sfscale scale) {

	printf("  %s: ", scale.name);

	sfPrintNotes(scale.notes);

	printf("\n");

}

/*
 * Check if the characters in the first string are all in the second string
 *
 * Returns 0 if they are not
 * Returns 1 if they are
 */

unsigned char sfNotesInScale(const char *notes, const char *scale) {

	unsigned char fAllNotesIn = 1;
	unsigned char fNoteIn;

	for ( unsigned char iNote = 0; (iNote < strlen(notes)) && fAllNotesIn; iNote++ ) {

		fNoteIn = 0;

		for ( unsigned char iScale = 0; (iScale < strlen(scale)) && fAllNotesIn; iScale++ )
			if ( notes[iNote] == scale[iScale] ) fNoteIn = 1;

		if (fNoteIn == 0) fAllNotesIn = 0;

	}

	return fAllNotesIn;

}

void sfFind(const char *notes) {

	unsigned long notesNum = strlen(notes);

	if (notesNum > 12) {
		printf("The input string (%s) exceeds the 12-character limit. Exiting!\n", notes);
		return;
	}

	for ( unsigned char i = 0; i < notesNum; i++ )

		switch (notes[i]) {

			case 'c': case 'C': case 'd': case 'D':
			case 'e': case 'b': case 'f': case 'F':
			case 'g': case 'G': case 'a': case 'A':
				break;

			default:
				printf(
					"The input string (%s) contains"
					"an illegal character (%c). Exiting!\n",
					notes, notes[i]
				);
				break;

		}

	printf("Scales that contain the notes: ");
	sfPrintNotes(notes);
	printf("\n");

	for ( unsigned int i = 0; i < sizeof(sfScalesAll)/sizeof(sfscale); i++ ) {

		if (sfNotesInScale(notes, sfScalesAll[i].notes))
			sfPrintScale(sfScalesAll[i]);

	}

}
