#include <stdio.h>

main() {
	int c, i, numWhite, numOther;
	int numDigit[10];
	numWhite = numOther = 0;
	for(i=0; i<10; i++) {
		numDigit[i] = 0;
	}
	
	while((c=getchar()) != EOF){
		if(c>='0' && c<='9') {
			++numDigit[c-'0'];
		} else if(c==' ' || c=='\n' || c=='\t'){
			++numWhite;
		} else {
			++numOther;
		}
	}
	
	printf("digits =");
    for(i=0; i<10; ++i){
        printf(" %d", numDigit[i]);
    } printf(", white space = %d, other = %d\n", numWhite, numOther);
}