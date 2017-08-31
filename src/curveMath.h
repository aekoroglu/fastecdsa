#ifndef CURVEMATH_H
#define CURVEMATH_H

#include <Python.h>

#include <gmp.h>

#include "binaryField.h"
#include "curve.h"
#include "point.h"

int pointZZ_pEqual(const PointZZ_p * op1, const PointZZ_p * op2);

void pointZZ_pDouble(PointZZ_p * rop, const PointZZ_p * op, const CurveZZ_p * curve);
void pointZZ_pXDouble(PointZZ_pX * rop, const PointZZ_pX * op, const CurveZZ_pX * curve);

void pointZZ_pAdd(PointZZ_p * rop, const PointZZ_p * op1, const PointZZ_p * op2, const CurveZZ_p * curve);
void pointZZ_pXAdd(PointZZ_pX * rop, const PointZZ_pX * op1, const PointZZ_pX * op2, const  CurveZZ_pX * curve);

void pointZZ_pMul(PointZZ_p * rop, const PointZZ_p * point, const mpz_t scalar, const CurveZZ_p * curve);
void pointZZ_pXMul(PointZZ_pX * rop, const PointZZ_pX * point, const mpz_t scalar, const CurveZZ_pX * curve);

void pointZZ_pShamirsTrick(PointZZ_p * rop, const PointZZ_p * point1, const mpz_t scalar1, const PointZZ_p * point2, const mpz_t scalar2, const CurveZZ_p * curve);

void normalizePointZZ_pX(mpz_t ropx, mpz_t ropy, const PointZZ_pX * op, Field * field);

#endif
