#include "highPassModule.h"

void runHighP(highP *highN, float input){

	/*

		input = highN->in * highN->ff1;				// Input and node values
		highN->r_n = highN->r_n1 * highN->fb1 ;
		highN->r_n += highN->r_n2 * highN->fb2;
		highN->r_n += highN->r_n1 * highN->ff2;
		highN->r_n += highN->r_n2;
		*/
		highN->r_n = highN->in * highN->ff1 - highN->r_n1 * highN->fb1 - highN->r_n2 * highN->fb2;

		// Output
		highN->out = highN->r_n2 + highN->r_n1 * highN->ff2 + highN->r_n;

		// Sampling delay
		highN->r_n2 = highN->r_n1;
		highN->r_n1 = highN->r_n;



}



float getHighP(highP *highN){
	return highN->out;
}
