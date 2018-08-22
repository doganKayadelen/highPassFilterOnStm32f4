#ifndef highPassModule_
#define highPassModule_


typedef struct{
	float ff1, ff2;				// Coefficients of high pass
	float fb1,fb2;

	float r_n;					// Nodes for time elapsing
	float r_n1;
	float r_n2;

	float in, out;				// Input output decl.

}highP;							// A struct that called higP

void runHighP(highP *highN, float input);	// Running function
float getHighP(highP *highN);				// Get values



#endif
