
/*	$Id: appletdate.h 355 2005-01-11 22:48:55Z andreradke $    */

/*� copyright 1991-96 UserLand Software, Inc. All Rights Reserved.*/


#define appletdateinclude

void datetomacdate (tydaterecord, unsigned long *);

void appletdatetostring (tydaterecord, bigstring);

boolean stringtoappletdate (bigstring, tydaterecord *);

boolean stringtotime (bigstring, unsigned long *);

void getcurrenttimestring (bigstring);

unsigned long netscapedatetomacdate (unsigned long);

unsigned long macdatetonetscapedate (unsigned long);
