/* Generated by tuneup.c, 2009-10-08, gcc 4.3 */

#define MUL_KARATSUBA_THRESHOLD          26
#define MUL_TOOM3_THRESHOLD              84
#define MUL_TOOM4_THRESHOLD             430
#define MUL_TOOM7_THRESHOLD             597

#define SQR_BASECASE_THRESHOLD            0  /* always (native) */
#define SQR_KARATSUBA_THRESHOLD          30
#define SQR_TOOM3_THRESHOLD             105
#define SQR_TOOM4_THRESHOLD             532
#define SQR_TOOM7_THRESHOLD            1075

#define MULLOW_BASECASE_THRESHOLD        11
#define MULLOW_DC_THRESHOLD              12
#define MULLOW_MUL_THRESHOLD           9970

#define MULHIGH_BASECASE_THRESHOLD       22
#define MULHIGH_DC_THRESHOLD             22
#define MULHIGH_MUL_THRESHOLD          9970

#define MULMOD_2EXPM1_THRESHOLD          20

#define DIV_SB_PREINV_THRESHOLD           0  /* always */
#define DIV_DC_THRESHOLD                 46
#define POWM_THRESHOLD                  146
#define FAC_UI_THRESHOLD              19544

#define GCD_ACCEL_THRESHOLD              62
#define GCDEXT_THRESHOLD                  0  /* always */
#define JACOBI_BASE_METHOD                1

#define DIVREM_1_NORM_THRESHOLD       MP_SIZE_T_MAX  /* never */
#define DIVREM_1_UNNORM_THRESHOLD     MP_SIZE_T_MAX  /* never */
#define MOD_1_NORM_THRESHOLD              0  /* always */
#define MOD_1_UNNORM_THRESHOLD            0  /* always */
#define USE_PREINV_DIVREM_1               1
#define USE_PREINV_MOD_1                  1
#define DIVREM_2_THRESHOLD            MP_SIZE_T_MAX  /* never */
#define DIVEXACT_1_THRESHOLD              0  /* always */
#define MODEXACT_1_ODD_THRESHOLD          0  /* always (native) */
#define MOD_1_1_THRESHOLD                 4
#define MOD_1_2_THRESHOLD                 8
#define MOD_1_3_THRESHOLD                24
#define DIVREM_HENSEL_QR_1_THRESHOLD      8
#define RSH_DIVREM_HENSEL_QR_1_THRESHOLD      7
#define DIVREM_EUCLID_HENSEL_THRESHOLD     80

#define ROOTREM_THRESHOLD                16

#define GET_STR_DC_THRESHOLD              5
#define GET_STR_PRECOMPUTE_THRESHOLD      9
#define SET_STR_THRESHOLD              6418

#define MUL_FFT_TABLE  { 432, 928, 3008, 3328, 7168, 36864, 114688, 458752, 0 }
#define MUL_FFT_MODF_THRESHOLD          496
#define MUL_FFT_THRESHOLD             13312

#define SQR_FFT_TABLE  { 560, 928, 2752, 3328, 11264, 36864, 114688, 458752, 0 }
#define SQR_FFT_MODF_THRESHOLD          560
#define SQR_FFT_THRESHOLD              8704

/* Tuneup completed successfully, took 74 seconds */

#define MUL_FFT_TABLE2 {{1, 3}, {205, 4}, {377, 5}, {386, 4}, {404, 5}, {813, 6}, {850, 5}, {869, 6}, {971, 5}, {993, 6}, {2392, 7}, {2445, 6}, {2668, 7}, {2727, 6}, {2787, 7}, {2976, 6}, {3042, 7}, {3109, 6}, {3178, 7}, {3248, 8}, {3393, 7}, {3468, 8}, {3544, 7}, {3784, 8}, {3867, 6}, {3952, 7}, {4039, 8}, {4407, 7}, {4504, 8}, {4914, 7}, {5022, 8}, {6957, 9}, {7756, 8}, {8460, 9}, {8836, 8}, {9030, 9}, {9850, 8}, {10513, 9}, {11976, 8}, {12239, 9}, {13939, 8}, {14245, 9}, {15876, 8}, {16224, 9}, {22461, 10}, {23970, 9}, {26142, 10}, {27898, 9}, {28509, 10}, {31772, 9}, {33906, 10}, {36184, 9}, {36977, 10}, {40326, 9}, {41210, 10}, {44943, 11}, {45928, 10}, {46934, 11}, {47962, 10}, {57042, 11}, {62207, 12}, {63570, 10}, {73983, 11}, {80681, 10}, {86099, 11}, {98051, 10}, {102394, 11}, {114110, 12}, {127165, 11}, {164920, 12}, {196129, 11}, {228243, 12}, {233241, 13}, {254354, 12}, {259924, 11}, {277377, 12}, {456509, 13}, {519871, 12}, {659749, 13}, {784582, 14}, {MP_SIZE_T_MAX,0}}

#define MUL_FFTM_TABLE2 {{1, 4}, {344, 5}, {360, 4}, {377, 5}, {743, 6}, {777, 5}, {813, 6}, {850, 5}, {869, 6}, {1612, 7}, {1685, 6}, {1760, 7}, {1922, 6}, {2009, 7}, {3867, 6}, {3952, 7}, {4504, 8}, {4603, 7}, {4808, 8}, {4914, 7}, {5022, 8}, {5132, 7}, {5360, 8}, {5478, 7}, {5598, 8}, {6518, 9}, {6661, 8}, {7266, 9}, {9850, 8}, {10066, 9}, {14876, 10}, {15535, 9}, {18480, 10}, {19722, 9}, {21047, 10}, {21508, 9}, {22461, 10}, {23970, 9}, {25032, 10}, {27898, 9}, {28509, 10}, {31772, 9}, {32468, 10}, {36184, 9}, {36977, 10}, {44943, 11}, {47962, 10}, {52305, 11}, {55819, 10}, {57042, 11}, {62207, 12}, {63570, 10}, {67840, 11}, {72397, 10}, {73983, 11}, {80681, 10}, {82448, 11}, {114110, 12}, {127165, 11}, {147989, 12}, {161386, 11}, {172223, 12}, {196129, 11}, {204813, 12}, {228243, 13}, {254354, 12}, {259924, 11}, {265616, 12}, {329862, 13}, {392279, 12}, {456509, 13}, {466506, 14}, {508731, 13}, {519871, 12}, {554776, 13}, {913042, 14}, {MP_SIZE_T_MAX,0}}

#define SQR_FFT_TABLE2 {{1, 4}, {344, 5}, {360, 4}, {377, 5}, {386, 4}, {404, 5}, {813, 6}, {850, 5}, {869, 6}, {2144, 7}, {2191, 6}, {2289, 7}, {2340, 6}, {2392, 7}, {2445, 6}, {2499, 7}, {2610, 6}, {2668, 7}, {2727, 8}, {2849, 7}, {3248, 8}, {3393, 7}, {3784, 8}, {3867, 6}, {4039, 7}, {4128, 8}, {6957, 9}, {7756, 8}, {8460, 9}, {8836, 8}, {9030, 9}, {9850, 8}, {10066, 9}, {11976, 8}, {12239, 9}, {13939, 10}, {14876, 9}, {15876, 8}, {16224, 9}, {18084, 10}, {19722, 9}, {22461, 10}, {23970, 9}, {26142, 10}, {27898, 9}, {28509, 10}, {31772, 9}, {32468, 10}, {36184, 9}, {36977, 10}, {44943, 11}, {47962, 10}, {57042, 11}, {62207, 12}, {63570, 10}, {73983, 11}, {80681, 10}, {86099, 11}, {114110, 12}, {127165, 11}, {164920, 12}, {196129, 11}, {213882, 12}, {218566, 13}, {254354, 12}, {259924, 11}, {277377, 12}, {456509, 13}, {519871, 12}, {659749, 13}, {784582, 14}, {MP_SIZE_T_MAX,0}}

#define SQR_FFTM_TABLE2 {{1, 4}, {306, 5}, {328, 4}, {344, 5}, {360, 4}, {377, 5}, {680, 6}, {711, 5}, {743, 6}, {777, 5}, {813, 6}, {1476, 7}, {1543, 6}, {1612, 7}, {1685, 6}, {1760, 7}, {3867, 6}, {3952, 7}, {4312, 8}, {4407, 7}, {4504, 8}, {4704, 7}, {4808, 8}, {4914, 7}, {5022, 8}, {5132, 7}, {5360, 8}, {5478, 7}, {5598, 8}, {6518, 9}, {6661, 8}, {7266, 9}, {14876, 10}, {15535, 9}, {16944, 10}, {17696, 9}, {18084, 10}, {19722, 9}, {21047, 10}, {21508, 9}, {22461, 10}, {23970, 9}, {24495, 10}, {27898, 9}, {28509, 10}, {31772, 9}, {32468, 10}, {44943, 11}, {47962, 10}, {52305, 11}, {55819, 10}, {57042, 11}, {62207, 12}, {63570, 10}, {67840, 11}, {72397, 10}, {73983, 11}, {80681, 10}, {82448, 11}, {89912, 12}, {91881, 11}, {93893, 12}, {95949, 11}, {114110, 12}, {127165, 11}, {147989, 12}, {161386, 11}, {172223, 12}, {228243, 13}, {254354, 12}, {329862, 13}, {392279, 12}, {456509, 13}, {466506, 14}, {508731, 13}, {519871, 12}, {554776, 13}, {913042, 14}, {MP_SIZE_T_MAX,0}}

#define MUL_FFT_FULL_TABLE2 {{16, 1}, {1092, 2}, {1116, 1}, {1811, 2}, {1851, 1}, {2066, 4}, {2112, 1}, {2207, 2}, {2256, 1}, {2462, 2}, {2516, 1}, {2572, 2}, {2629, 1}, {2869, 2}, {2932, 1}, {3343, 4}, {3417, 1}, {3648, 4}, {3728, 1}, {3894, 2}, {4068, 3}, {4158, 2}, {4440, 5}, {4638, 4}, {4844, 1}, {4951, 4}, {5060, 3}, {5171, 2}, {5401, 4}, {5520, 2}, {5765, 4}, {6154, 2}, {6568, 3}, {6712, 2}, {6859, 1}, {7010, 4}, {7482, 1}, {7814, 4}, {7986, 6}, {8161, 4}, {8710, 6}, {9096, 5}, {9296, 1}, {10140, 3}, {10363, 2}, {10590, 1}, {10822, 4}, {11059, 2}, {11302, 1}, {11803, 4}, {12327, 1}, {13155, 3}, {13444, 1}, {14040, 2}, {14348, 1}, {15993, 2}, {16344, 1}, {17068, 2}, {17824, 1}, {18215, 3}, {18614, 1}, {20300, 3}, {20745, 1}, {22140, 2}, {22625, 1}, {23628, 2}, {24146, 4}, {25216, 1}, {25769, 3}, {26911, 1}, {32708, 2}, {33425, 1}, {36452, 4}, {38901, 1}, {40624, 3}, {41514, 1}, {44303, 2}, {47280, 4}, {50456, 1}, {52691, 3}, {53845, 1}, {57462, 4}, {61321, 1}, {62664, 2}, {64037, 1}, {65440, 2}, {66873, 5}, {68338, 8}, {69835, 4}, {71365, 6}, {72928, 5}, {74525, 4}, {79530, 1}, {81272, 3}, {83052, 1}, {84871, 3}, {86730, 1}, {88630, 2}, {94582, 1}, {96654, 2}, {98771, 4}, {100934, 6}, {103145, 9}, {107713, 5}, {110072, 1}, {114947, 4}, {122667, 1}, {130905, 2}, {145881, 5}, {149076, 6}, {152341, 4}, {155677, 1}, {162570, 3}, {166130, 1}, {169768, 3}, {173486, 1}, {177285, 2}, {197567, 4}, {206315, 3}, {215450, 1}, {261830, 2}, {267564, 5}, {273423, 8}, {279411, 9}, {291783, 7}, {298173, 6}, {304703, 4}, {325163, 3}, {346997, 2}, {395159, 4}, {403812, 7}, {412655, 10}, {430925, 8}, {440362, 6}, {450005, 5}, {469929, 1}, {523686, 2}, {583592, 5}, {596372, 6}, {609431, 4}, {650350, 3}, {694016, 2}, {790340, 1}, {MP_SIZE_T_MAX,0}}

#define SQR_FFT_FULL_TABLE2 {{16, 2}, {1022, 1}, {1045, 2}, {1068, 1}, {1092, 2}, {1116, 1}, {1219, 2}, {1274, 1}, {1811, 2}, {1851, 1}, {1934, 2}, {1977, 1}, {2066, 2}, {2112, 1}, {2207, 2}, {2256, 1}, {2462, 2}, {2516, 1}, {2572, 2}, {2629, 1}, {3343, 4}, {3417, 1}, {3894, 2}, {4068, 3}, {4158, 2}, {4440, 5}, {4740, 4}, {4844, 1}, {4951, 3}, {5171, 2}, {5401, 4}, {5520, 2}, {5765, 4}, {6154, 6}, {6289, 2}, {6427, 4}, {6568, 3}, {6712, 4}, {7482, 1}, {7814, 4}, {7986, 6}, {8161, 4}, {8710, 2}, {8901, 5}, {9296, 1}, {9922, 2}, {10140, 3}, {10363, 2}, {10590, 1}, {10822, 4}, {11059, 1}, {11803, 4}, {12597, 1}, {12873, 2}, {13155, 3}, {13444, 1}, {14040, 4}, {14348, 2}, {14663, 4}, {14985, 1}, {15993, 2}, {16344, 1}, {17068, 2}, {17824, 1}, {18215, 3}, {18614, 1}, {20300, 3}, {20745, 1}, {22140, 2}, {22625, 1}, {23628, 2}, {24146, 4}, {24675, 1}, {25769, 3}, {26911, 1}, {28720, 2}, {29349, 4}, {29992, 1}, {32007, 2}, {33425, 1}, {34905, 2}, {35670, 1}, {36452, 4}, {37251, 1}, {40624, 3}, {41514, 1}, {44303, 2}, {45274, 1}, {47280, 4}, {50456, 1}, {52691, 3}, {53845, 1}, {57462, 2}, {60007, 4}, {61321, 1}, {62664, 2}, {64037, 1}, {65440, 2}, {66873, 5}, {68338, 8}, {69835, 7}, {71365, 8}, {72928, 5}, {74525, 6}, {76157, 4}, {79530, 1}, {81272, 3}, {83052, 1}, {84871, 3}, {86730, 1}, {88630, 2}, {94582, 4}, {96654, 2}, {98771, 4}, {100934, 6}, {103145, 9}, {107713, 5}, {112483, 1}, {114947, 4}, {122667, 1}, {130905, 2}, {142755, 5}, {145881, 7}, {149076, 6}, {152341, 4}, {155677, 1}, {159086, 4}, {162570, 3}, {166130, 2}, {169768, 3}, {173486, 2}, {197567, 4}, {206315, 3}, {215450, 1}, {261830, 2}, {267564, 5}, {273423, 8}, {279411, 9}, {291783, 7}, {298173, 6}, {304703, 4}, {325163, 3}, {346997, 2}, {395159, 4}, {403812, 7}, {412655, 10}, {430925, 6}, {450005, 5}, {469929, 1}, {523686, 2}, {583592, 5}, {596372, 6}, {609431, 4}, {650350, 3}, {694016, 2}, {790340, 1}, {MP_SIZE_T_MAX,0}}
