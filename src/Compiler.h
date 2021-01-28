 /******************************************************************************
 *
 * Module: Common - Compiler Abstraction
 *
 * File Name: Compiler.h
 *
 * Description:  This file contains the definitions and macros specified by
 *               AUTOSAR for the abstraction of compiler specific keywords.
 *
 * Author: Mohamed Tarek
 *
 *******************************************************************************/

#ifndef COMPILER_H
#define COMPILER_H

/* Id for the company in the AUTOSAR
 * for example Mohamed Tarek's ID = 1000 :) */
#define COMPILER_VENDOR_ID                                  (1000U)

/*
 * Module Version 1.0.0
 */
#define COMPILER_SW_MAJOR_VERSION                           (1U)
#define COMPILER_SW_MINOR_VERSION                           (0U)
#define COMPILER_SW_PATCH_VERSION                           (0U)

/*
 * AUTOSAR Version 4.0.3
 */
#define COMPILER_AR_RELEASE_MAJOR_VERSION                   (4U)
#define COMPILER_AR_RELEASE_MINOR_VERSION                   (0U)
#define COMPILER_AR_RELEASE_PATCH_VERSION                   (3U)

/* The memory class is used for the declaration of local pointers */
#define AUTOMATIC

/* The memory class is used within type definitions, where no memory
   qualifier can be specified */
#define TYPEDEF

/* This is used to define the void pointer to zero definition */
#define NULL_PTR          ((void *)0)

/* This is used to define the abstraction of compiler keyword inline */
#define INLINE            inline

/* This is used to define the local inline function */
#define LOCAL_INLINE      static inline

/* This is used to define the abstraction of compiler keyword static */
#define STATIC            static
/* 8.2.2 function definition use it to define functions */

#define FUNC( rettype, memclass )   rettype 									/* for the declaration and definition of functions */

#define FUNC_P2CONST(rettype, ptrclass, memclass)	const rettype *			/* declaration and definition of functions returning a pointer to a constant */

#define FUNC_P2VAR(rettype, ptrclass, memclass)		rettype *		/* for the declaration and definition of functions returning a pointer to a variable */


/* 8.2.3 Pointer definitions use it to define pointers */

#define P2VAR(ptrtype, memclass, ptrclass)	ptrtype * 		                /* for the declaration and definition of pointers in RAM, pointing to variables */

#define P2CONST(ptrtype, memclass, ptrclass) const ptrtype*				    /* for the declaration and definition of pointers in RAM pointing to constants */

#define CONSTP2VAR(ptrtype, memclass, ptrclass) ptrtype * const 		    /* for the declaration and definition of constant pointers accessing variables */

#define CONSTP2CONST(ptrtype, memclass, ptrclass)	const ptrtype * const	/* for the declaration and definition of constant pointers accessing constants */

#define P2FUNC(rettype, ptrclass, fctname)	rettype (* fctname)			    /* for the type definition of pointers to functions */ /* fctname is pointer to function name*/

#define CONSTP2FUNC(rettype, ptrclass, fctname)	rettype (* const fctname)	/* the type definition of constant pointers to functions */ /* fctname is pointer to function name*/


/* 8.2.4 Constant definitions use it to define Constants */

#define CONST(type, memclass)	const type		/* for the declaration and definition of constants */


/* 8.2.4 Variable definitions use it to define Variables */

#define VAR( type, memclass )  type		/* for the declaration and definition of constants */
#endif
