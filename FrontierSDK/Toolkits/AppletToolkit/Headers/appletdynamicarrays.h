
/*	$Id: appletdynamicarrays.h 355 2005-01-11 22:48:55Z andreradke $    */

/*� copyright 1991-96 UserLand Software, Inc. All Rights Reserved.*/


#define appletdynamicarraysinclude



typedef struct tydynamicarray {
	
	short elementsize;
	
	Handle hstorage;
	} tydynamicarray;
	
	
short sizedynamicarray (tydynamicarray *);

boolean indexdynamicarray (short, tydynamicarray *, void *);

void cleardynamicarrayelement (short, tydynamicarray *);

boolean addtodynamicarray (void *, tydynamicarray *);

boolean indynamicarray (long, tydynamicarray *, ptrchar *);

boolean removefromdynamicarray (long, tydynamicarray *);

boolean disposedynamicarray (tydynamicarray *);

