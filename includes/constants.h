#ifndef LOCKOPENER_CONSTS_H
#define LOCKOPENER_CONSTS_H

// Define constants for Error codes
#define ERR_TOO_LITTLE_ARGS 1
#define ERR_UNKNOWN 2
#define ERR_GPIO_FAILED 3
#define ERR_INVALID_PIN 4
#define ERR_INCORRECT_PERCENTAGE 5

//Output error message and exit
void errorMessage(const int errorCode)
{
	fprintf(stderr, "An error occured; the error code was %d \n", errorCode);
	exit(-1);
}

#endif