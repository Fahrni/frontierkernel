
/*	$Id: appletnoop.c 355 2005-01-11 22:48:55Z andreradke $    */

/*� copyright 1991-96 UserLand Software, Inc. All Rights Reserved.*/


#include "appletdefs.h"
#include "appletnoop.h"



boolean truenoop (void) {
	
	/*
	a noop routine for all to share.
	*/
	
	return (true);
	} /*truenoop*/


boolean falsenoop (void) {
	
	/*
	a false noop routine for all to share.
	*/
	
	return (false);
	} /*falsenoop*/


