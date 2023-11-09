#include "./include/scale.h"

#include <stdio.h>
#include <string.h>

/* A variable which contains all our scales */

sfscale sfScalesAll[] = {

	{ "cCdDefFgGaAb", "Chromatic"          },

	{ "cdefgab",      "C Major (Ionian)"   },
	{ "CDfFGAc",      "C# Major (Ionian)"  },
	{ "deFgabC",      "D Major (Ionian)"   },
	{ "DfgGAcd",      "D# Major (Ionian)"  },
	{ "eFGabCD",      "E Major (Ionian)"   },
	{ "fgaAcde",      "F Major (Ionian)"   },
	{ "FGAbCDf",      "F# Major (Ionian)"  },
	{ "gabcdeF",      "G Major (Ionian)"   },
	{ "GAcCDfg",      "G# Major (Ionian)"  },
	{ "abCdeFG",      "A Major (Ionian)"   },
	{ "AcdDfga",      "A# Major (Ionian)"  },
	{ "bCDeFGA",      "B Major (Ionian)"   },

	{ "cdefgGb",      "C Harmonic Major"   },
	{ "CDfFGac",      "C# Harmonic Major"  },
	{ "deFgaAC",      "D Harmonic Major"   },
	{ "DfgGAbd",      "D# Harmonic Major"  },
	{ "eFGabcD",      "E Harmonic Major"   },
	{ "fgaAcCe",      "F Harmonic Major"   },
	{ "FGAbCdf",      "F# Harmonic Major"  },
	{ "gabcdDF",      "G Harmonic Major"   },
	{ "GAcCDeg",      "G# Harmonic Major"  },
	{ "abCdefG",      "A Harmonic Major"   },
	{ "AcdDfFa",      "A# Harmonic Major"  },
	{ "bCDeFgA",      "B Harmonic Major"   },

	{ "cdDfgaA",      "C Dorian"           },
	{ "CDeFGAb",      "C# Dorian"          },
	{ "defgabc",      "D Dorian"           },
	{ "DfFGAcC",      "D# Dorian"          },
	{ "eFgabCd",      "E Dorian"           },
	{ "fgGAcdD",      "F Dorian"           },
	{ "FGabCDe",      "F# Dorian"          },
	{ "gaAcdef",      "G Dorian"           },
	{ "GAbCDfF",      "G# Dorian"          },
	{ "abcdeFg",      "A Dorian"           },
	{ "AcCDfgG",      "A# Dorian"          },
	{ "bCdeFGa",      "B Dorian"           },

	{ "cCDfgGA",      "C Phrygian"         },
	{ "CdeFGab",      "C# Phrygian"        },
	{ "dDfgaAc",      "D Phrygian"         },
	{ "DeFGAbC",      "D# Phrygian"        },
	{ "efgabcd",      "E Phrygian"         },
	{ "fFGAcCD",      "F Phrygian"         },
	{ "FgabCde",      "F# Phrygian"        },
	{ "gGAcdDf",      "G Phrygian"         },
	{ "GabCDeF",      "G# Phrygian"        },
	{ "aAcdefg",      "A Phrygian"         },
	{ "AbCDfFG",      "A# Phrygian"        },
	{ "bcdeFga",      "B Phrygian"         },

	{ "cdeFgab",      "C Lydian"           },
	{ "CDfgGAc",      "C# Lydian"          },
	{ "deFGabC",      "D Lydian"           },
	{ "DfgaAcd",      "D# Lydian"          },
	{ "eFGAbCD",      "E Lydian"           },
	{ "fgabcde",      "F Lydian"           },
	{ "FGAcCDf",      "F# Lydian"          },
	{ "gabCdeF",      "G Lydian"           },
	{ "GAcdDfg",      "G# Lydian"          },
	{ "abCDeFG",      "A Lydian"           },
	{ "Acdefga",      "A# Lydian"          },
	{ "bCDfFGA",      "B Lydian"           },

	{ "cdefgaA",      "C Mixolydian"       },
	{ "CDfFGAb",      "C# Mixolydian"      },
	{ "deFgabc",      "D Mixolydian"       },
	{ "DfgGAcC",      "D# Mixolydian"      },
	{ "eFGabCd",      "E Mixolydian"       },
	{ "fgaAcdD",      "F Mixolydian"       },
	{ "FGAbCDe",      "F# Mixolydian"      },
	{ "gabcdef",      "G Mixolydian"       },
	{ "GAcCDfF",      "G# Mixolydian"      },
	{ "abCdeFg",      "A Mixolydian"       },
	{ "AcdDfgG",      "A# Mixolydian"      },
	{ "bCDeFGa",      "B Mixolydian"      },

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

	{ "cCDfFGA",      "C Locrian"          },
	{ "CdeFgab",      "C# Locrian"         },
	{ "dDfgGAc",      "D Locrian"          },
	{ "DeFGabC",      "D# Locrian"         },
	{ "efgaAcd",      "E Locrian"          },
	{ "fFGAbCD",      "F Locrian"          },
	{ "Fgabcde",      "F# Locrian"         },
	{ "gGAcCDf",      "G Locrian"          },
	{ "GabCdeF",      "G# Locrian"         },
	{ "aAcdDfg",      "A Locrian"          },
	{ "AbCDeFG",      "A# Locrian"         },
	{ "bcdefga",      "B Locrian"          },

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

	for (unsigned char i = 0; i < notesNum; i++) {

		switch (notes[i]) {

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

		if (i != notesNum - 1) printf (" - ");

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

	for (unsigned char iNote = 0; (iNote < strlen(notes)) && fAllNotesIn; iNote++) {

		fNoteIn = 0;

		for (unsigned char iScale = 0; (iScale < strlen(scale)) && fAllNotesIn; iScale++)
			if (notes[iNote] == scale[iScale]) fNoteIn = 1;

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

	for (unsigned char i = 0; i < notesNum; i++)

		switch (notes[i]) {

			case 'c': case 'C': case 'd': case 'D':
			case 'e': case 'b': case 'f': case 'F':
			case 'g': case 'G': case 'a': case 'A':
				break;

			default:
				printf(
					"The input string (%s) contains "
					"an illegal character (%c). Exiting!\n",
					notes, notes[i]
				);
				return;

		}

	printf("Scales that contain the notes: ");
	sfPrintNotes(notes);
	printf("\n");

	for (unsigned int i = 0; i < sizeof(sfScalesAll)/sizeof(sfscale); i++)
		if (sfNotesInScale(notes, sfScalesAll[i].notes))
			sfPrintScale(sfScalesAll[i]);

}
