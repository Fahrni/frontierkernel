
/*	$Id: appletfileeject.c 355 2005-01-11 22:48:55Z andreradke $    */

/*� copyright 1991-96 UserLand Software, Inc. All Rights Reserved.*/


#include "applet.h"
#include "appletfilesinternal.h"
#include "appletfileeject.h"


boolean fileejectdisk (ptrfilespec pfs) {
	
	short vnum = (*pfs).vRefNum;
	OSErr ec;
	
	ec = Eject (nil, vnum);

	if (fileerror (pfs, ec))
		return (false);
		
	ec = UnmountVol (nil, vnum);
	
	return (!fileerror (pfs, ec));
	} /*fileejectdisk*/
