/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "sqr.h"

int *
sqr_1_svc(number *argp, struct svc_req *rqstp)
{
	static int  result;

	result = argp->a * argp->a;
	printf("Squaring %d and return %d", argp->a, result);

	return &result;
}
