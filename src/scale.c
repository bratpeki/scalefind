#include "./include/scale.h"

/* A variable which contains all our scales */

sfscale sfScalesAll[48] = {

	{ "cdefgab", "C Major"           },
	{ "CDfFGAc", "C# Major"          },
	{ "deFgabC", "D Major"           },
	{ "DfgGAcd", "D# Major"          },
	{ "eFGabCD", "E Major"           },
	{ "fgaAcde", "F Major"           },
	{ "FGAbCDf", "F# Major"          },
	{ "gabcdeF", "G Major"           },
	{ "GAcCDfg", "G# Major"          },
	{ "abCdeFG", "A Major"           },
	{ "AcdDfga", "A# Major"          },
	{ "bCDeFGA", "B Major"           },

	{ "cdDfgGA", "C Minor"           },
	{ "CDeFGab", "C# Minor"          },
	{ "defgaAc", "D Minor"           },
	{ "DfFGAbC", "D# Minor"          },
	{ "eFgabcd", "E Minor"           },
	{ "fgGAcCD", "F Minor"           },
	{ "FGabCde", "F# Minor"          },
	{ "gaAcdDf", "G Minor"           },
	{ "GAbCDeF", "G# Minor"          },
	{ "abcdefg", "A Minor"           },
	{ "AcCDfFG", "A# Minor"          },
	{ "bCdeFga", "B Minor"           },

	{ "cdDfgGb", "C Harmonic Minor"  },
	{ "CDeFGac", "C# Harmonic Minor" },
	{ "defgaAC", "D Harmonic Minor"  },
	{ "DfFGAbd", "D# Harmonic Minor" },
	{ "eFgabcD", "E Harmonic Minor"  },
	{ "fgGAcCe", "F Harmonic Minor"  },
	{ "FGabCdf", "F# Harmonic Minor" },
	{ "gaAcdDF", "G Harmonic Minor"  },
	{ "GAbCDeg", "G# Harmonic Minor" },
	{ "abcdefG", "A Harmonic Minor"  },
	{ "AcCDfFa", "A# Harmonic Minor" },
	{ "bCdeFgA", "B Harmonic Minor"  },

	{ "cdDfgab", "C Melodic Minor"   },
	{ "CDeFGAc", "C# Melodic Minor"  },
	{ "defgabC", "D Melodic Minor"   },
	{ "DfFGAcd", "D# Melodic Minor"  },
	{ "eFgabCD", "E Melodic Minor"   },
	{ "fgGAcde", "F Melodic Minor"   },
	{ "FGabCDf", "F# Melodic Minor"  },
	{ "gaAcdeF", "G Melodic Minor"   },
	{ "GAbCDfg", "G# Melodic Minor"  },
	{ "abcdeFG", "A Melodic Minor"   },
	{ "AcCDfga", "A# Melodic Minor"  },
	{ "bCdeFGA", "B Melodic Minor"   },

};

void sfPrintScale(sfscale scale) {

	printf("%s\n", scale.name);

	/* number of notes in the scale */

	char notesNum = strlen(scale.notes);

	for ( char i = 0; i < notesNum; i++ ) {

		/* Parse the characters and output the appropriate notes */

		switch ( scale.notes[i] ) {

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

		/* Add a dash between notes in the output */

		if ( i != notesNum - 1 ) printf (" - ");

	}

	printf("\n");

}

void sfFind(char *notes) {

	/* Iterate over the scales in sfScalesAll */

	/*
	 * For each iteration, have a flag which checks if all the notes in the
	 * argument and, if all the notes are included, print out the scale
	 */

}
