#ifndef CSPARSESOLVE_H
#define CSPARSESOLVE_H

# include <stdlib.h>
# include <stdio.h>
# include <math.h>

# include "cvOneDTypes.h"

int csparseSolve(cvOneDKentry* Kentries,  double *b,int numEntries, int NNZ,int nunknown,double u[]);

#endif // CSPARSESOLVE_H
