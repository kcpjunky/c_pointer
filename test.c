#include <stdio.h>
#include <fcntl.h>

void func(void);

int main() {

	FILE *fi, *fo;
	int b;


	fi = open("in", "r");
	fo = open("out", "w");

	// get char from fi
	b = fgetc(fi);

	while (EOF != b) {
		fputc(b, fo);
		b = fgetc(fi);
	}

}

void func() {
	printf("ïn func()");
}
