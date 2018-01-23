#define OCAML_STACK_WOSIZE               32
#define OCAML_HEAP_WOSIZE               100
#define OCAML_HEAP_INITIAL_WOSIZE        46
#define OCAML_STACK_INITIAL_WOSIZE        5
#define OCAML_GLOBDATA_NUMBER            17
#define OCAML_BYTECODE_BSIZE            580
#define OCAML_PRIMITIVE_NUMBER            7
#define OCAML_VIRTUAL_ARCH               32
#define OCAML_STARTING_OOID               1

#define OCAML_GC_MARK_AND_COMPACT

#include </Users/travail/github/OMicroB/src/byterun/vm/values.h>

#define OCAML_ACC0                        0
#define OCAML_ACC1                        1
#define OCAML_ACC2                        2
#define OCAML_PUSH                        3
#define OCAML_PUSHACC1                    4
#define OCAML_PUSHACC2                    5
#define OCAML_PUSHACC3                    6
#define OCAML_PUSHACC4                    7
#define OCAML_PUSHACC5                    8
#define OCAML_POP                         9
#define OCAML_ASSIGN                     10
#define OCAML_APPLY1                     11
#define OCAML_APPLY2                     12
#define OCAML_APPLY3                     13
#define OCAML_APPTERM1                   14
#define OCAML_APPTERM2                   15
#define OCAML_RETURN                     16
#define OCAML_RESTART                    17
#define OCAML_GRAB                       18
#define OCAML_GETGLOBAL_1B               19
#define OCAML_PUSHGETGLOBAL_1B           20
#define OCAML_VECTLENGTH                 21
#define OCAML_BRANCH_1B                  22
#define OCAML_BRANCH_2B                  23
#define OCAML_BRANCHIF_1B                24
#define OCAML_BRANCHIFNOT_1B             25
#define OCAML_SWITCH_1B                  26
#define OCAML_CHECK_SIGNALS              27
#define OCAML_C_CALL1                    28
#define OCAML_C_CALL2                    29
#define OCAML_C_CALL3                    30
#define OCAML_CONST0                     31
#define OCAML_CONST1                     32
#define OCAML_CONST2                     33
#define OCAML_CONST3                     34
#define OCAML_CONSTINT_1B                35
#define OCAML_PUSHCONSTINT_1B            36
#define OCAML_PUSHCONSTINT_2B            37
#define OCAML_NEQ                        38
#define OCAML_GTINT                      39
#define OCAML_OFFSETINT_1B               40
#define OCAML_BNEQ_1B                    41
#define OCAML_STOP                       42

value ocaml_heap[OCAML_HEAP_WOSIZE] = {
  /*  0 */  Make_header(1, Closure_tag, Color_white),
  /*  1 */  Val_codeptr(63),
  /*  2 */  Make_header(1, Closure_tag, Color_white),
  /*  3 */  Val_codeptr(274),
  /*  4 */  Make_header(1, Closure_tag, Color_white),
  /*  5 */  Val_codeptr(170),
  /*  6 */  Make_header(1, Closure_tag, Color_white),
  /*  7 */  Val_codeptr(114),
  /*  8 */  Make_header(1, Closure_tag, Color_white),
  /*  9 */  Val_codeptr(226),
  /* 10 */  Make_header(1, Closure_tag, Color_white),
  /* 11 */  Val_codeptr(37),
  /* 12 */  Make_header(1, Closure_tag, Color_white),
  /* 13 */  Val_codeptr(488),
  /* 14 */  Make_header(13, 0, Color_white),
  /* 15 */  Val_int(213),
  /* 16 */  Val_int(240),
  /* 17 */  Val_int(141),
  /* 18 */  Val_int(20),
  /* 19 */  Val_int(161),
  /* 20 */  Val_int(200),
  /* 21 */  Val_int(129),
  /* 22 */  Val_int(207),
  /* 23 */  Val_int(217),
  /* 24 */  Val_int(241),
  /* 25 */  Val_int(175),
  /* 26 */  Val_int(32),
  /* 27 */  Val_int(0),
  /* 28 */  Make_header(1, Closure_tag, Color_white),
  /* 29 */  Val_codeptr(501),
  /* 30 */  Make_header(1, Closure_tag, Color_white),
  /* 31 */  Val_codeptr(474),
  /* 32 */  Make_header(1, Closure_tag, Color_white),
  /* 33 */  Val_codeptr(436),
  /* 34 */  Make_header(1, Closure_tag, Color_white),
  /* 35 */  Val_codeptr(318),
  /* 36 */  Make_header(1, Closure_tag, Color_white),
  /* 37 */  Val_codeptr(4),
  /* 38 */  Make_header(1, Closure_tag, Color_white),
  /* 39 */  Val_codeptr(339),
  /* 40 */  Make_header(1, Closure_tag, Color_white),
  /* 41 */  Val_codeptr(370),
  /* 42 */  Make_header(1, Closure_tag, Color_white),
  /* 43 */  Val_codeptr(464),
  /* 44 */  Make_header(1, Closure_tag, Color_white),
  /* 45 */  Val_codeptr(407)
};

value acc = Val_block(&ocaml_heap[1]);

value ocaml_stack[OCAML_STACK_WOSIZE] = {
  /*  0 */  Val_int(0),
  /*  1 */  Val_int(0),
  /*  2 */  Val_int(0),
  /*  3 */  Val_int(0),
  /*  4 */  Val_int(0),
  /*  5 */  Val_int(0),
  /*  6 */  Val_int(0),
  /*  7 */  Val_int(0),
  /*  8 */  Val_int(0),
  /*  9 */  Val_int(0),
  /* 10 */  Val_int(0),
  /* 11 */  Val_int(0),
  /* 12 */  Val_int(0),
  /* 13 */  Val_int(0),
  /* 14 */  Val_int(0),
  /* 15 */  Val_int(0),
  /* 16 */  Val_int(0),
  /* 17 */  Val_int(0),
  /* 18 */  Val_int(0),
  /* 19 */  Val_int(0),
  /* 20 */  Val_int(0),
  /* 21 */  Val_int(0),
  /* 22 */  Val_int(0),
  /* 23 */  Val_int(0),
  /* 24 */  Val_int(0),
  /* 25 */  Val_int(0),
  /* 26 */  Val_int(0),
  /* 27 */  Val_int(17),
  /* 28 */  Val_int(1),
  /* 29 */  Val_int(6),
  /* 30 */  Val_int(4),
  /* 31 */  Val_int(12)
};

value ocaml_global_data[OCAML_GLOBDATA_NUMBER] = {
  /*  0 */  Val_block(&ocaml_heap[3]),
  /*  1 */  Val_block(&ocaml_heap[5]),
  /*  2 */  Val_block(&ocaml_heap[7]),
  /*  3 */  Val_block(&ocaml_heap[9]),
  /*  4 */  Val_block(&ocaml_heap[1]),
  /*  5 */  Val_block(&ocaml_heap[11]),
  /*  6 */  Val_block(&ocaml_heap[13]),
  /*  7 */  Val_block(&ocaml_heap[15]),
  /*  8 */  Val_block(&ocaml_heap[29]),
  /*  9 */  Val_block(&ocaml_heap[31]),
  /* 10 */  Val_block(&ocaml_heap[33]),
  /* 11 */  Val_block(&ocaml_heap[35]),
  /* 12 */  Val_block(&ocaml_heap[37]),
  /* 13 */  Val_block(&ocaml_heap[39]),
  /* 14 */  Val_block(&ocaml_heap[41]),
  /* 15 */  Val_block(&ocaml_heap[43]),
  /* 16 */  Val_block(&ocaml_heap[45])
};

PROGMEM opcode_t const ocaml_bytecode[OCAML_BYTECODE_BSIZE] = {
  /*   0 */  OCAML_BRANCH_2B, 1, 252,
  /*   3 */  OCAML_RESTART,
  /*   4 */  OCAML_GRAB, 1,
  /*   6 */  OCAML_CONST0,
  /*   7 */  OCAML_PUSHACC2,
  /*   8 */  OCAML_VECTLENGTH,
  /*   9 */  OCAML_OFFSETINT_1B, (opcode_t) -1,
  /*  11 */  OCAML_PUSH,
  /*  12 */  OCAML_PUSHACC2,
  /*  13 */  OCAML_GTINT,
  /*  14 */  OCAML_BRANCHIF_1B, 19,
  /*  16 */  OCAML_CHECK_SIGNALS,
  /*  17 */  OCAML_ACC1,
  /*  18 */  OCAML_PUSHACC4,
  /*  19 */  OCAML_C_CALL2, 0,
  /*  21 */  OCAML_PUSHACC3,
  /*  22 */  OCAML_APPLY1,
  /*  23 */  OCAML_ACC1,
  /*  24 */  OCAML_PUSH,
  /*  25 */  OCAML_OFFSETINT_1B, 1,
  /*  27 */  OCAML_ASSIGN, 2,
  /*  29 */  OCAML_ACC1,
  /*  30 */  OCAML_NEQ,
  /*  31 */  OCAML_BRANCHIF_1B, (opcode_t) -15,
  /*  33 */  OCAML_CONST0,
  /*  34 */  OCAML_RETURN, 4,
  /*  36 */  OCAML_RESTART,
  /*  37 */  OCAML_GRAB, 1,
  /*  39 */  OCAML_ACC0,
  /*  40 */  OCAML_PUSHGETGLOBAL_1B, 0,
  /*  42 */  OCAML_APPLY1,
  /*  43 */  OCAML_PUSHACC1,
  /*  44 */  OCAML_PUSHGETGLOBAL_1B, 1,
  /*  46 */  OCAML_APPLY1,
  /*  47 */  OCAML_PUSHACC3,
  /*  48 */  OCAML_BRANCHIFNOT_1B, 8,
  /*  50 */  OCAML_ACC0,
  /*  51 */  OCAML_PUSHACC2,
  /*  52 */  OCAML_C_CALL2, 1,
  /*  54 */  OCAML_RETURN, 4,
  /*  56 */  OCAML_ACC0,
  /*  57 */  OCAML_PUSHACC2,
  /*  58 */  OCAML_C_CALL2, 2,
  /*  60 */  OCAML_RETURN, 4,
  /*  62 */  OCAML_RESTART,
  /*  63 */  OCAML_GRAB, 1,
  /*  65 */  OCAML_ACC0,
  /*  66 */  OCAML_PUSHGETGLOBAL_1B, 0,
  /*  68 */  OCAML_APPLY1,
  /*  69 */  OCAML_PUSHACC1,
  /*  70 */  OCAML_PUSHGETGLOBAL_1B, 1,
  /*  72 */  OCAML_APPLY1,
  /*  73 */  OCAML_PUSHACC2,
  /*  74 */  OCAML_PUSHGETGLOBAL_1B, 2,
  /*  76 */  OCAML_APPLY1,
  /*  77 */  OCAML_PUSHACC3,
  /*  78 */  OCAML_PUSHGETGLOBAL_1B, 3,
  /*  80 */  OCAML_APPLY1,
  /*  81 */  OCAML_PUSHACC5,
  /*  82 */  OCAML_SWITCH_1B, 3, 0, 6, 16, 22,
  /*  88 */  OCAML_ACC1,
  /*  89 */  OCAML_PUSHACC1,
  /*  90 */  OCAML_C_CALL2, 2,
  /*  92 */  OCAML_ACC2,
  /*  93 */  OCAML_PUSHACC4,
  /*  94 */  OCAML_C_CALL2, 2,
  /*  96 */  OCAML_RETURN, 6,
  /*  98 */  OCAML_ACC1,
  /*  99 */  OCAML_PUSHACC1,
  /* 100 */  OCAML_C_CALL2, 1,
  /* 102 */  OCAML_RETURN, 6,
  /* 104 */  OCAML_ACC1,
  /* 105 */  OCAML_PUSHACC1,
  /* 106 */  OCAML_C_CALL2, 2,
  /* 108 */  OCAML_ACC2,
  /* 109 */  OCAML_PUSHACC4,
  /* 110 */  OCAML_C_CALL2, 1,
  /* 112 */  OCAML_RETURN, 6,
  /* 114 */  OCAML_ACC0,
  /* 115 */  OCAML_SWITCH_1B, 24, 0, 27, 30, 33, 36, 39, 43, 47, 43, 39, 51, 43, 47, 43, 47, 30, 33, 27, 36, 47, 43, 51, 39, 33, 36,
  /* 142 */  OCAML_CONST2,
  /* 143 */  OCAML_RETURN, 1,
  /* 145 */  OCAML_CONST3,
  /* 146 */  OCAML_RETURN, 1,
  /* 148 */  OCAML_CONST1,
  /* 149 */  OCAML_RETURN, 1,
  /* 151 */  OCAML_CONST0,
  /* 152 */  OCAML_RETURN, 1,
  /* 154 */  OCAML_CONSTINT_1B, 4,
  /* 156 */  OCAML_RETURN, 1,
  /* 158 */  OCAML_CONSTINT_1B, 6,
  /* 160 */  OCAML_RETURN, 1,
  /* 162 */  OCAML_CONSTINT_1B, 7,
  /* 164 */  OCAML_RETURN, 1,
  /* 166 */  OCAML_CONSTINT_1B, 5,
  /* 168 */  OCAML_RETURN, 1,
  /* 170 */  OCAML_ACC0,
  /* 171 */  OCAML_SWITCH_1B, 24, 0, 27, 30, 33, 36, 39, 43, 47, 43, 39, 51, 43, 47, 43, 47, 30, 33, 27, 36, 47, 43, 51, 39, 33, 36,
  /* 198 */  OCAML_CONST2,
  /* 199 */  OCAML_RETURN, 1,
  /* 201 */  OCAML_CONST3,
  /* 202 */  OCAML_RETURN, 1,
  /* 204 */  OCAML_CONST1,
  /* 205 */  OCAML_RETURN, 1,
  /* 207 */  OCAML_CONST0,
  /* 208 */  OCAML_RETURN, 1,
  /* 210 */  OCAML_CONSTINT_1B, 4,
  /* 212 */  OCAML_RETURN, 1,
  /* 214 */  OCAML_CONSTINT_1B, 6,
  /* 216 */  OCAML_RETURN, 1,
  /* 218 */  OCAML_CONSTINT_1B, 7,
  /* 220 */  OCAML_RETURN, 1,
  /* 222 */  OCAML_CONSTINT_1B, 5,
  /* 224 */  OCAML_RETURN, 1,
  /* 226 */  OCAML_ACC0,
  /* 227 */  OCAML_SWITCH_1B, 24, 0, 31, 31, 31, 31, 31, 35, 31, 27, 39, 39, 39, 39, 31, 35, 39, 39, 39, 39, 43, 43, 43, 43, 43, 43,
  /* 254 */  OCAML_CONSTINT_1B, 8,
  /* 256 */  OCAML_RETURN, 1,
  /* 258 */  OCAML_CONSTINT_1B, 7,
  /* 260 */  OCAML_RETURN, 1,
  /* 262 */  OCAML_CONSTINT_1B, 6,
  /* 264 */  OCAML_RETURN, 1,
  /* 266 */  OCAML_CONSTINT_1B, 5,
  /* 268 */  OCAML_RETURN, 1,
  /* 270 */  OCAML_CONSTINT_1B, 9,
  /* 272 */  OCAML_RETURN, 1,
  /* 274 */  OCAML_ACC0,
  /* 275 */  OCAML_SWITCH_1B, 24, 0, 30, 30, 30, 30, 30, 33, 30, 27, 36, 36, 36, 36, 30, 33, 36, 36, 36, 36, 39, 39, 39, 39, 39, 39,
  /* 302 */  OCAML_CONST3,
  /* 303 */  OCAML_RETURN, 1,
  /* 305 */  OCAML_CONST2,
  /* 306 */  OCAML_RETURN, 1,
  /* 308 */  OCAML_CONST1,
  /* 309 */  OCAML_RETURN, 1,
  /* 311 */  OCAML_CONST0,
  /* 312 */  OCAML_RETURN, 1,
  /* 314 */  OCAML_CONSTINT_1B, 4,
  /* 316 */  OCAML_RETURN, 1,
  /* 318 */  OCAML_ACC0,
  /* 319 */  OCAML_PUSHCONSTINT_1B, 17,
  /* 321 */  OCAML_C_CALL2, 3,
  /* 323 */  OCAML_BRANCH_1B, 4,
  /* 325 */  OCAML_CHECK_SIGNALS,
  /* 326 */  OCAML_CONST0,
  /* 327 */  OCAML_CONST0,
  /* 328 */  OCAML_PUSHCONSTINT_1B, 16,
  /* 330 */  OCAML_C_CALL2, 4,
  /* 332 */  OCAML_BNEQ_1B, 1, (opcode_t) -7,
  /* 335 */  OCAML_CONST0,
  /* 336 */  OCAML_RETURN, 1,
  /* 338 */  OCAML_RESTART,
  /* 339 */  OCAML_GRAB, 2,
  /* 341 */  OCAML_CONST1,
  /* 342 */  OCAML_PUSHACC1,
  /* 343 */  OCAML_PUSHGETGLOBAL_1B, 4,
  /* 345 */  OCAML_APPLY2,
  /* 346 */  OCAML_CONSTINT_1B, 4,
  /* 348 */  OCAML_PUSHCONSTINT_1B, 15,
  /* 350 */  OCAML_C_CALL2, 1,
  /* 352 */  OCAML_CONSTINT_1B, 6,
  /* 354 */  OCAML_PUSHCONSTINT_1B, 15,
  /* 356 */  OCAML_C_CALL2, 1,
  /* 358 */  OCAML_CONST1,
  /* 359 */  OCAML_PUSHACC2,
  /* 360 */  OCAML_PUSHGETGLOBAL_1B, 4,
  /* 362 */  OCAML_APPLY2,
  /* 363 */  OCAML_CONST1,
  /* 364 */  OCAML_PUSHACC3,
  /* 365 */  OCAML_PUSHGETGLOBAL_1B, 4,
  /* 367 */  OCAML_APPTERM2, 5,
  /* 369 */  OCAML_RESTART,
  /* 370 */  OCAML_GRAB, 2,
  /* 372 */  OCAML_CONST1,
  /* 373 */  OCAML_PUSHACC3,
  /* 374 */  OCAML_PUSHGETGLOBAL_1B, 5,
  /* 376 */  OCAML_APPLY2,
  /* 377 */  OCAML_CONST0,
  /* 378 */  OCAML_PUSHACC3,
  /* 379 */  OCAML_PUSHGETGLOBAL_1B, 5,
  /* 381 */  OCAML_APPLY2,
  /* 382 */  OCAML_CONST1,
  /* 383 */  OCAML_PUSHACC3,
  /* 384 */  OCAML_PUSHGETGLOBAL_1B, 5,
  /* 386 */  OCAML_APPLY2,
  /* 387 */  OCAML_ACC1,
  /* 388 */  OCAML_PUSHACC1,
  /* 389 */  OCAML_PUSHGETGLOBAL_1B, 6,
  /* 391 */  OCAML_APPLY2,
  /* 392 */  OCAML_GETGLOBAL_1B, 7,
  /* 394 */  OCAML_PUSHGETGLOBAL_1B, 8,
  /* 396 */  OCAML_APPLY1,
  /* 397 */  OCAML_ACC1,
  /* 398 */  OCAML_PUSHACC1,
  /* 399 */  OCAML_PUSHGETGLOBAL_1B, 9,
  /* 401 */  OCAML_APPLY2,
  /* 402 */  OCAML_CONST0,
  /* 403 */  OCAML_PUSHGETGLOBAL_1B, 10,
  /* 405 */  OCAML_APPTERM1, 4,
  /* 407 */  OCAML_CONST0,
  /* 408 */  OCAML_PUSHCONSTINT_2B, 3, 255,
  /* 411 */  OCAML_PUSH,
  /* 412 */  OCAML_PUSHACC2,
  /* 413 */  OCAML_GTINT,
  /* 414 */  OCAML_BRANCHIF_1B, 19,
  /* 416 */  OCAML_CHECK_SIGNALS,
  /* 417 */  OCAML_CONST0,
  /* 418 */  OCAML_C_CALL1, 5,
  /* 420 */  OCAML_PUSHGETGLOBAL_1B, 11,
  /* 422 */  OCAML_APPLY1,
  /* 423 */  OCAML_ACC1,
  /* 424 */  OCAML_PUSH,
  /* 425 */  OCAML_OFFSETINT_1B, 1,
  /* 427 */  OCAML_ASSIGN, 2,
  /* 429 */  OCAML_ACC1,
  /* 430 */  OCAML_NEQ,
  /* 431 */  OCAML_BRANCHIF_1B, (opcode_t) -15,
  /* 433 */  OCAML_CONST0,
  /* 434 */  OCAML_RETURN, 3,
  /* 436 */  OCAML_CONST0,
  /* 437 */  OCAML_PUSHCONSTINT_2B, 3, 255,
  /* 440 */  OCAML_PUSH,
  /* 441 */  OCAML_PUSHACC2,
  /* 442 */  OCAML_GTINT,
  /* 443 */  OCAML_BRANCHIF_1B, 17,
  /* 445 */  OCAML_CHECK_SIGNALS,
  /* 446 */  OCAML_CONST0,
  /* 447 */  OCAML_PUSHGETGLOBAL_1B, 11,
  /* 449 */  OCAML_APPLY1,
  /* 450 */  OCAML_ACC1,
  /* 451 */  OCAML_PUSH,
  /* 452 */  OCAML_OFFSETINT_1B, 1,
  /* 454 */  OCAML_ASSIGN, 2,
  /* 456 */  OCAML_ACC1,
  /* 457 */  OCAML_NEQ,
  /* 458 */  OCAML_BRANCHIF_1B, (opcode_t) -13,
  /* 460 */  OCAML_CONST0,
  /* 461 */  OCAML_RETURN, 3,
  /* 463 */  OCAML_RESTART,
  /* 464 */  OCAML_GRAB, 2,
  /* 466 */  OCAML_ACC2,
  /* 467 */  OCAML_PUSHACC2,
  /* 468 */  OCAML_PUSHACC2,
  /* 469 */  OCAML_C_CALL3, 6,
  /* 471 */  OCAML_RETURN, 3,
  /* 473 */  OCAML_RESTART,
  /* 474 */  OCAML_GRAB, 1,
  /* 476 */  OCAML_CONST1,
  /* 477 */  OCAML_PUSHACC2,
  /* 478 */  OCAML_PUSHGETGLOBAL_1B, 5,
  /* 480 */  OCAML_APPLY2,
  /* 481 */  OCAML_CONST0,
  /* 482 */  OCAML_PUSHACC1,
  /* 483 */  OCAML_PUSHGETGLOBAL_1B, 5,
  /* 485 */  OCAML_APPTERM2, 4,
  /* 487 */  OCAML_RESTART,
  /* 488 */  OCAML_GRAB, 1,
  /* 490 */  OCAML_CONST0,
  /* 491 */  OCAML_PUSHACC2,
  /* 492 */  OCAML_PUSHGETGLOBAL_1B, 5,
  /* 494 */  OCAML_APPLY2,
  /* 495 */  OCAML_CONST0,
  /* 496 */  OCAML_PUSHACC1,
  /* 497 */  OCAML_PUSHGETGLOBAL_1B, 5,
  /* 499 */  OCAML_APPTERM2, 4,
  /* 501 */  OCAML_ACC0,
  /* 502 */  OCAML_PUSHGETGLOBAL_1B, 11,
  /* 504 */  OCAML_PUSHGETGLOBAL_1B, 12,
  /* 506 */  OCAML_APPTERM2, 3,
  /* 508 */  OCAML_APPLY2,
  /* 509 */  OCAML_CONST1,
  /* 510 */  OCAML_PUSHCONSTINT_1B, 15,
  /* 512 */  OCAML_PUSHGETGLOBAL_1B, 4,
  /* 514 */  OCAML_APPLY2,
  /* 515 */  OCAML_CONST1,
  /* 516 */  OCAML_PUSHCONSTINT_1B, 16,
  /* 518 */  OCAML_PUSHGETGLOBAL_1B, 4,
  /* 520 */  OCAML_APPLY2,
  /* 521 */  OCAML_CONST1,
  /* 522 */  OCAML_PUSHACC3,
  /* 523 */  OCAML_PUSHGETGLOBAL_1B, 4,
  /* 525 */  OCAML_APPLY2,
  /* 526 */  OCAML_CONST1,
  /* 527 */  OCAML_PUSHACC2,
  /* 528 */  OCAML_PUSHGETGLOBAL_1B, 4,
  /* 530 */  OCAML_APPLY2,
  /* 531 */  OCAML_CONST1,
  /* 532 */  OCAML_PUSHACC1,
  /* 533 */  OCAML_PUSHGETGLOBAL_1B, 4,
  /* 535 */  OCAML_APPLY2,
  /* 536 */  OCAML_CONSTINT_1B, 16,
  /* 538 */  OCAML_PUSHCONSTINT_1B, 15,
  /* 540 */  OCAML_PUSHCONSTINT_1B, 17,
  /* 542 */  OCAML_PUSHGETGLOBAL_1B, 13,
  /* 544 */  OCAML_APPLY3,
  /* 545 */  OCAML_ACC0,
  /* 546 */  OCAML_PUSHACC2,
  /* 547 */  OCAML_PUSHACC4,
  /* 548 */  OCAML_PUSHGETGLOBAL_1B, 14,
  /* 550 */  OCAML_APPLY3,
  /* 551 */  OCAML_BRANCH_1B, 23,
  /* 553 */  OCAML_CHECK_SIGNALS,
  /* 554 */  OCAML_CONST1,
  /* 555 */  OCAML_PUSHCONSTINT_1B, 10,
  /* 557 */  OCAML_PUSHCONSTINT_1B, 10,
  /* 559 */  OCAML_PUSHGETGLOBAL_1B, 15,
  /* 561 */  OCAML_APPLY3,
  /* 562 */  OCAML_CONST1,
  /* 563 */  OCAML_PUSHCONSTINT_1B, 11,
  /* 565 */  OCAML_PUSHCONSTINT_1B, 11,
  /* 567 */  OCAML_PUSHGETGLOBAL_1B, 15,
  /* 569 */  OCAML_APPLY3,
  /* 570 */  OCAML_CONST0,
  /* 571 */  OCAML_PUSHGETGLOBAL_1B, 16,
  /* 573 */  OCAML_APPLY1,
  /* 574 */  OCAML_CONST1,
  /* 575 */  OCAML_BRANCHIF_1B, (opcode_t) -22,
  /* 577 */  OCAML_POP, 3,
  /* 579 */  OCAML_STOP
};

#include </Users/travail/github/OMicroB/src/byterun/vm/runtime.c>
#include "buffer.c"

PROGMEM void * const ocaml_primitives[OCAML_PRIMITIVE_NUMBER] = {
  /*  0 */  (void *) &caml_array_unsafe_get,
  /*  1 */  (void *) &caml_avr_set_bit,
  /*  2 */  (void *) &caml_avr_clear_bit,
  /*  3 */  (void *) &caml_avr_write_register,
  /*  4 */  (void *) &caml_avr_read_bit,
  /*  5 */  (void *) &caml_buffer_get_byte,
  /*  6 */  (void *) &caml_buffer_write,
};
