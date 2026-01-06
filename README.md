# scalefind

`scalefind` is an ANSI C command-line program which finds all scales in the program
that contain the notes passed to the program.

## Example usage

When no additional arguments are passed:

```
$ ./scalefind
scalefind by bratpeki
https://github.com/bratpeki/scalefind

USAGE:
    (./)scalefind (args)

ARGS:
    scalefind accepts strings of a size no larger than 12.
    the args must contain only the characters in the table below:

    Note | Character
    C    | c
    C#   | C
    D    | d
    D#   | D
    E    | e
    F    | f
    F#   | F
    G    | g
    G#   | G
    A    | a
    A#   | A
    B    | b

    Any string arg represents a set of notes,
    ex. "cFA" represents C, F# and A#.

OUTPUT:
    For any given arg, scalefind returns the scales
    which contain all the named notes.
    The program is always guaranteed to return the
    chromatic scale.

Happy usage!
```

When we pass C, D# and A:

```
$ ./scalefind cDa
Scales that contain the notes: C - D# - A
  Chromatic: C - C# - D - D# - E - F - F# - G - G# - A - A# - B
  A# Major (Ionian): A# - C - D - D# - F - G - A
  C# Harmonic Major: C# - D# - F - F# - G# - A - C
  E Harmonic Major: E - F# - G# - A - B - C - D#
  G Harmonic Major: G - A - B - C - D - D# - F#
  A# Harmonic Major: A# - C - D - D# - F - F# - A
  C Dorian: C - D - D# - F - G - A - A#
  D Phrygian: D - D# - F - G - A - A# - C
  D# Lydian: D# - F - G - A - A# - C - D
  F Mixolydian: F - G - A - A# - C - D - D#
  G Minor (Aeolian): G - A - A# - C - D - D# - F
  A Locrian: A - A# - C - D - D# - F - G
  C# Harmonic Minor: C# - D# - E - F# - G# - A - C
  E Harmonic Minor: E - F# - G - A - B - C - D#
  G Harmonic Minor: G - A - A# - C - D - D# - F#
  A# Harmonic Minor: A# - C - C# - D# - F - F# - A
  C Melodic Minor: C - D - D# - F - G - A - B
  A# Melodic Minor: A# - C - C# - D# - F - G - A
```

In combination with `grep`:

```
$ ./scalefind A | grep "Minor"
  C Minor (Aeolian): C - D - D# - F - G - G# - A#
  D Minor (Aeolian): D - E - F - G - A - A# - C
  D# Minor (Aeolian): D# - F - F# - G# - A# - B - C#
  F Minor (Aeolian): F - G - G# - A# - C - C# - D#
  G Minor (Aeolian): G - A - A# - C - D - D# - F
  G# Minor (Aeolian): G# - A# - B - C# - D# - E - F#
  A# Minor (Aeolian): A# - C - C# - D# - F - F# - G#
  D Harmonic Minor: D - E - F - G - A - A# - C#
  D# Harmonic Minor: D# - F - F# - G# - A# - B - D
  F Harmonic Minor: F - G - G# - A# - C - C# - E
  G Harmonic Minor: G - A - A# - C - D - D# - F#
  G# Harmonic Minor: G# - A# - B - C# - D# - E - G
  A# Harmonic Minor: A# - C - C# - D# - F - F# - A
  B Harmonic Minor: B - C# - D - E - F# - G - A#
  C# Melodic Minor: C# - D# - E - F# - G# - A# - C
  D# Melodic Minor: D# - F - F# - G# - A# - C - D
  F Melodic Minor: F - G - G# - A# - C - D - E
  G Melodic Minor: G - A - A# - C - D - E - F#
  G# Melodic Minor: G# - A# - B - C# - D# - F - G
  A# Melodic Minor: A# - C - C# - D# - F - G - A
  B Melodic Minor: B - C# - D - E - F# - G# - A#
```
