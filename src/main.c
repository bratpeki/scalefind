#include "./include/scale.h"

int main(int argc, char **argv) {

	/* Iterate over the arguments */

	for (int i = 1; i < argc; i++)
		sfFind(argv[i]);

}
