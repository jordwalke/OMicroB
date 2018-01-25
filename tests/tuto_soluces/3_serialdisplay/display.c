#define OCAML_STACK_WOSIZE                32
#define OCAML_STATIC_HEAP_WOSIZE          14
#define OCAML_DYNAMIC_HEAP_WOSIZE         86
#define OCAML_FLASH_HEAP_WOSIZE           66
#define OCAML_STACK_INITIAL_WOSIZE         5
#define OCAML_RAM_GLOBDATA_NUMBER          0
#define OCAML_FLASH_GLOBDATA_NUMBER       17
#define OCAML_BYTECODE_BSIZE             592
#define OCAML_PRIMITIVE_NUMBER             7
#define OCAML_VIRTUAL_ARCH                32
#define OCAML_STARTING_OOID                1

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
#define OCAML_GETFLASHGLOBAL_1B          19
#define OCAML_PUSHGETFLASHGLOBAL_1B      20
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
#define OCAML_STOP                       41

PROGMEM extern const value ocaml_flash_heap[OCAML_FLASH_HEAP_WOSIZE];

value ocaml_ram_heap[OCAML_STATIC_HEAP_WOSIZE + OCAML_DYNAMIC_HEAP_WOSIZE] = {
  /*  0 */  Make_header(13, 0, Color_white),
  /*  1 */  Val_int(213),
  /*  2 */  Val_int(240),
  /*  3 */  Val_int(141),
  /*  4 */  Val_int(20),
  /*  5 */  Val_int(161),
  /*  6 */  Val_int(200),
  /*  7 */  Val_int(129),
  /*  8 */  Val_int(207),
  /*  9 */  Val_int(217),
  /* 10 */  Val_int(241),
  /* 11 */  Val_int(175),
  /* 12 */  Val_int(32),
  /* 13 */  Val_int(0)
};

PROGMEM value const ocaml_flash_heap[OCAML_FLASH_HEAP_WOSIZE] = {
  /*  0 */  Make_header(2, Object_tag, Color_white),
  /*  1 */  Val_flash_block(&ocaml_flash_heap[4]),
  /*  2 */  Val_int(-1),
  /*  3 */  Make_header(4, String_tag, Color_white),
  /*  4 */  Make_string_data('O', 'u', 't', '_'),
  /*  5 */  Make_string_data('o', 'f', '_', 'm'),
  /*  6 */  Make_string_data('e', 'm', 'o', 'r'),
  /*  7 */  Make_string_data('y', '\0', '\0', '\2'),
  /*  8 */  Make_header(2, Object_tag, Color_white),
  /*  9 */  Val_flash_block(&ocaml_flash_heap[12]),
  /* 10 */  Val_int(-9),
  /* 11 */  Make_header(4, String_tag, Color_white),
  /* 12 */  Make_string_data('S', 't', 'a', 'c'),
  /* 13 */  Make_string_data('k', '_', 'o', 'v'),
  /* 14 */  Make_string_data('e', 'r', 'f', 'l'),
  /* 15 */  Make_string_data('o', 'w', '\0', '\1'),
  /* 16 */  Make_header(2, Object_tag, Color_white),
  /* 17 */  Val_flash_block(&ocaml_flash_heap[20]),
  /* 18 */  Val_int(-6),
  /* 19 */  Make_header(5, String_tag, Color_white),
  /* 20 */  Make_string_data('D', 'i', 'v', 'i'),
  /* 21 */  Make_string_data('s', 'i', 'o', 'n'),
  /* 22 */  Make_string_data('_', 'b', 'y', '_'),
  /* 23 */  Make_string_data('z', 'e', 'r', 'o'),
  /* 24 */  Make_string_data('\0', '\0', '\0', '\3'),
  /* 25 */  Make_header(2, Object_tag, Color_white),
  /* 26 */  Val_flash_block(&ocaml_flash_heap[29]),
  /* 27 */  Val_int(-4),
  /* 28 */  Make_header(5, String_tag, Color_white),
  /* 29 */  Make_string_data('I', 'n', 'v', 'a'),
  /* 30 */  Make_string_data('l', 'i', 'd', '_'),
  /* 31 */  Make_string_data('a', 'r', 'g', 'u'),
  /* 32 */  Make_string_data('m', 'e', 'n', 't'),
  /* 33 */  Make_string_data('\0', '\0', '\0', '\3'),
  /* 34 */  Make_header(1, Closure_tag, Color_white),
  /* 35 */  Val_codeptr(63),
  /* 36 */  Make_header(1, Closure_tag, Color_white),
  /* 37 */  Val_codeptr(274),
  /* 38 */  Make_header(1, Closure_tag, Color_white),
  /* 39 */  Val_codeptr(170),
  /* 40 */  Make_header(1, Closure_tag, Color_white),
  /* 41 */  Val_codeptr(114),
  /* 42 */  Make_header(1, Closure_tag, Color_white),
  /* 43 */  Val_codeptr(226),
  /* 44 */  Make_header(1, Closure_tag, Color_white),
  /* 45 */  Val_codeptr(37),
  /* 46 */  Make_header(1, Closure_tag, Color_white),
  /* 47 */  Val_codeptr(500),
  /* 48 */  Make_header(1, Closure_tag, Color_white),
  /* 49 */  Val_codeptr(513),
  /* 50 */  Make_header(1, Closure_tag, Color_white),
  /* 51 */  Val_codeptr(486),
  /* 52 */  Make_header(1, Closure_tag, Color_white),
  /* 53 */  Val_codeptr(448),
  /* 54 */  Make_header(1, Closure_tag, Color_white),
  /* 55 */  Val_codeptr(318),
  /* 56 */  Make_header(1, Closure_tag, Color_white),
  /* 57 */  Val_codeptr(4),
  /* 58 */  Make_header(1, Closure_tag, Color_white),
  /* 59 */  Val_codeptr(345),
  /* 60 */  Make_header(1, Closure_tag, Color_white),
  /* 61 */  Val_codeptr(382),
  /* 62 */  Make_header(1, Closure_tag, Color_white),
  /* 63 */  Val_codeptr(476),
  /* 64 */  Make_header(1, Closure_tag, Color_white),
  /* 65 */  Val_codeptr(419)
};

value acc = Val_flash_block(&ocaml_flash_heap[35]);

value env = Val_unit;

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

value ocaml_ram_global_data[OCAML_RAM_GLOBDATA_NUMBER] = {
};

PROGMEM value const ocaml_flash_global_data[OCAML_FLASH_GLOBDATA_NUMBER] = {
  /*  0 */  Val_flash_block(&ocaml_flash_heap[37]),
  /*  1 */  Val_flash_block(&ocaml_flash_heap[39]),
  /*  2 */  Val_flash_block(&ocaml_flash_heap[41]),
  /*  3 */  Val_flash_block(&ocaml_flash_heap[43]),
  /*  4 */  Val_flash_block(&ocaml_flash_heap[35]),
  /*  5 */  Val_flash_block(&ocaml_flash_heap[45]),
  /*  6 */  Val_flash_block(&ocaml_flash_heap[47]),
  /*  7 */  Val_static_block(&ocaml_ram_heap[1]),
  /*  8 */  Val_flash_block(&ocaml_flash_heap[49]),
  /*  9 */  Val_flash_block(&ocaml_flash_heap[51]),
  /* 10 */  Val_flash_block(&ocaml_flash_heap[53]),
  /* 11 */  Val_flash_block(&ocaml_flash_heap[55]),
  /* 12 */  Val_flash_block(&ocaml_flash_heap[57]),
  /* 13 */  Val_flash_block(&ocaml_flash_heap[59]),
  /* 14 */  Val_flash_block(&ocaml_flash_heap[61]),
  /* 15 */  Val_flash_block(&ocaml_flash_heap[63]),
  /* 16 */  Val_flash_block(&ocaml_flash_heap[65])
};

#define OCAML_Out_of_memory        Val_flash_block(&ocaml_flash_heap[1])
#define OCAML_Stack_overflow       Val_flash_block(&ocaml_flash_heap[9])
#define OCAML_Division_by_zero     Val_flash_block(&ocaml_flash_heap[17])
#define OCAML_Invalid_argument     Val_flash_block(&ocaml_flash_heap[26])

PROGMEM opcode_t const ocaml_bytecode[OCAML_BYTECODE_BSIZE] = {
  /*   0 */  OCAML_BRANCH_2B, 2, 8,
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
  /*  40 */  OCAML_PUSHGETFLASHGLOBAL_1B, 0,
  /*  42 */  OCAML_APPLY1,
  /*  43 */  OCAML_PUSHACC1,
  /*  44 */  OCAML_PUSHGETFLASHGLOBAL_1B, 1,
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
  /*  66 */  OCAML_PUSHGETFLASHGLOBAL_1B, 0,
  /*  68 */  OCAML_APPLY1,
  /*  69 */  OCAML_PUSHACC1,
  /*  70 */  OCAML_PUSHGETFLASHGLOBAL_1B, 1,
  /*  72 */  OCAML_APPLY1,
  /*  73 */  OCAML_PUSHACC2,
  /*  74 */  OCAML_PUSHGETFLASHGLOBAL_1B, 2,
  /*  76 */  OCAML_APPLY1,
  /*  77 */  OCAML_PUSHACC3,
  /*  78 */  OCAML_PUSHGETFLASHGLOBAL_1B, 3,
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
  /* 323 */  OCAML_CONST1,
  /* 324 */  OCAML_PUSHCONSTINT_1B, 9,
  /* 326 */  OCAML_PUSHGETFLASHGLOBAL_1B, 4,
  /* 328 */  OCAML_APPLY2,
  /* 329 */  OCAML_BRANCH_1B, 4,
  /* 331 */  OCAML_CHECK_SIGNALS,
  /* 332 */  OCAML_CONST0,
  /* 333 */  OCAML_CONSTINT_1B, 7,
  /* 335 */  OCAML_PUSHCONSTINT_1B, 16,
  /* 337 */  OCAML_C_CALL2, 4,
  /* 339 */  OCAML_BRANCHIFNOT_1B, (opcode_t) -8,
  /* 341 */  OCAML_CONST0,
  /* 342 */  OCAML_RETURN, 1,
  /* 344 */  OCAML_RESTART,
  /* 345 */  OCAML_GRAB, 2,
  /* 347 */  OCAML_CONST1,
  /* 348 */  OCAML_PUSHACC1,
  /* 349 */  OCAML_PUSHGETFLASHGLOBAL_1B, 4,
  /* 351 */  OCAML_APPLY2,
  /* 352 */  OCAML_CONSTINT_1B, 4,
  /* 354 */  OCAML_PUSHCONSTINT_1B, 15,
  /* 356 */  OCAML_C_CALL2, 1,
  /* 358 */  OCAML_CONSTINT_1B, 6,
  /* 360 */  OCAML_PUSHCONSTINT_1B, 15,
  /* 362 */  OCAML_C_CALL2, 1,
  /* 364 */  OCAML_CONSTINT_1B, 7,
  /* 366 */  OCAML_PUSHCONSTINT_1B, 15,
  /* 368 */  OCAML_C_CALL2, 2,
  /* 370 */  OCAML_CONST1,
  /* 371 */  OCAML_PUSHACC2,
  /* 372 */  OCAML_PUSHGETFLASHGLOBAL_1B, 4,
  /* 374 */  OCAML_APPLY2,
  /* 375 */  OCAML_CONST1,
  /* 376 */  OCAML_PUSHACC3,
  /* 377 */  OCAML_PUSHGETFLASHGLOBAL_1B, 4,
  /* 379 */  OCAML_APPTERM2, 5,
  /* 381 */  OCAML_RESTART,
  /* 382 */  OCAML_GRAB, 2,
  /* 384 */  OCAML_CONST1,
  /* 385 */  OCAML_PUSHACC3,
  /* 386 */  OCAML_PUSHGETFLASHGLOBAL_1B, 5,
  /* 388 */  OCAML_APPLY2,
  /* 389 */  OCAML_CONST0,
  /* 390 */  OCAML_PUSHACC3,
  /* 391 */  OCAML_PUSHGETFLASHGLOBAL_1B, 5,
  /* 393 */  OCAML_APPLY2,
  /* 394 */  OCAML_CONST1,
  /* 395 */  OCAML_PUSHACC3,
  /* 396 */  OCAML_PUSHGETFLASHGLOBAL_1B, 5,
  /* 398 */  OCAML_APPLY2,
  /* 399 */  OCAML_ACC1,
  /* 400 */  OCAML_PUSHACC1,
  /* 401 */  OCAML_PUSHGETFLASHGLOBAL_1B, 6,
  /* 403 */  OCAML_APPLY2,
  /* 404 */  OCAML_GETFLASHGLOBAL_1B, 7,
  /* 406 */  OCAML_PUSHGETFLASHGLOBAL_1B, 8,
  /* 408 */  OCAML_APPLY1,
  /* 409 */  OCAML_ACC1,
  /* 410 */  OCAML_PUSHACC1,
  /* 411 */  OCAML_PUSHGETFLASHGLOBAL_1B, 9,
  /* 413 */  OCAML_APPLY2,
  /* 414 */  OCAML_CONST0,
  /* 415 */  OCAML_PUSHGETFLASHGLOBAL_1B, 10,
  /* 417 */  OCAML_APPTERM1, 4,
  /* 419 */  OCAML_CONST0,
  /* 420 */  OCAML_PUSHCONSTINT_2B, 3, 255,
  /* 423 */  OCAML_PUSH,
  /* 424 */  OCAML_PUSHACC2,
  /* 425 */  OCAML_GTINT,
  /* 426 */  OCAML_BRANCHIF_1B, 19,
  /* 428 */  OCAML_CHECK_SIGNALS,
  /* 429 */  OCAML_CONST0,
  /* 430 */  OCAML_C_CALL1, 5,
  /* 432 */  OCAML_PUSHGETFLASHGLOBAL_1B, 11,
  /* 434 */  OCAML_APPLY1,
  /* 435 */  OCAML_ACC1,
  /* 436 */  OCAML_PUSH,
  /* 437 */  OCAML_OFFSETINT_1B, 1,
  /* 439 */  OCAML_ASSIGN, 2,
  /* 441 */  OCAML_ACC1,
  /* 442 */  OCAML_NEQ,
  /* 443 */  OCAML_BRANCHIF_1B, (opcode_t) -15,
  /* 445 */  OCAML_CONST0,
  /* 446 */  OCAML_RETURN, 3,
  /* 448 */  OCAML_CONST0,
  /* 449 */  OCAML_PUSHCONSTINT_2B, 3, 255,
  /* 452 */  OCAML_PUSH,
  /* 453 */  OCAML_PUSHACC2,
  /* 454 */  OCAML_GTINT,
  /* 455 */  OCAML_BRANCHIF_1B, 17,
  /* 457 */  OCAML_CHECK_SIGNALS,
  /* 458 */  OCAML_CONST0,
  /* 459 */  OCAML_PUSHGETFLASHGLOBAL_1B, 11,
  /* 461 */  OCAML_APPLY1,
  /* 462 */  OCAML_ACC1,
  /* 463 */  OCAML_PUSH,
  /* 464 */  OCAML_OFFSETINT_1B, 1,
  /* 466 */  OCAML_ASSIGN, 2,
  /* 468 */  OCAML_ACC1,
  /* 469 */  OCAML_NEQ,
  /* 470 */  OCAML_BRANCHIF_1B, (opcode_t) -13,
  /* 472 */  OCAML_CONST0,
  /* 473 */  OCAML_RETURN, 3,
  /* 475 */  OCAML_RESTART,
  /* 476 */  OCAML_GRAB, 2,
  /* 478 */  OCAML_ACC2,
  /* 479 */  OCAML_PUSHACC2,
  /* 480 */  OCAML_PUSHACC2,
  /* 481 */  OCAML_C_CALL3, 6,
  /* 483 */  OCAML_RETURN, 3,
  /* 485 */  OCAML_RESTART,
  /* 486 */  OCAML_GRAB, 1,
  /* 488 */  OCAML_CONST1,
  /* 489 */  OCAML_PUSHACC2,
  /* 490 */  OCAML_PUSHGETFLASHGLOBAL_1B, 5,
  /* 492 */  OCAML_APPLY2,
  /* 493 */  OCAML_CONST0,
  /* 494 */  OCAML_PUSHACC1,
  /* 495 */  OCAML_PUSHGETFLASHGLOBAL_1B, 5,
  /* 497 */  OCAML_APPTERM2, 4,
  /* 499 */  OCAML_RESTART,
  /* 500 */  OCAML_GRAB, 1,
  /* 502 */  OCAML_CONST0,
  /* 503 */  OCAML_PUSHACC2,
  /* 504 */  OCAML_PUSHGETFLASHGLOBAL_1B, 5,
  /* 506 */  OCAML_APPLY2,
  /* 507 */  OCAML_CONST0,
  /* 508 */  OCAML_PUSHACC1,
  /* 509 */  OCAML_PUSHGETFLASHGLOBAL_1B, 5,
  /* 511 */  OCAML_APPTERM2, 4,
  /* 513 */  OCAML_ACC0,
  /* 514 */  OCAML_PUSHGETFLASHGLOBAL_1B, 11,
  /* 516 */  OCAML_PUSHGETFLASHGLOBAL_1B, 12,
  /* 518 */  OCAML_APPTERM2, 3,
  /* 520 */  OCAML_APPLY2,
  /* 521 */  OCAML_CONST1,
  /* 522 */  OCAML_PUSHCONSTINT_1B, 15,
  /* 524 */  OCAML_PUSHGETFLASHGLOBAL_1B, 4,
  /* 526 */  OCAML_APPLY2,
  /* 527 */  OCAML_CONST1,
  /* 528 */  OCAML_PUSHCONSTINT_1B, 16,
  /* 530 */  OCAML_PUSHGETFLASHGLOBAL_1B, 4,
  /* 532 */  OCAML_APPLY2,
  /* 533 */  OCAML_CONST1,
  /* 534 */  OCAML_PUSHACC3,
  /* 535 */  OCAML_PUSHGETFLASHGLOBAL_1B, 4,
  /* 537 */  OCAML_APPLY2,
  /* 538 */  OCAML_CONST1,
  /* 539 */  OCAML_PUSHACC2,
  /* 540 */  OCAML_PUSHGETFLASHGLOBAL_1B, 4,
  /* 542 */  OCAML_APPLY2,
  /* 543 */  OCAML_CONST1,
  /* 544 */  OCAML_PUSHACC1,
  /* 545 */  OCAML_PUSHGETFLASHGLOBAL_1B, 4,
  /* 547 */  OCAML_APPLY2,
  /* 548 */  OCAML_CONSTINT_1B, 16,
  /* 550 */  OCAML_PUSHCONSTINT_1B, 15,
  /* 552 */  OCAML_PUSHCONSTINT_1B, 17,
  /* 554 */  OCAML_PUSHGETFLASHGLOBAL_1B, 13,
  /* 556 */  OCAML_APPLY3,
  /* 557 */  OCAML_ACC0,
  /* 558 */  OCAML_PUSHACC2,
  /* 559 */  OCAML_PUSHACC4,
  /* 560 */  OCAML_PUSHGETFLASHGLOBAL_1B, 14,
  /* 562 */  OCAML_APPLY3,
  /* 563 */  OCAML_BRANCH_1B, 23,
  /* 565 */  OCAML_CHECK_SIGNALS,
  /* 566 */  OCAML_CONST1,
  /* 567 */  OCAML_PUSHCONSTINT_1B, 10,
  /* 569 */  OCAML_PUSHCONSTINT_1B, 10,
  /* 571 */  OCAML_PUSHGETFLASHGLOBAL_1B, 15,
  /* 573 */  OCAML_APPLY3,
  /* 574 */  OCAML_CONST1,
  /* 575 */  OCAML_PUSHCONSTINT_1B, 11,
  /* 577 */  OCAML_PUSHCONSTINT_1B, 11,
  /* 579 */  OCAML_PUSHGETFLASHGLOBAL_1B, 15,
  /* 581 */  OCAML_APPLY3,
  /* 582 */  OCAML_CONST0,
  /* 583 */  OCAML_PUSHGETFLASHGLOBAL_1B, 16,
  /* 585 */  OCAML_APPLY1,
  /* 586 */  OCAML_CONST1,
  /* 587 */  OCAML_BRANCHIF_1B, (opcode_t) -22,
  /* 589 */  OCAML_POP, 3,
  /* 591 */  OCAML_STOP
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
