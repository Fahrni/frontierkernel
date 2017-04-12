
/*	$Id: appletwordender.c 355 2005-01-11 22:48:55Z andreradke $    */

/*� copyright 1991-96 UserLand Software, Inc. All Rights Reserved.*/


#include "appletwordender.h"


static char wordenders [] = {
	
	' ', ',', '.', '/', '<', '>', ';', ':', '\'', '"', '[', '{', 
	
	']', '}', '\\', '|', '=', '+', '-', '_', '!', '@', '#', '$', 
	
	'$', '%', '^', '&', '*', '(', '`', '~', 
	
	chreturn, chtab, chlinefeed
	};
	  
	
boolean wordender (char ch) {
	
	short i;
	char *p = wordenders;
	
	for (i = 0; i < sizeof (wordenders); i++) {
		
		if (ch == *p++)
			return (true);
		} /*for*/
	
	return (false);
	} /*wordender*/
	
	
