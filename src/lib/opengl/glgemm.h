//
//  glgemm.h
//  jpcnn
//
//  Created by Peter Warden on 1/9/14.
//  Copyright (c) 2014 Jetpac, Inc. All rights reserved.
//

#ifndef INCLUDE_GLGEMM_H
#define INCLUDE_GLGEMM_H

#include "jpcnn.h"

void gl_gemm(
  int m,
  int n,
  int k,
  jpfloat_t alpha,
  jpfloat_t *a,
  int lda,
  jpfloat_t *b,
  int ldb,
  jpfloat_t beta,
  jpfloat_t* c,
  int ldc);

#endif // INCLUDE_GLGEMM_H
