
/*	$Id: appletfileflags.h 355 2005-01-11 22:48:55Z andreradke $    */

/*� copyright 1991-96 UserLand Software, Inc. All Rights Reserved.*/


#define appletfileflagsinclude


boolean filesetfinderflag (ptrfilespec, short, boolean);	

boolean filesetsharedbit (ptrfilespec, boolean);

boolean filesetcustomiconbit (ptrfilespec, boolean);

boolean filesetstationery (ptrfilespec, boolean);

boolean filesetnamelocked (ptrfilespec, boolean);

boolean filesetbundlebit (ptrfilespec, boolean);

boolean filesetinvisible (ptrfilespec, boolean);

boolean filesetaliasbit (ptrfilespec, boolean);

boolean filesetlocked (ptrfilespec, boolean);

boolean filesetlabel (ptrfilespec, short);

