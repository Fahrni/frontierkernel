
/*	$Id: appletfilecopy.h 355 2005-01-11 22:48:55Z andreradke $    */

/*� copyright 1991-96 UserLand Software, Inc. All Rights Reserved.*/


#define appletfilescopyinclude


#ifndef filesinclude

	#include "appletfiles.h"
	
#endif


typedef void (*tyfilecopycallback) (ptrfilespec, ptrfilespec, boolean *, boolean *);

boolean filecopy (ptrfilespec, ptrfilespec, tyfilecopycallback);

boolean foldercopy (ptrfilespec, ptrfilespec, long *);
