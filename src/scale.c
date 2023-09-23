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

void sfFind(char *notes) {
}
