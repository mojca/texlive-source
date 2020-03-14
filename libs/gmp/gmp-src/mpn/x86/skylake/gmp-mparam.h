/* x86/skylake gmp-mparam.h -- Compiler/machine parameter header file.

Copyright 2019 Free Software Foundation, Inc.

This file is part of the GNU MP Library.

The GNU MP Library is free software; you can redistribute it and/or modify
it under the terms of either:

  * the GNU Lesser General Public License as published by the Free
    Software Foundation; either version 3 of the License, or (at your
    option) any later version.

or

  * the GNU General Public License as published by the Free Software
    Foundation; either version 2 of the License, or (at your option) any
    later version.

or both in parallel, as here.

The GNU MP Library is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
for more details.

You should have received copies of the GNU General Public License and the
GNU Lesser General Public License along with the GNU MP Library.  If not,
see https://www.gnu.org/licenses/.  */

#define GMP_LIMB_BITS 32
#define GMP_LIMB_BYTES 4

/* 3600-4000 MHz Intel Xeon E3-1270v5 Skylake */
/* FFT tuning limit = 67,000,000 */
/* Generated by tuneup.c, 2019-10-21, gcc 8.3 */

#define MOD_1_NORM_THRESHOLD                15
#define MOD_1_UNNORM_THRESHOLD              16
#define MOD_1N_TO_MOD_1_1_THRESHOLD         10
#define MOD_1U_TO_MOD_1_1_THRESHOLD          8
#define MOD_1_1_TO_MOD_1_2_THRESHOLD         0  /* never mpn_mod_1_1p */
#define MOD_1_2_TO_MOD_1_4_THRESHOLD        10
#define PREINV_MOD_1_TO_MOD_1_THRESHOLD      9
#define USE_PREINV_DIVREM_1                  1  /* native */
#define DIV_QR_1N_PI1_METHOD                 1  /* 5.63% faster than 2 */
#define DIV_QR_1_NORM_THRESHOLD             12
#define DIV_QR_1_UNNORM_THRESHOLD        MP_SIZE_T_MAX  /* never */
#define DIV_QR_2_PI2_THRESHOLD              17
#define DIVEXACT_1_THRESHOLD                 0  /* always (native) */
#define BMOD_1_TO_MOD_1_THRESHOLD           18

#define DIV_1_VS_MUL_1_PERCENT             348

#define MUL_TOOM22_THRESHOLD                24
#define MUL_TOOM33_THRESHOLD                81
#define MUL_TOOM44_THRESHOLD               208
#define MUL_TOOM6H_THRESHOLD               303
#define MUL_TOOM8H_THRESHOLD               454

#define MUL_TOOM32_TO_TOOM43_THRESHOLD      81
#define MUL_TOOM32_TO_TOOM53_THRESHOLD     149
#define MUL_TOOM42_TO_TOOM53_THRESHOLD     137
#define MUL_TOOM42_TO_TOOM63_THRESHOLD     145
#define MUL_TOOM43_TO_TOOM54_THRESHOLD     196

#define SQR_BASECASE_THRESHOLD               0  /* always (native) */
#define SQR_TOOM2_THRESHOLD                 40
#define SQR_TOOM3_THRESHOLD                129
#define SQR_TOOM4_THRESHOLD                220
#define SQR_TOOM6_THRESHOLD                354
#define SQR_TOOM8_THRESHOLD                608

#define MULMID_TOOM42_THRESHOLD             72

#define MULMOD_BNM1_THRESHOLD               17
#define SQRMOD_BNM1_THRESHOLD               21

#define MUL_FFT_MODF_THRESHOLD             530  /* k = 5 */
#define MUL_FFT_TABLE3                                      \
  { {    530, 5}, {     29, 6}, {     15, 5}, {     31, 6}, \
    {     29, 7}, {     15, 6}, {     33, 7}, {     17, 6}, \
    {     36, 7}, {     19, 6}, {     39, 7}, {     21, 6}, \
    {     43, 7}, {     23, 6}, {     47, 7}, {     29, 8}, \
    {     15, 7}, {     35, 8}, {     19, 7}, {     43, 8}, \
    {     23, 7}, {     49, 8}, {     27, 7}, {     55, 9}, \
    {     15, 8}, {     31, 7}, {     63, 8}, {     43, 9}, \
    {     23, 8}, {     51, 9}, {     31, 8}, {     67, 9}, \
    {     39, 8}, {     83, 9}, {     47, 8}, {     95, 9}, \
    {     55,10}, {     31, 9}, {     79,10}, {     47, 9}, \
    {     95,11}, {     31,10}, {     63, 9}, {    135,10}, \
    {     79, 9}, {    159,10}, {     95, 9}, {    191,10}, \
    {    111,11}, {     63,10}, {    143, 9}, {    287,10}, \
    {    159,11}, {     95,10}, {    191,12}, {     63,11}, \
    {    127,10}, {    255, 9}, {    511,10}, {    271, 9}, \
    {    543,10}, {    287,11}, {    159,10}, {    351,11}, \
    {    191,10}, {    415,12}, {    127,11}, {    255,10}, \
    {    543,11}, {    287,10}, {    607,11}, {    319,10}, \
    {    671,11}, {    351,12}, {    191,11}, {    383,10}, \
    {    799,11}, {    415,13}, {    127,12}, {    255,11}, \
    {    543,10}, {   1087,11}, {    607,12}, {    319,11}, \
    {    671,10}, {   1343,11}, {    735,12}, {    383,11}, \
    {    799,10}, {   1599,11}, {    863,12}, {    447,11}, \
    {    959,13}, {    255,12}, {    511,11}, {   1087,12}, \
    {    575,11}, {   1215,12}, {    639,11}, {   1343,12}, \
    {    703,13}, {    383,12}, {    767,11}, {   1599,12}, \
    {    831,11}, {   1727,12}, {    959,14}, {    255,13}, \
    {    511,12}, {   1087,11}, {   2239,12}, {   1215,11}, \
    {   2431,13}, {    639,12}, {   1471,13}, {    767,12}, \
    {   1727,13}, {    895,12}, {   1919,14}, {    511,13}, \
    {   1023,12}, {   2239,13}, {   1151,12}, {   2431,13}, \
    {   1279,12}, {   2623,13}, {   1407,12}, {   2815,14}, \
    {    767,13}, {   1663,12}, {   3455,13}, {   1919,15}, \
    {    511,14}, {   1023,13}, {   2175,12}, {   4479,13}, \
    {   2431,14}, {   1279,13}, {   2943,12}, {   5887,14}, \
    {   1535,13}, {   3455,14}, {   1791,13}, {   3967,15}, \
    {   1023,14}, {   2047,13}, {   4479,14}, {   2303,13}, \
    {   4991,12}, {   9983,14}, {   2815,13}, {   5887,15}, \
    {   1535,14}, {   3839,16} }
#define MUL_FFT_TABLE3_SIZE 154
#define MUL_FFT_THRESHOLD                 6784

#define SQR_FFT_MODF_THRESHOLD             460  /* k = 5 */
#define SQR_FFT_TABLE3                                      \
  { {    460, 5}, {     29, 6}, {     15, 5}, {     31, 6}, \
    {     29, 7}, {     15, 6}, {     33, 7}, {     17, 6}, \
    {     36, 7}, {     19, 6}, {     39, 7}, {     29, 8}, \
    {     15, 7}, {     35, 8}, {     19, 7}, {     41, 8}, \
    {     23, 7}, {     49, 8}, {     27, 7}, {     55, 9}, \
    {     15, 8}, {     31, 7}, {     63, 8}, {     43, 9}, \
    {     23, 8}, {     55,10}, {     15, 9}, {     31, 8}, \
    {     67, 9}, {     39, 8}, {     79, 9}, {     47, 8}, \
    {     95, 9}, {     55,10}, {     31, 9}, {     79,10}, \
    {     47, 9}, {     95,11}, {     31,10}, {     63, 9}, \
    {    135,10}, {     79, 9}, {    159,10}, {     95,11}, \
    {     63,10}, {    127, 9}, {    255,10}, {    143, 9}, \
    {    287,10}, {    159,11}, {     95,12}, {     63,11}, \
    {    127,10}, {    271, 9}, {    543,10}, {    287,11}, \
    {    159,10}, {    319, 9}, {    639,10}, {    351,11}, \
    {    191,10}, {    415,12}, {    127,11}, {    255,10}, \
    {    543,11}, {    287,10}, {    575,11}, {    319,10}, \
    {    671,11}, {    351,10}, {    703,12}, {    191,11}, \
    {    383,10}, {    799,11}, {    415,10}, {    831,13}, \
    {    127,12}, {    255,11}, {    511,10}, {   1023,11}, \
    {    543,10}, {   1087,11}, {    607,12}, {    319,11}, \
    {    671,10}, {   1343,11}, {    735,12}, {    383,11}, \
    {    799,10}, {   1599,11}, {    863,12}, {    447,11}, \
    {    927,13}, {    255,12}, {    511,11}, {   1087,12}, \
    {    575,11}, {   1215,12}, {    639,11}, {   1343,12}, \
    {    703,11}, {   1407,13}, {    383,12}, {    767,11}, \
    {   1599,12}, {    831,11}, {   1727,12}, {    895,11}, \
    {   1791,14}, {    255,13}, {    511,12}, {   1087,11}, \
    {   2239,12}, {   1215,13}, {    639,12}, {   1471,13}, \
    {    767,12}, {   1727,13}, {    895,12}, {   1919,14}, \
    {    511,13}, {   1023,12}, {   2239,13}, {   1151,12}, \
    {   2431,13}, {   1279,12}, {   2623,13}, {   1407,12}, \
    {   2815,14}, {    767,13}, {   1663,12}, {   3455,13}, \
    {   1919,15}, {    511,14}, {   1023,13}, {   2175,12}, \
    {   4479,13}, {   2431,14}, {   1279,13}, {   2943,12}, \
    {   5887,14}, {   1535,13}, {   3455,14}, {   1791,13}, \
    {   3967,15}, {   1023,14}, {   2047,13}, {   4479,14}, \
    {   2303,13}, {   4991,12}, {   9983,14}, {   2815,13}, \
    {   5887,15}, {   1535,14}, {   3839,16} }
#define SQR_FFT_TABLE3_SIZE 155
#define SQR_FFT_THRESHOLD                 5568

#define MULLO_BASECASE_THRESHOLD             0  /* always */
#define MULLO_DC_THRESHOLD                  68
#define MULLO_MUL_N_THRESHOLD            13555
#define SQRLO_BASECASE_THRESHOLD             0  /* always */
#define SQRLO_DC_THRESHOLD                 117
#define SQRLO_SQR_THRESHOLD              10988

#define DC_DIV_QR_THRESHOLD                 42
#define DC_DIVAPPR_Q_THRESHOLD             163
#define DC_BDIV_QR_THRESHOLD                66
#define DC_BDIV_Q_THRESHOLD                160

#define INV_MULMOD_BNM1_THRESHOLD           46
#define INV_NEWTON_THRESHOLD               165
#define INV_APPR_THRESHOLD                 157

#define BINV_NEWTON_THRESHOLD              300
#define REDC_1_TO_REDC_N_THRESHOLD          68

#define MU_DIV_QR_THRESHOLD               1718
#define MU_DIVAPPR_Q_THRESHOLD            1685
#define MUPI_DIV_QR_THRESHOLD               62
#define MU_BDIV_QR_THRESHOLD              1589
#define MU_BDIV_Q_THRESHOLD               1830

#define POWM_SEC_TABLE  1,17,129,547,1317

#define GET_STR_DC_THRESHOLD                10
#define GET_STR_PRECOMPUTE_THRESHOLD        16
#define SET_STR_DC_THRESHOLD               354
#define SET_STR_PRECOMPUTE_THRESHOLD       860

#define FAC_DSC_THRESHOLD                  141
#define FAC_ODD_THRESHOLD                   34

#define MATRIX22_STRASSEN_THRESHOLD         20
#define HGCD2_DIV1_METHOD                    5  /* 1.04% faster than 3 */
#define HGCD_THRESHOLD                     114
#define HGCD_APPR_THRESHOLD                132
#define HGCD_REDUCE_THRESHOLD             3524
#define GCD_DC_THRESHOLD                   474
#define GCDEXT_DC_THRESHOLD                379
#define JACOBI_BASE_METHOD                   1  /* 27.39% faster than 4 */

/* Tuneup completed successfully, took 31721 seconds */