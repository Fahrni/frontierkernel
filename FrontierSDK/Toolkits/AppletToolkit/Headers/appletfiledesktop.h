
/*	$Id: appletfiledesktop.h 355 2005-01-11 22:48:55Z andreradke $    */

/*� copyright 1991-96 UserLand Software, Inc. All Rights Reserved.*/


#define appletfiledesktopinclude


#ifndef filesinclude

	#include "appletfiles.h"
	
#endif


boolean hasdesktopmanager (short);

boolean findapplication (short, OSType, boolean, FSSpec *);

boolean findapponanydisk (OSType, FSSpec *);

boolean assureappisrunning (OSType, boolean);

boolean getfilecomment (FSSpec *, bigstring);

boolean setfilecomment (FSSpec *, bigstring);

boolean filecopycomment (FSSpec *, FSSpec *);
