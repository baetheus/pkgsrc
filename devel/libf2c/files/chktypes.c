/* $NetBSD: chktypes.c,v 1.1.1.1 2009/12/02 22:32:47 asau Exp $ */
/*
does a sanity check of the settings in f2c.h  If these settings
are wrong, a message is printed asking that the package maintainer
be contacted.
*/

#include <stdio.h>
#include <string.h>
#include "f2c.h"

int main(int argc, char *argv[])
{

  int err=0;
  int pok=0;


  if(argc > 1)
    {
      if(strncmp(argv[1],"-v",2)==0)
	{
	  pok=1;
	}
    }
  if(sizeof(doublecomplex) == 2*sizeof(doublereal))
    {
      if(pok)
	printf("sizeof(doublecomplex) = 2*sizeof(doublereal) = %d\n",sizeof(doublecomplex));
    }
  else
    {
      printf("ERROR:\tsizeof(doublecomplex) \t= %d\n\t2*sizeof(doublereal) \t= %d\n",
	     sizeof(doublecomplex),2*sizeof(doublereal));
      err=1;
    }


  if(sizeof(doublereal) == sizeof(complex))
    {
      if(pok)
	printf("sizeof(doublereal)    = sizeof(complex)      = %d\n",sizeof(doublereal));
    }
  else
    {
      printf("ERROR:\tsizeof(doublereal) \t= %d\n\tsizeof(complex) \t= %d\n",
	     sizeof(doublereal),sizeof(complex));
      err=1;
    }


  if(sizeof(doublereal) == 2*sizeof(real))
    {
      if(pok)
	printf("sizeof(doublereal)    = 2*sizeof(real)       = %d\n",sizeof(doublereal));
    }
  else
    {
      printf("ERROR:\tsizeof(doublereal) \t= %d\n\t2*sizeof(real)\t = %d\n",
	     sizeof(doublereal),2*sizeof(real));
      err=1;
    }

  if(sizeof(real) == sizeof(integer))
    {
      if(pok)
	printf("sizeof(real)          = sizeof(integer)      = %d\n",sizeof(real));
    }
  else
    {
      printf("ERROR:\tsizeof(real) \t= %d\n\tsizeof(integer) \t= %d\n",
	     sizeof(real),sizeof(integer));
      err=1;
    }

  if(sizeof(real) == sizeof(logical))
    {
      if(pok)
	printf("sizeof(real)          = sizeof(logical)      = %d\n",sizeof(real));
    }
  else
    {
      printf("ERROR:\tsizeof(real) \t= %d\n\tsizeof(logical) \t= %d\n",
	     sizeof(real),sizeof(logical));
      err=1;
    }

  if(sizeof(real) == 2*sizeof(shortint))
    {
      if(pok)
	printf("sizeof(real)          = 2*sizeof(shortint)   = %d\n",sizeof(real));
    }
  else
    {
      printf("ERROR:\tsizeof(real) \t= %d\n\t2*sizeof() \t= %d\n",
	     sizeof(real),2*sizeof(shortint));
      err=1;
    }

  if(pok)
    {
      printf("\n\n-------------------\n");
      printf("sizeof(short)  = %d\n",sizeof(short));
      printf("sizeof(int)    = %d\n",sizeof(int));
      printf("sizeof(float)  = %d\n",sizeof(float));
      printf("sizeof(long)   = %d\n",sizeof(long));
      printf("sizeof(double) = %d\n",sizeof(double));
      printf("\n\n-------------------\n");
    }

  if(err)
    {
      printf("The header file f2c.h has the wrong typedef's for your machine\n");
      printf("architecture.  Please contact the package maintainer.\n");
    }

  return(err);
}
