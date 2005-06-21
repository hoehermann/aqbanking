/***************************************************************************
 $RCSfile$
 -------------------
 cvs         : $Id$
 begin       : Mon Mar 01 2004
 copyright   : (C) 2004 by Martin Preuss
 email       : martin@libchipcard.de

 ***************************************************************************
 *          Please see toplevel file COPYING for license details           *
 ***************************************************************************/


#ifndef AQBANKING_JOBGETDATEDTRANSFERS_H
#define AQBANKING_JOBGETDATEDTRANSFERS_H


#include <aqbanking/job.h>
#include <aqbanking/transaction.h>

#ifdef __cplusplus
extern "C" {
#endif


/**
 * Creates a job which retrieves a list of currently active standing orders
 * for the given account.
 * @param a account for which you want the standing orders
 */
AQBANKING_API
AB_JOB *AB_JobGetDatedTransfers_new(AB_ACCOUNT *a);

/**
 * Returns the list of transactions received.
 * The job remains the owner of the list and all elements in it.
 */
AQBANKING_API 
AB_TRANSACTION_LIST2*
  AB_JobGetDatedTransfers_GetDatedTransfers(const AB_JOB *j);



#ifdef __cplusplus
}
#endif


#endif /* AQBANKING_JOBGETDATEDTRANSFERS_H */

