#define OCAML_STACK_WOSIZE               32
#define OCAML_HEAP_WOSIZE               300
#define OCAML_HEAP_INITIAL_WOSIZE       141
#define OCAML_STACK_INITIAL_WOSIZE        5
#define OCAML_GLOBDATA_NUMBER            51
#define OCAML_BYTECODE_BSIZE            997
#define OCAML_PRIMITIVE_NUMBER           10
#define OCAML_VIRTUAL_ARCH               32
#define OCAML_STARTING_OOID               3

#define OCAML_GC_MARK_AND_COMPACT

#include </Users/travail/github/OMicroB/src/byterun/vm/values.h>

#define OCAML_ACC0                        0
#define OCAML_ACC1                        1
#define OCAML_ACC2                        2
#define OCAML_ACC3                        3
#define OCAML_ACC4                        4
#define OCAML_PUSH                        5
#define OCAML_PUSHACC1                    6
#define OCAML_PUSHACC2                    7
#define OCAML_PUSHACC3                    8
#define OCAML_PUSHACC4                    9
#define OCAML_PUSHACC5                   10
#define OCAML_POP                        11
#define OCAML_ASSIGN                     12
#define OCAML_APPLY1                     13
#define OCAML_APPLY2                     14
#define OCAML_APPLY3                     15
#define OCAML_APPTERM1                   16
#define OCAML_APPTERM2                   17
#define OCAML_APPTERM3                   18
#define OCAML_RETURN                     19
#define OCAML_RESTART                    20
#define OCAML_GRAB                       21
#define OCAML_PUSHOFFSETCLOSURE0         22
#define OCAML_GETGLOBAL_1B               23
#define OCAML_PUSHGETGLOBAL_1B           24
#define OCAML_GETFIELD0                  25
#define OCAML_GETFIELD1                  26
#define OCAML_SETFIELD0                  27
#define OCAML_VECTLENGTH                 28
#define OCAML_BRANCH_1B                  29
#define OCAML_BRANCH_2B                  30
#define OCAML_BRANCHIF_1B                31
#define OCAML_BRANCHIFNOT_1B             32
#define OCAML_SWITCH_1B                  33
#define OCAML_PUSHTRAP_1B                34
#define OCAML_POPTRAP                    35
#define OCAML_RAISE                      36
#define OCAML_CHECK_SIGNALS              37
#define OCAML_C_CALL1                    38
#define OCAML_C_CALL2                    39
#define OCAML_C_CALL3                    40
#define OCAML_CONST0                     41
#define OCAML_CONST1                     42
#define OCAML_CONST2                     43
#define OCAML_CONST3                     44
#define OCAML_CONSTINT_1B                45
#define OCAML_PUSHCONST0                 46
#define OCAML_PUSHCONST1                 47
#define OCAML_PUSHCONSTINT_1B            48
#define OCAML_PUSHCONSTINT_2B            49
#define OCAML_SUBINT                     50
#define OCAML_EQ                         51
#define OCAML_NEQ                        52
#define OCAML_GTINT                      53
#define OCAML_OFFSETINT_1B               54
#define OCAML_BNEQ_1B                    55
#define OCAML_STOP                       56

value ocaml_heap[OCAML_HEAP_WOSIZE] = {
  /*   0 */  Make_header(1, Closure_tag, Color_white),
  /*   1 */  Val_codeptr(637),
  /*   2 */  Make_header(1, Closure_tag, Color_white),
  /*   3 */  Val_codeptr(749),
  /*   4 */  Make_header(1, Closure_tag, Color_white),
  /*   5 */  Val_codeptr(951),
  /*   6 */  Make_header(2, Object_tag, Color_white),
  /*   7 */  Val_block(&ocaml_heap[10]),
  /*   8 */  Val_int(2),
  /*   9 */  Make_header(3, String_tag, Color_white),
  /*  10 */  Make_string_data('S', 'n', 'a', 'k'),
  /*  11 */  Make_string_data('e', '.', 'W', 'i'),
  /*  12 */  Make_string_data('n', '\0', '\0', '\2'),
  /*  13 */  Make_header(2, Object_tag, Color_white),
  /*  14 */  Val_block(&ocaml_heap[17]),
  /*  15 */  Val_int(1),
  /*  16 */  Make_header(3, String_tag, Color_white),
  /*  17 */  Make_string_data('S', 'n', 'a', 'k'),
  /*  18 */  Make_string_data('e', '.', 'L', 'o'),
  /*  19 */  Make_string_data('s', 'e', '\0', '\1'),
  /*  20 */  Make_header(1, Closure_tag, Color_white),
  /*  21 */  Val_codeptr(302),
  /*  22 */  Make_header(1, Closure_tag, Color_white),
  /*  23 */  Val_codeptr(134),
  /*  24 */  Make_header(1, Closure_tag, Color_white),
  /*  25 */  Val_codeptr(398),
  /*  26 */  Make_header(1, Closure_tag, Color_white),
  /*  27 */  Val_codeptr(246),
  /*  28 */  Make_header(1, Closure_tag, Color_white),
  /*  29 */  Val_codeptr(190),
  /*  30 */  Make_header(1, Closure_tag, Color_white),
  /*  31 */  Val_codeptr(350),
  /*  32 */  Make_header(1, Closure_tag, Color_white),
  /*  33 */  Val_codeptr(83),
  /*  34 */  Make_header(1, Closure_tag, Color_white),
  /*  35 */  Val_codeptr(57),
  /*  36 */  Make_header(1, Closure_tag, Color_white),
  /*  37 */  Val_codeptr(612),
  /*  38 */  Make_header(13, 0, Color_white),
  /*  39 */  Val_int(213),
  /*  40 */  Val_int(240),
  /*  41 */  Val_int(141),
  /*  42 */  Val_int(20),
  /*  43 */  Val_int(161),
  /*  44 */  Val_int(200),
  /*  45 */  Val_int(129),
  /*  46 */  Val_int(207),
  /*  47 */  Val_int(217),
  /*  48 */  Val_int(241),
  /*  49 */  Val_int(175),
  /*  50 */  Val_int(32),
  /*  51 */  Val_int(0),
  /*  52 */  Make_header(1, Closure_tag, Color_white),
  /*  53 */  Val_codeptr(630),
  /*  54 */  Make_header(1, Closure_tag, Color_white),
  /*  55 */  Val_codeptr(598),
  /*  56 */  Make_header(1, Closure_tag, Color_white),
  /*  57 */  Val_codeptr(560),
  /*  58 */  Make_header(1, Closure_tag, Color_white),
  /*  59 */  Val_codeptr(442),
  /*  60 */  Make_header(1, Closure_tag, Color_white),
  /*  61 */  Val_codeptr(4),
  /*  62 */  Make_header(1, Closure_tag, Color_white),
  /*  63 */  Val_codeptr(463),
  /*  64 */  Make_header(1, Closure_tag, Color_white),
  /*  65 */  Val_codeptr(660),
  /*  66 */  Make_header(1, Closure_tag, Color_white),
  /*  67 */  Val_codeptr(494),
  /*  68 */  Make_header(1, Closure_tag, Color_white),
  /*  69 */  Val_codeptr(731),
  /*  70 */  Make_header(1, Closure_tag, Color_white),
  /*  71 */  Val_codeptr(823),
  /*  72 */  Make_header(1, 0, Color_white),
  /*  73 */  Val_int(0),
  /*  74 */  Make_header(20, 0, Color_white),
  /*  75 */  Val_block(&ocaml_heap[96]),
  /*  76 */  Val_block(&ocaml_heap[96]),
  /*  77 */  Val_block(&ocaml_heap[96]),
  /*  78 */  Val_block(&ocaml_heap[96]),
  /*  79 */  Val_block(&ocaml_heap[96]),
  /*  80 */  Val_block(&ocaml_heap[96]),
  /*  81 */  Val_block(&ocaml_heap[96]),
  /*  82 */  Val_block(&ocaml_heap[96]),
  /*  83 */  Val_block(&ocaml_heap[96]),
  /*  84 */  Val_block(&ocaml_heap[96]),
  /*  85 */  Val_block(&ocaml_heap[96]),
  /*  86 */  Val_block(&ocaml_heap[96]),
  /*  87 */  Val_block(&ocaml_heap[96]),
  /*  88 */  Val_block(&ocaml_heap[96]),
  /*  89 */  Val_block(&ocaml_heap[96]),
  /*  90 */  Val_block(&ocaml_heap[96]),
  /*  91 */  Val_block(&ocaml_heap[96]),
  /*  92 */  Val_block(&ocaml_heap[96]),
  /*  93 */  Val_block(&ocaml_heap[96]),
  /*  94 */  Val_block(&ocaml_heap[96]),
  /*  95 */  Make_header(2, 0, Color_white),
  /*  96 */  Val_int(0),
  /*  97 */  Val_int(0),
  /*  98 */  Make_header(1, Closure_tag, Color_white),
  /*  99 */  Val_codeptr(857),
  /* 100 */  Make_header(1, Closure_tag, Color_white),
  /* 101 */  Val_codeptr(806),
  /* 102 */  Make_header(1, 0, Color_white),
  /* 103 */  Val_int(1),
  /* 104 */  Make_header(1, Closure_tag, Color_white),
  /* 105 */  Val_codeptr(809),
  /* 106 */  Make_header(1, Closure_tag, Color_white),
  /* 107 */  Val_codeptr(531),
  /* 108 */  Make_header(1, Closure_tag, Color_white),
  /* 109 */  Val_codeptr(854),
  /* 110 */  Make_header(1, 0, Color_white),
  /* 111 */  Val_int(1),
  /* 112 */  Make_header(1, 0, Color_white),
  /* 113 */  Val_block(&ocaml_heap[115]),
  /* 114 */  Make_header(2, 0, Color_white),
  /* 115 */  Val_int(10),
  /* 116 */  Val_int(10),
  /* 117 */  Make_header(1, Closure_tag, Color_white),
  /* 118 */  Val_codeptr(588),
  /* 119 */  Make_header(2, 0, Color_white),
  /* 120 */  Val_int(0),
  /* 121 */  Val_int(0),
  /* 122 */  Make_header(2, 0, Color_white),
  /* 123 */  Val_int(0),
  /* 124 */  Val_int(0),
  /* 125 */  Make_header(2, 0, Color_white),
  /* 126 */  Val_int(0),
  /* 127 */  Val_int(0),
  /* 128 */  Make_header(2, 0, Color_white),
  /* 129 */  Val_int(0),
  /* 130 */  Val_int(0),
  /* 131 */  Make_header(1, Closure_tag, Color_white),
  /* 132 */  Val_codeptr(36),
  /* 133 */  Make_header(1, 0, Color_white),
  /* 134 */  Val_int(1),
  /* 135 */  Make_header(1, Closure_tag, Color_white),
  /* 136 */  Val_codeptr(931),
  /* 137 */  Make_header(1, 0, Color_white),
  /* 138 */  Val_int(1),
  /* 139 */  Make_header(1, Closure_tag, Color_white),
  /* 140 */  Val_codeptr(911)
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
  /* 27 */  Val_int(0),
  /* 28 */  Val_block(&ocaml_heap[3]),
  /* 29 */  Val_block(&ocaml_heap[5]),
  /* 30 */  Val_block(&ocaml_heap[7]),
  /* 31 */  Val_block(&ocaml_heap[14])
};

value ocaml_global_data[OCAML_GLOBDATA_NUMBER] = {
  /*  0 */  Val_block(&ocaml_heap[21]),
  /*  1 */  Val_block(&ocaml_heap[23]),
  /*  2 */  Val_block(&ocaml_heap[25]),
  /*  3 */  Val_block(&ocaml_heap[27]),
  /*  4 */  Val_block(&ocaml_heap[29]),
  /*  5 */  Val_block(&ocaml_heap[31]),
  /*  6 */  Val_block(&ocaml_heap[33]),
  /*  7 */  Val_block(&ocaml_heap[35]),
  /*  8 */  Val_block(&ocaml_heap[37]),
  /*  9 */  Val_block(&ocaml_heap[39]),
  /* 10 */  Val_block(&ocaml_heap[53]),
  /* 11 */  Val_block(&ocaml_heap[55]),
  /* 12 */  Val_block(&ocaml_heap[57]),
  /* 13 */  Val_block(&ocaml_heap[59]),
  /* 14 */  Val_block(&ocaml_heap[61]),
  /* 15 */  Val_block(&ocaml_heap[63]),
  /* 16 */  Val_block(&ocaml_heap[65]),
  /* 17 */  Val_int(6),
  /* 18 */  Val_int(4),
  /* 19 */  Val_int(12),
  /* 20 */  Val_block(&ocaml_heap[67]),
  /* 21 */  Val_int(20),
  /* 22 */  Val_int(19),
  /* 23 */  Val_int(10),
  /* 24 */  Val_int(9),
  /* 25 */  Val_int(11),
  /* 26 */  Val_int(7),
  /* 27 */  Val_int(8),
  /* 28 */  Val_block(&ocaml_heap[69]),
  /* 29 */  Val_block(&ocaml_heap[71]),
  /* 30 */  Val_block(&ocaml_heap[73]),
  /* 31 */  Val_block(&ocaml_heap[75]),
  /* 32 */  Val_block(&ocaml_heap[99]),
  /* 33 */  Val_block(&ocaml_heap[101]),
  /* 34 */  Val_block(&ocaml_heap[103]),
  /* 35 */  Val_block(&ocaml_heap[105]),
  /* 36 */  Val_block(&ocaml_heap[107]),
  /* 37 */  Val_block(&ocaml_heap[109]),
  /* 38 */  Val_block(&ocaml_heap[111]),
  /* 39 */  Val_block(&ocaml_heap[113]),
  /* 40 */  Val_block(&ocaml_heap[118]),
  /* 41 */  Val_block(&ocaml_heap[120]),
  /* 42 */  Val_block(&ocaml_heap[123]),
  /* 43 */  Val_block(&ocaml_heap[126]),
  /* 44 */  Val_block(&ocaml_heap[129]),
  /* 45 */  Val_block(&ocaml_heap[132]),
  /* 46 */  Val_block(&ocaml_heap[134]),
  /* 47 */  Val_block(&ocaml_heap[136]),
  /* 48 */  Val_block(&ocaml_heap[138]),
  /* 49 */  Val_block(&ocaml_heap[140]),
  /* 50 */  Val_block(&ocaml_heap[115])
};

PROGMEM opcode_t const ocaml_bytecode[OCAML_BYTECODE_BSIZE] = {
  /*   0 */  OCAML_BRANCH_2B, 3, 187,
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
  /*  36 */  OCAML_ACC0,
  /*  37 */  OCAML_PUSHGETGLOBAL_1B, 0,
  /*  39 */  OCAML_APPLY1,
  /*  40 */  OCAML_PUSHACC1,
  /*  41 */  OCAML_PUSHGETGLOBAL_1B, 1,
  /*  43 */  OCAML_APPLY1,
  /*  44 */  OCAML_PUSH,
  /*  45 */  OCAML_PUSHACC2,
  /*  46 */  OCAML_C_CALL2, 1,
  /*  48 */  OCAML_PUSH,
  /*  49 */  OCAML_PUSHCONST0,
  /*  50 */  OCAML_NEQ,
  /*  51 */  OCAML_BRANCHIFNOT_1B, 3,
  /*  53 */  OCAML_CONST1,
  /*  54 */  OCAML_RETURN, 4,
  /*  56 */  OCAML_RESTART,
  /*  57 */  OCAML_GRAB, 1,
  /*  59 */  OCAML_ACC0,
  /*  60 */  OCAML_PUSHGETGLOBAL_1B, 2,
  /*  62 */  OCAML_APPLY1,
  /*  63 */  OCAML_PUSHACC1,
  /*  64 */  OCAML_PUSHGETGLOBAL_1B, 3,
  /*  66 */  OCAML_APPLY1,
  /*  67 */  OCAML_PUSHACC3,
  /*  68 */  OCAML_BRANCHIFNOT_1B, 8,
  /*  70 */  OCAML_ACC0,
  /*  71 */  OCAML_PUSHACC2,
  /*  72 */  OCAML_C_CALL2, 2,
  /*  74 */  OCAML_RETURN, 4,
  /*  76 */  OCAML_ACC0,
  /*  77 */  OCAML_PUSHACC2,
  /*  78 */  OCAML_C_CALL2, 3,
  /*  80 */  OCAML_RETURN, 4,
  /*  82 */  OCAML_RESTART,
  /*  83 */  OCAML_GRAB, 1,
  /*  85 */  OCAML_ACC0,
  /*  86 */  OCAML_PUSHGETGLOBAL_1B, 2,
  /*  88 */  OCAML_APPLY1,
  /*  89 */  OCAML_PUSHACC1,
  /*  90 */  OCAML_PUSHGETGLOBAL_1B, 3,
  /*  92 */  OCAML_APPLY1,
  /*  93 */  OCAML_PUSHACC2,
  /*  94 */  OCAML_PUSHGETGLOBAL_1B, 4,
  /*  96 */  OCAML_APPLY1,
  /*  97 */  OCAML_PUSHACC3,
  /*  98 */  OCAML_PUSHGETGLOBAL_1B, 5,
  /* 100 */  OCAML_APPLY1,
  /* 101 */  OCAML_PUSHACC5,
  /* 102 */  OCAML_SWITCH_1B, 3, 0, 6, 16, 22,
  /* 108 */  OCAML_ACC1,
  /* 109 */  OCAML_PUSHACC1,
  /* 110 */  OCAML_C_CALL2, 3,
  /* 112 */  OCAML_ACC2,
  /* 113 */  OCAML_PUSHACC4,
  /* 114 */  OCAML_C_CALL2, 3,
  /* 116 */  OCAML_RETURN, 6,
  /* 118 */  OCAML_ACC1,
  /* 119 */  OCAML_PUSHACC1,
  /* 120 */  OCAML_C_CALL2, 2,
  /* 122 */  OCAML_RETURN, 6,
  /* 124 */  OCAML_ACC1,
  /* 125 */  OCAML_PUSHACC1,
  /* 126 */  OCAML_C_CALL2, 3,
  /* 128 */  OCAML_ACC2,
  /* 129 */  OCAML_PUSHACC4,
  /* 130 */  OCAML_C_CALL2, 2,
  /* 132 */  OCAML_RETURN, 6,
  /* 134 */  OCAML_ACC0,
  /* 135 */  OCAML_SWITCH_1B, 24, 0, 27, 30, 33, 36, 39, 43, 47, 43, 39, 51, 43, 47, 43, 47, 30, 33, 27, 36, 47, 43, 51, 39, 33, 36,
  /* 162 */  OCAML_CONST2,
  /* 163 */  OCAML_RETURN, 1,
  /* 165 */  OCAML_CONST3,
  /* 166 */  OCAML_RETURN, 1,
  /* 168 */  OCAML_CONST1,
  /* 169 */  OCAML_RETURN, 1,
  /* 171 */  OCAML_CONST0,
  /* 172 */  OCAML_RETURN, 1,
  /* 174 */  OCAML_CONSTINT_1B, 4,
  /* 176 */  OCAML_RETURN, 1,
  /* 178 */  OCAML_CONSTINT_1B, 6,
  /* 180 */  OCAML_RETURN, 1,
  /* 182 */  OCAML_CONSTINT_1B, 7,
  /* 184 */  OCAML_RETURN, 1,
  /* 186 */  OCAML_CONSTINT_1B, 5,
  /* 188 */  OCAML_RETURN, 1,
  /* 190 */  OCAML_ACC0,
  /* 191 */  OCAML_SWITCH_1B, 24, 0, 27, 30, 33, 36, 39, 43, 47, 43, 39, 51, 43, 47, 43, 47, 30, 33, 27, 36, 47, 43, 51, 39, 33, 36,
  /* 218 */  OCAML_CONST2,
  /* 219 */  OCAML_RETURN, 1,
  /* 221 */  OCAML_CONST3,
  /* 222 */  OCAML_RETURN, 1,
  /* 224 */  OCAML_CONST1,
  /* 225 */  OCAML_RETURN, 1,
  /* 227 */  OCAML_CONST0,
  /* 228 */  OCAML_RETURN, 1,
  /* 230 */  OCAML_CONSTINT_1B, 4,
  /* 232 */  OCAML_RETURN, 1,
  /* 234 */  OCAML_CONSTINT_1B, 6,
  /* 236 */  OCAML_RETURN, 1,
  /* 238 */  OCAML_CONSTINT_1B, 7,
  /* 240 */  OCAML_RETURN, 1,
  /* 242 */  OCAML_CONSTINT_1B, 5,
  /* 244 */  OCAML_RETURN, 1,
  /* 246 */  OCAML_ACC0,
  /* 247 */  OCAML_SWITCH_1B, 24, 0, 27, 30, 33, 36, 39, 43, 47, 43, 39, 51, 43, 47, 43, 47, 30, 33, 27, 36, 47, 43, 51, 39, 33, 36,
  /* 274 */  OCAML_CONST2,
  /* 275 */  OCAML_RETURN, 1,
  /* 277 */  OCAML_CONST3,
  /* 278 */  OCAML_RETURN, 1,
  /* 280 */  OCAML_CONST1,
  /* 281 */  OCAML_RETURN, 1,
  /* 283 */  OCAML_CONST0,
  /* 284 */  OCAML_RETURN, 1,
  /* 286 */  OCAML_CONSTINT_1B, 4,
  /* 288 */  OCAML_RETURN, 1,
  /* 290 */  OCAML_CONSTINT_1B, 6,
  /* 292 */  OCAML_RETURN, 1,
  /* 294 */  OCAML_CONSTINT_1B, 7,
  /* 296 */  OCAML_RETURN, 1,
  /* 298 */  OCAML_CONSTINT_1B, 5,
  /* 300 */  OCAML_RETURN, 1,
  /* 302 */  OCAML_ACC0,
  /* 303 */  OCAML_SWITCH_1B, 24, 0, 31, 31, 31, 31, 31, 35, 31, 27, 39, 39, 39, 39, 31, 35, 39, 39, 39, 39, 43, 43, 43, 43, 43, 43,
  /* 330 */  OCAML_CONSTINT_1B, 13,
  /* 332 */  OCAML_RETURN, 1,
  /* 334 */  OCAML_CONSTINT_1B, 12,
  /* 336 */  OCAML_RETURN, 1,
  /* 338 */  OCAML_CONSTINT_1B, 11,
  /* 340 */  OCAML_RETURN, 1,
  /* 342 */  OCAML_CONSTINT_1B, 10,
  /* 344 */  OCAML_RETURN, 1,
  /* 346 */  OCAML_CONSTINT_1B, 14,
  /* 348 */  OCAML_RETURN, 1,
  /* 350 */  OCAML_ACC0,
  /* 351 */  OCAML_SWITCH_1B, 24, 0, 31, 31, 31, 31, 31, 35, 31, 27, 39, 39, 39, 39, 31, 35, 39, 39, 39, 39, 43, 43, 43, 43, 43, 43,
  /* 378 */  OCAML_CONSTINT_1B, 8,
  /* 380 */  OCAML_RETURN, 1,
  /* 382 */  OCAML_CONSTINT_1B, 7,
  /* 384 */  OCAML_RETURN, 1,
  /* 386 */  OCAML_CONSTINT_1B, 6,
  /* 388 */  OCAML_RETURN, 1,
  /* 390 */  OCAML_CONSTINT_1B, 5,
  /* 392 */  OCAML_RETURN, 1,
  /* 394 */  OCAML_CONSTINT_1B, 9,
  /* 396 */  OCAML_RETURN, 1,
  /* 398 */  OCAML_ACC0,
  /* 399 */  OCAML_SWITCH_1B, 24, 0, 30, 30, 30, 30, 30, 33, 30, 27, 36, 36, 36, 36, 30, 33, 36, 36, 36, 36, 39, 39, 39, 39, 39, 39,
  /* 426 */  OCAML_CONST3,
  /* 427 */  OCAML_RETURN, 1,
  /* 429 */  OCAML_CONST2,
  /* 430 */  OCAML_RETURN, 1,
  /* 432 */  OCAML_CONST1,
  /* 433 */  OCAML_RETURN, 1,
  /* 435 */  OCAML_CONST0,
  /* 436 */  OCAML_RETURN, 1,
  /* 438 */  OCAML_CONSTINT_1B, 4,
  /* 440 */  OCAML_RETURN, 1,
  /* 442 */  OCAML_ACC0,
  /* 443 */  OCAML_PUSHCONSTINT_1B, 17,
  /* 445 */  OCAML_C_CALL2, 4,
  /* 447 */  OCAML_BRANCH_1B, 4,
  /* 449 */  OCAML_CHECK_SIGNALS,
  /* 450 */  OCAML_CONST0,
  /* 451 */  OCAML_CONST0,
  /* 452 */  OCAML_PUSHCONSTINT_1B, 16,
  /* 454 */  OCAML_C_CALL2, 1,
  /* 456 */  OCAML_BNEQ_1B, 1, (opcode_t) -7,
  /* 459 */  OCAML_CONST0,
  /* 460 */  OCAML_RETURN, 1,
  /* 462 */  OCAML_RESTART,
  /* 463 */  OCAML_GRAB, 2,
  /* 465 */  OCAML_CONST1,
  /* 466 */  OCAML_PUSHACC1,
  /* 467 */  OCAML_PUSHGETGLOBAL_1B, 6,
  /* 469 */  OCAML_APPLY2,
  /* 470 */  OCAML_CONSTINT_1B, 4,
  /* 472 */  OCAML_PUSHCONSTINT_1B, 15,
  /* 474 */  OCAML_C_CALL2, 2,
  /* 476 */  OCAML_CONSTINT_1B, 6,
  /* 478 */  OCAML_PUSHCONSTINT_1B, 15,
  /* 480 */  OCAML_C_CALL2, 2,
  /* 482 */  OCAML_CONST1,
  /* 483 */  OCAML_PUSHACC2,
  /* 484 */  OCAML_PUSHGETGLOBAL_1B, 6,
  /* 486 */  OCAML_APPLY2,
  /* 487 */  OCAML_CONST1,
  /* 488 */  OCAML_PUSHACC3,
  /* 489 */  OCAML_PUSHGETGLOBAL_1B, 6,
  /* 491 */  OCAML_APPTERM2, 5,
  /* 493 */  OCAML_RESTART,
  /* 494 */  OCAML_GRAB, 2,
  /* 496 */  OCAML_CONST1,
  /* 497 */  OCAML_PUSHACC3,
  /* 498 */  OCAML_PUSHGETGLOBAL_1B, 7,
  /* 500 */  OCAML_APPLY2,
  /* 501 */  OCAML_CONST0,
  /* 502 */  OCAML_PUSHACC3,
  /* 503 */  OCAML_PUSHGETGLOBAL_1B, 7,
  /* 505 */  OCAML_APPLY2,
  /* 506 */  OCAML_CONST1,
  /* 507 */  OCAML_PUSHACC3,
  /* 508 */  OCAML_PUSHGETGLOBAL_1B, 7,
  /* 510 */  OCAML_APPLY2,
  /* 511 */  OCAML_ACC1,
  /* 512 */  OCAML_PUSHACC1,
  /* 513 */  OCAML_PUSHGETGLOBAL_1B, 8,
  /* 515 */  OCAML_APPLY2,
  /* 516 */  OCAML_GETGLOBAL_1B, 9,
  /* 518 */  OCAML_PUSHGETGLOBAL_1B, 10,
  /* 520 */  OCAML_APPLY1,
  /* 521 */  OCAML_ACC1,
  /* 522 */  OCAML_PUSHACC1,
  /* 523 */  OCAML_PUSHGETGLOBAL_1B, 11,
  /* 525 */  OCAML_APPLY2,
  /* 526 */  OCAML_CONST0,
  /* 527 */  OCAML_PUSHGETGLOBAL_1B, 12,
  /* 529 */  OCAML_APPTERM1, 4,
  /* 531 */  OCAML_CONST0,
  /* 532 */  OCAML_PUSHCONSTINT_2B, 3, 255,
  /* 535 */  OCAML_PUSH,
  /* 536 */  OCAML_PUSHACC2,
  /* 537 */  OCAML_GTINT,
  /* 538 */  OCAML_BRANCHIF_1B, 19,
  /* 540 */  OCAML_CHECK_SIGNALS,
  /* 541 */  OCAML_CONST0,
  /* 542 */  OCAML_C_CALL1, 5,
  /* 544 */  OCAML_PUSHGETGLOBAL_1B, 13,
  /* 546 */  OCAML_APPLY1,
  /* 547 */  OCAML_ACC1,
  /* 548 */  OCAML_PUSH,
  /* 549 */  OCAML_OFFSETINT_1B, 1,
  /* 551 */  OCAML_ASSIGN, 2,
  /* 553 */  OCAML_ACC1,
  /* 554 */  OCAML_NEQ,
  /* 555 */  OCAML_BRANCHIF_1B, (opcode_t) -15,
  /* 557 */  OCAML_CONST0,
  /* 558 */  OCAML_RETURN, 3,
  /* 560 */  OCAML_CONST0,
  /* 561 */  OCAML_PUSHCONSTINT_2B, 3, 255,
  /* 564 */  OCAML_PUSH,
  /* 565 */  OCAML_PUSHACC2,
  /* 566 */  OCAML_GTINT,
  /* 567 */  OCAML_BRANCHIF_1B, 17,
  /* 569 */  OCAML_CHECK_SIGNALS,
  /* 570 */  OCAML_CONST0,
  /* 571 */  OCAML_PUSHGETGLOBAL_1B, 13,
  /* 573 */  OCAML_APPLY1,
  /* 574 */  OCAML_ACC1,
  /* 575 */  OCAML_PUSH,
  /* 576 */  OCAML_OFFSETINT_1B, 1,
  /* 578 */  OCAML_ASSIGN, 2,
  /* 580 */  OCAML_ACC1,
  /* 581 */  OCAML_NEQ,
  /* 582 */  OCAML_BRANCHIF_1B, (opcode_t) -13,
  /* 584 */  OCAML_CONST0,
  /* 585 */  OCAML_RETURN, 3,
  /* 587 */  OCAML_RESTART,
  /* 588 */  OCAML_GRAB, 2,
  /* 590 */  OCAML_ACC2,
  /* 591 */  OCAML_PUSHACC2,
  /* 592 */  OCAML_PUSHACC2,
  /* 593 */  OCAML_C_CALL3, 6,
  /* 595 */  OCAML_RETURN, 3,
  /* 597 */  OCAML_RESTART,
  /* 598 */  OCAML_GRAB, 1,
  /* 600 */  OCAML_CONST1,
  /* 601 */  OCAML_PUSHACC2,
  /* 602 */  OCAML_PUSHGETGLOBAL_1B, 7,
  /* 604 */  OCAML_APPLY2,
  /* 605 */  OCAML_CONST0,
  /* 606 */  OCAML_PUSHACC1,
  /* 607 */  OCAML_PUSHGETGLOBAL_1B, 7,
  /* 609 */  OCAML_APPTERM2, 4,
  /* 611 */  OCAML_RESTART,
  /* 612 */  OCAML_GRAB, 1,
  /* 614 */  OCAML_CONST1,
  /* 615 */  OCAML_PUSHACC1,
  /* 616 */  OCAML_PUSHGETGLOBAL_1B, 7,
  /* 618 */  OCAML_APPLY2,
  /* 619 */  OCAML_CONST0,
  /* 620 */  OCAML_PUSHACC2,
  /* 621 */  OCAML_PUSHGETGLOBAL_1B, 7,
  /* 623 */  OCAML_APPLY2,
  /* 624 */  OCAML_CONST0,
  /* 625 */  OCAML_PUSHACC1,
  /* 626 */  OCAML_PUSHGETGLOBAL_1B, 7,
  /* 628 */  OCAML_APPTERM2, 4,
  /* 630 */  OCAML_ACC0,
  /* 631 */  OCAML_PUSHGETGLOBAL_1B, 13,
  /* 633 */  OCAML_PUSHGETGLOBAL_1B, 14,
  /* 635 */  OCAML_APPTERM2, 3,
  /* 637 */  OCAML_CONSTINT_1B, 16,
  /* 639 */  OCAML_PUSHCONSTINT_1B, 15,
  /* 641 */  OCAML_PUSHCONSTINT_1B, 17,
  /* 643 */  OCAML_PUSHGETGLOBAL_1B, 15,
  /* 645 */  OCAML_APPLY3,
  /* 646 */  OCAML_CONST0,
  /* 647 */  OCAML_PUSHGETGLOBAL_1B, 16,
  /* 649 */  OCAML_APPLY1,
  /* 650 */  OCAML_GETGLOBAL_1B, 17,
  /* 652 */  OCAML_PUSHGETGLOBAL_1B, 18,
  /* 654 */  OCAML_PUSHGETGLOBAL_1B, 19,
  /* 656 */  OCAML_PUSHGETGLOBAL_1B, 20,
  /* 658 */  OCAML_APPTERM3, 4,
  /* 660 */  OCAML_CONST2,
  /* 661 */  OCAML_PUSHGETGLOBAL_1B, 21,
  /* 663 */  OCAML_PUSHGETGLOBAL_1B, 6,
  /* 665 */  OCAML_APPLY2,
  /* 666 */  OCAML_CONST2,
  /* 667 */  OCAML_PUSHGETGLOBAL_1B, 22,
  /* 669 */  OCAML_PUSHGETGLOBAL_1B, 6,
  /* 671 */  OCAML_APPLY2,
  /* 672 */  OCAML_CONST1,
  /* 673 */  OCAML_PUSHGETGLOBAL_1B, 23,
  /* 675 */  OCAML_PUSHGETGLOBAL_1B, 6,
  /* 677 */  OCAML_APPLY2,
  /* 678 */  OCAML_CONST1,
  /* 679 */  OCAML_PUSHGETGLOBAL_1B, 24,
  /* 681 */  OCAML_PUSHGETGLOBAL_1B, 6,
  /* 683 */  OCAML_APPLY2,
  /* 684 */  OCAML_CONST1,
  /* 685 */  OCAML_PUSHGETGLOBAL_1B, 25,
  /* 687 */  OCAML_PUSHGETGLOBAL_1B, 6,
  /* 689 */  OCAML_APPLY2,
  /* 690 */  OCAML_CONST2,
  /* 691 */  OCAML_PUSHGETGLOBAL_1B, 26,
  /* 693 */  OCAML_PUSHGETGLOBAL_1B, 6,
  /* 695 */  OCAML_APPLY2,
  /* 696 */  OCAML_CONST2,
  /* 697 */  OCAML_PUSHGETGLOBAL_1B, 27,
  /* 699 */  OCAML_PUSHGETGLOBAL_1B, 6,
  /* 701 */  OCAML_APPLY2,
  /* 702 */  OCAML_CONST1,
  /* 703 */  OCAML_PUSHGETGLOBAL_1B, 19,
  /* 705 */  OCAML_PUSHGETGLOBAL_1B, 6,
  /* 707 */  OCAML_APPLY2,
  /* 708 */  OCAML_CONST1,
  /* 709 */  OCAML_PUSHGETGLOBAL_1B, 18,
  /* 711 */  OCAML_PUSHGETGLOBAL_1B, 6,
  /* 713 */  OCAML_APPLY2,
  /* 714 */  OCAML_CONST1,
  /* 715 */  OCAML_PUSHGETGLOBAL_1B, 17,
  /* 717 */  OCAML_PUSHGETGLOBAL_1B, 6,
  /* 719 */  OCAML_APPLY2,
  /* 720 */  OCAML_GETGLOBAL_1B, 25,
  /* 722 */  OCAML_PUSHGETGLOBAL_1B, 24,
  /* 724 */  OCAML_PUSHGETGLOBAL_1B, 23,
  /* 726 */  OCAML_PUSHGETGLOBAL_1B, 28,
  /* 728 */  OCAML_APPTERM3, 4,
  /* 730 */  OCAML_RESTART,
  /* 731 */  OCAML_GRAB, 2,
  /* 733 */  OCAML_CONST1,
  /* 734 */  OCAML_PUSHACC1,
  /* 735 */  OCAML_PUSHGETGLOBAL_1B, 7,
  /* 737 */  OCAML_APPLY2,
  /* 738 */  OCAML_CONST1,
  /* 739 */  OCAML_PUSHACC2,
  /* 740 */  OCAML_PUSHGETGLOBAL_1B, 7,
  /* 742 */  OCAML_APPLY2,
  /* 743 */  OCAML_CONST1,
  /* 744 */  OCAML_PUSHACC3,
  /* 745 */  OCAML_PUSHGETGLOBAL_1B, 7,
  /* 747 */  OCAML_APPTERM2, 5,
  /* 749 */  OCAML_ACC0,
  /* 750 */  OCAML_PUSHGETGLOBAL_1B, 29,
  /* 752 */  OCAML_APPLY1,
  /* 753 */  OCAML_PUSHGETGLOBAL_1B, 30,
  /* 755 */  OCAML_GETFIELD0,
  /* 756 */  OCAML_PUSHGETGLOBAL_1B, 31,
  /* 758 */  OCAML_C_CALL2, 7,
  /* 760 */  OCAML_PUSHACC2,
  /* 761 */  OCAML_PUSHGETGLOBAL_1B, 32,
  /* 763 */  OCAML_APPLY1,
  /* 764 */  OCAML_PUSHCONST0,
  /* 765 */  OCAML_PUSHGETGLOBAL_1B, 33,
  /* 767 */  OCAML_APPLY1,
  /* 768 */  OCAML_BRANCHIFNOT_1B, 5,
  /* 770 */  OCAML_CONST0,
  /* 771 */  OCAML_BRANCH_1B, 3,
  /* 773 */  OCAML_CONST0,
  /* 774 */  OCAML_ACC2,
  /* 775 */  OCAML_PUSHGETGLOBAL_1B, 34,
  /* 777 */  OCAML_GETFIELD0,
  /* 778 */  OCAML_PUSHGETGLOBAL_1B, 31,
  /* 780 */  OCAML_C_CALL3, 8,
  /* 782 */  OCAML_CONST0,
  /* 783 */  OCAML_PUSHGETGLOBAL_1B, 35,
  /* 785 */  OCAML_APPLY1,
  /* 786 */  OCAML_CONST0,
  /* 787 */  OCAML_PUSHGETGLOBAL_1B, 36,
  /* 789 */  OCAML_APPLY1,
  /* 790 */  OCAML_CONST0,
  /* 791 */  OCAML_PUSHGETGLOBAL_1B, 37,
  /* 793 */  OCAML_APPLY1,
  /* 794 */  OCAML_GETGLOBAL_1B, 38,
  /* 796 */  OCAML_GETFIELD0,
  /* 797 */  OCAML_PUSHCONSTINT_1B, 100,
  /* 799 */  OCAML_SUBINT,
  /* 800 */  OCAML_C_CALL1, 9,
  /* 802 */  OCAML_ACC0,
  /* 803 */  OCAML_PUSHOFFSETCLOSURE0,
  /* 804 */  OCAML_APPTERM1, 5,
  /* 806 */  OCAML_CONST0,
  /* 807 */  OCAML_RETURN, 1,
  /* 809 */  OCAML_GETGLOBAL_1B, 39,
  /* 811 */  OCAML_GETFIELD0,
  /* 812 */  OCAML_PUSH,
  /* 813 */  OCAML_GETFIELD1,
  /* 814 */  OCAML_PUSHACC1,
  /* 815 */  OCAML_GETFIELD0,
  /* 816 */  OCAML_PUSHCONST1,
  /* 817 */  OCAML_PUSHACC2,
  /* 818 */  OCAML_PUSHACC2,
  /* 819 */  OCAML_PUSHGETGLOBAL_1B, 40,
  /* 821 */  OCAML_APPTERM3, 7,
  /* 823 */  OCAML_GETGLOBAL_1B, 34,
  /* 825 */  OCAML_GETFIELD0,
  /* 826 */  OCAML_PUSHGETGLOBAL_1B, 31,
  /* 828 */  OCAML_C_CALL2, 7,
  /* 830 */  OCAML_PUSHACC1,
  /* 831 */  OCAML_SWITCH_1B, 4, 0, 7, 11, 15, 19,
  /* 838 */  OCAML_GETGLOBAL_1B, 41,
  /* 840 */  OCAML_RETURN, 2,
  /* 842 */  OCAML_GETGLOBAL_1B, 42,
  /* 844 */  OCAML_RETURN, 2,
  /* 846 */  OCAML_GETGLOBAL_1B, 43,
  /* 848 */  OCAML_RETURN, 2,
  /* 850 */  OCAML_GETGLOBAL_1B, 44,
  /* 852 */  OCAML_RETURN, 2,
  /* 854 */  OCAML_CONST0,
  /* 855 */  OCAML_RETURN, 1,
  /* 857 */  OCAML_GETGLOBAL_1B, 21,
  /* 859 */  OCAML_PUSHGETGLOBAL_1B, 45,
  /* 861 */  OCAML_APPLY1,
  /* 862 */  OCAML_PUSHGETGLOBAL_1B, 22,
  /* 864 */  OCAML_PUSHGETGLOBAL_1B, 45,
  /* 866 */  OCAML_APPLY1,
  /* 867 */  OCAML_PUSHACC1,
  /* 868 */  OCAML_PUSHACC1,
  /* 869 */  OCAML_PUSHACC1,
  /* 870 */  OCAML_BRANCHIF_1B, 13,
  /* 872 */  OCAML_GETGLOBAL_1B, 46,
  /* 874 */  OCAML_GETFIELD0,
  /* 875 */  OCAML_BRANCHIFNOT_1B, 8,
  /* 877 */  OCAML_ACC4,
  /* 878 */  OCAML_PUSHGETGLOBAL_1B, 47,
  /* 880 */  OCAML_APPLY1,
  /* 881 */  OCAML_BRANCH_1B, 17,
  /* 883 */  OCAML_ACC0,
  /* 884 */  OCAML_BRANCHIF_1B, 13,
  /* 886 */  OCAML_GETGLOBAL_1B, 48,
  /* 888 */  OCAML_GETFIELD0,
  /* 889 */  OCAML_BRANCHIFNOT_1B, 8,
  /* 891 */  OCAML_ACC4,
  /* 892 */  OCAML_PUSHGETGLOBAL_1B, 49,
  /* 894 */  OCAML_APPLY1,
  /* 895 */  OCAML_BRANCH_1B, 3,
  /* 897 */  OCAML_ACC4,
  /* 898 */  OCAML_POP, 2,
  /* 900 */  OCAML_PUSHACC2,
  /* 901 */  OCAML_PUSHGETGLOBAL_1B, 46,
  /* 903 */  OCAML_SETFIELD0,
  /* 904 */  OCAML_ACC1,
  /* 905 */  OCAML_PUSHGETGLOBAL_1B, 48,
  /* 907 */  OCAML_SETFIELD0,
  /* 908 */  OCAML_ACC0,
  /* 909 */  OCAML_RETURN, 4,
  /* 911 */  OCAML_ACC0,
  /* 912 */  OCAML_SWITCH_1B, 4, 0, 7, 10, 13, 16,
  /* 919 */  OCAML_CONST2,
  /* 920 */  OCAML_RETURN, 1,
  /* 922 */  OCAML_CONST3,
  /* 923 */  OCAML_RETURN, 1,
  /* 925 */  OCAML_CONST1,
  /* 926 */  OCAML_RETURN, 1,
  /* 928 */  OCAML_CONST0,
  /* 929 */  OCAML_RETURN, 1,
  /* 931 */  OCAML_ACC0,
  /* 932 */  OCAML_SWITCH_1B, 4, 0, 7, 10, 13, 16,
  /* 939 */  OCAML_CONST3,
  /* 940 */  OCAML_RETURN, 1,
  /* 942 */  OCAML_CONST2,
  /* 943 */  OCAML_RETURN, 1,
  /* 945 */  OCAML_CONST0,
  /* 946 */  OCAML_RETURN, 1,
  /* 948 */  OCAML_CONST1,
  /* 949 */  OCAML_RETURN, 1,
  /* 951 */  OCAML_GETGLOBAL_1B, 50,
  /* 953 */  OCAML_RETURN, 1,
  /* 955 */  OCAML_APPLY1,
  /* 956 */  OCAML_PUSHTRAP_1B, 8,
  /* 958 */  OCAML_CONST1,
  /* 959 */  OCAML_PUSHACC5,
  /* 960 */  OCAML_APPLY1,
  /* 961 */  OCAML_POPTRAP,
  /* 962 */  OCAML_BRANCH_1B, 32,
  /* 964 */  OCAML_PUSHACC4,
  /* 965 */  OCAML_PUSHACC1,
  /* 966 */  OCAML_EQ,
  /* 967 */  OCAML_BRANCHIFNOT_1B, 10,
  /* 969 */  OCAML_CONST0,
  /* 970 */  OCAML_PUSHGETGLOBAL_1B, 23,
  /* 972 */  OCAML_PUSHGETGLOBAL_1B, 7,
  /* 974 */  OCAML_APPLY2,
  /* 975 */  OCAML_BRANCH_1B, 17,
  /* 977 */  OCAML_ACC3,
  /* 978 */  OCAML_PUSHACC1,
  /* 979 */  OCAML_EQ,
  /* 980 */  OCAML_BRANCHIFNOT_1B, 10,
  /* 982 */  OCAML_CONST0,
  /* 983 */  OCAML_PUSHGETGLOBAL_1B, 24,
  /* 985 */  OCAML_PUSHGETGLOBAL_1B, 7,
  /* 987 */  OCAML_APPLY2,
  /* 988 */  OCAML_BRANCH_1B, 4,
  /* 990 */  OCAML_ACC0,
  /* 991 */  OCAML_RAISE,
  /* 992 */  OCAML_POP, 1,
  /* 994 */  OCAML_POP, 4,
  /* 996 */  OCAML_STOP
};

#include </Users/travail/github/OMicroB/src/byterun/vm/runtime.c>
#include "buffer.c"

PROGMEM void * const ocaml_primitives[OCAML_PRIMITIVE_NUMBER] = {
  /*  0 */  (void *) &caml_array_unsafe_get,
  /*  1 */  (void *) &caml_avr_read_bit,
  /*  2 */  (void *) &caml_avr_set_bit,
  /*  3 */  (void *) &caml_avr_clear_bit,
  /*  4 */  (void *) &caml_avr_write_register,
  /*  5 */  (void *) &caml_buffer_get_byte,
  /*  6 */  (void *) &caml_buffer_write,
  /*  7 */  (void *) &caml_array_get_addr,
  /*  8 */  (void *) &caml_array_set_addr,
  /*  9 */  (void *) &caml_avr_delay,
};
