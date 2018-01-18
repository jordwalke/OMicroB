#define OCAML_STACK_WOSIZE               32
#define OCAML_HEAP_WOSIZE                64
#define OCAML_HEAP_INITIAL_WOSIZE        32
#define OCAML_STACK_INITIAL_WOSIZE        0
#define OCAML_GLOBDATA_NUMBER            17
#define OCAML_BYTECODE_BSIZE            663
#define OCAML_PRIMITIVE_NUMBER            8
#define OCAML_VIRTUAL_ARCH               32
#define OCAML_GC_ALGORITHM MARK_AND_COMPACT

#include </Users/travail/github/OMicroB/src/byterun/values.h>

#define OCAML_ACC0                        0
#define OCAML_ACC1                        1
#define OCAML_ACC2                        2
#define OCAML_PUSH                        3
#define OCAML_PUSHACC1                    4
#define OCAML_PUSHACC2                    5
#define OCAML_PUSHACC3                    6
#define OCAML_PUSHACC4                    7
#define OCAML_PUSHACC5                    8
#define OCAML_PUSHACC6                    9
#define OCAML_PUSHACC7                   10
#define OCAML_PUSHACC                    11
#define OCAML_POP                        12
#define OCAML_ASSIGN                     13
#define OCAML_APPLY1                     14
#define OCAML_APPLY2                     15
#define OCAML_APPLY3                     16
#define OCAML_APPTERM1                   17
#define OCAML_APPTERM2                   18
#define OCAML_RETURN                     19
#define OCAML_RESTART                    20
#define OCAML_GRAB                       21
#define OCAML_CLOSURE_1B                 22
#define OCAML_CLOSURE_2B                 23
#define OCAML_GETGLOBAL_1B               24
#define OCAML_PUSHGETGLOBAL_1B           25
#define OCAML_SETGLOBAL_1B               26
#define OCAML_VECTLENGTH                 27
#define OCAML_BRANCH_1B                  28
#define OCAML_BRANCH_2B                  29
#define OCAML_BRANCHIF_1B                30
#define OCAML_BRANCHIFNOT_1B             31
#define OCAML_SWITCH_1B                  32
#define OCAML_CHECK_SIGNALS              33
#define OCAML_C_CALL1                    34
#define OCAML_C_CALL2                    35
#define OCAML_C_CALL3                    36
#define OCAML_CONST0                     37
#define OCAML_CONST1                     38
#define OCAML_CONST2                     39
#define OCAML_CONST3                     40
#define OCAML_CONSTINT_1B                41
#define OCAML_PUSHCONST0                 42
#define OCAML_PUSHCONST2                 43
#define OCAML_PUSHCONSTINT_1B            44
#define OCAML_PUSHCONSTINT_2B            45
#define OCAML_NEQ                        46
#define OCAML_GTINT                      47
#define OCAML_OFFSETINT_1B               48
#define OCAML_STOP                       49

val_t ocaml_heap[OCAML_HEAP_WOSIZE * 2] = {
  /*  0 */  Make_header(13, 0),
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
  /* 13 */  Val_int(0),
  /* 14 */  Make_header(1, Closure_tag),
  /* 15 */  Val_codeptr(248),
  /* 16 */  Make_header(1, Closure_tag),
  /* 17 */  Val_codeptr(144),
  /* 18 */  Make_header(1, Closure_tag),
  /* 19 */  Val_codeptr(88),
  /* 20 */  Make_header(1, Closure_tag),
  /* 21 */  Val_codeptr(200),
  /* 22 */  Make_header(1, Closure_tag),
  /* 23 */  Val_codeptr(63),
  /* 24 */  Make_header(1, Closure_tag),
  /* 25 */  Val_codeptr(292),
  /* 26 */  Make_header(1, Closure_tag),
  /* 27 */  Val_codeptr(37),
  /* 28 */  Make_header(1, Closure_tag),
  /* 29 */  Val_codeptr(4),
  /* 30 */  Make_header(1, Closure_tag),
  /* 31 */  Val_codeptr(312)
};

const val_t* ocaml_heap1 = ocaml_heap;
const val_t* ocaml_heap2 = ocaml_heap + OCAML_HEAP_WOSIZE;

val_t acc = Init_val_block(4 * 1);

val_t ocaml_stack[OCAML_STACK_WOSIZE] = {
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
  /* 28 */  Val_int(0),
  /* 29 */  Val_int(0),
  /* 30 */  Val_int(0),
  /* 31 */  Val_int(0)
};

val_t ocaml_global_data[OCAML_GLOBDATA_NUMBER] = {
  /*  0 */  Init_val_block(4 * 15),
  /*  1 */  Init_val_block(4 * 17),
  /*  2 */  Init_val_block(4 * 19),
  /*  3 */  Init_val_block(4 * 21),
  /*  4 */  Init_val_block(4 * 23),
  /*  5 */  Val_int(0),
  /*  6 */  Val_int(0),
  /*  7 */  Val_int(0),
  /*  8 */  Val_int(0),
  /*  9 */  Val_int(0),
  /* 10 */  Init_val_block(4 * 25),
  /* 11 */  Init_val_block(4 * 27),
  /* 12 */  Init_val_block(4 * 29),
  /* 13 */  Init_val_block(4 * 31),
  /* 14 */  Val_int(0),
  /* 15 */  Val_int(0),
  /* 16 */  Val_int(0)
};

PROGMEM opcode_t const ocaml_bytecode[OCAML_BYTECODE_BSIZE] = {
  /*   0 */  OCAML_BRANCH_2B,
  /*   1 */  (opcode_t)1,
  /*   2 */  220,
  /*   3 */  OCAML_RESTART,
  /*   4 */  OCAML_GRAB,
  /*   5 */  1,
  /*   6 */  OCAML_CONST0,
  /*   7 */  OCAML_PUSHACC2,
  /*   8 */  OCAML_VECTLENGTH,
  /*   9 */  OCAML_OFFSETINT_1B,
  /*  10 */  (opcode_t)-1,
  /*  11 */  OCAML_PUSH,
  /*  12 */  OCAML_PUSHACC2,
  /*  13 */  OCAML_GTINT,
  /*  14 */  OCAML_BRANCHIF_1B,
  /*  15 */  (opcode_t)19,
  /*  16 */  OCAML_CHECK_SIGNALS,
  /*  17 */  OCAML_ACC1,
  /*  18 */  OCAML_PUSHACC4,
  /*  19 */  OCAML_C_CALL2,
  /*  20 */  0,
  /*  21 */  OCAML_PUSHACC3,
  /*  22 */  OCAML_APPLY1,
  /*  23 */  OCAML_ACC1,
  /*  24 */  OCAML_PUSH,
  /*  25 */  OCAML_OFFSETINT_1B,
  /*  26 */  (opcode_t)1,
  /*  27 */  OCAML_ASSIGN,
  /*  28 */  2,
  /*  29 */  OCAML_ACC1,
  /*  30 */  OCAML_NEQ,
  /*  31 */  OCAML_BRANCHIF_1B,
  /*  32 */  (opcode_t)-15,
  /*  33 */  OCAML_CONST0,
  /*  34 */  OCAML_RETURN,
  /*  35 */  4,
  /*  36 */  OCAML_RESTART,
  /*  37 */  OCAML_GRAB,
  /*  38 */  1,
  /*  39 */  OCAML_ACC0,
  /*  40 */  OCAML_PUSHGETGLOBAL_1B,
  /*  41 */  0,
  /*  42 */  OCAML_APPLY1,
  /*  43 */  OCAML_PUSHACC1,
  /*  44 */  OCAML_PUSHGETGLOBAL_1B,
  /*  45 */  1,
  /*  46 */  OCAML_APPLY1,
  /*  47 */  OCAML_PUSHACC3,
  /*  48 */  OCAML_BRANCHIFNOT_1B,
  /*  49 */  (opcode_t)8,
  /*  50 */  OCAML_ACC0,
  /*  51 */  OCAML_PUSHACC2,
  /*  52 */  OCAML_C_CALL2,
  /*  53 */  1,
  /*  54 */  OCAML_RETURN,
  /*  55 */  4,
  /*  56 */  OCAML_ACC0,
  /*  57 */  OCAML_PUSHACC2,
  /*  58 */  OCAML_C_CALL2,
  /*  59 */  2,
  /*  60 */  OCAML_RETURN,
  /*  61 */  4,
  /*  62 */  OCAML_RESTART,
  /*  63 */  OCAML_GRAB,
  /*  64 */  1,
  /*  65 */  OCAML_ACC0,
  /*  66 */  OCAML_PUSHGETGLOBAL_1B,
  /*  67 */  2,
  /*  68 */  OCAML_APPLY1,
  /*  69 */  OCAML_PUSHACC1,
  /*  70 */  OCAML_PUSHGETGLOBAL_1B,
  /*  71 */  3,
  /*  72 */  OCAML_APPLY1,
  /*  73 */  OCAML_PUSHACC3,
  /*  74 */  OCAML_BRANCHIFNOT_1B,
  /*  75 */  (opcode_t)8,
  /*  76 */  OCAML_ACC1,
  /*  77 */  OCAML_PUSHACC1,
  /*  78 */  OCAML_C_CALL2,
  /*  79 */  1,
  /*  80 */  OCAML_RETURN,
  /*  81 */  4,
  /*  82 */  OCAML_ACC1,
  /*  83 */  OCAML_PUSHACC1,
  /*  84 */  OCAML_C_CALL2,
  /*  85 */  2,
  /*  86 */  OCAML_RETURN,
  /*  87 */  4,
  /*  88 */  OCAML_ACC0,
  /*  89 */  OCAML_SWITCH_1B,
  /*  90 */  24,
  /*  91 */  0,
  /*  92 */  (opcode_t)27,
  /*  93 */  (opcode_t)30,
  /*  94 */  (opcode_t)33,
  /*  95 */  (opcode_t)36,
  /*  96 */  (opcode_t)39,
  /*  97 */  (opcode_t)43,
  /*  98 */  (opcode_t)47,
  /*  99 */  (opcode_t)43,
  /* 100 */  (opcode_t)39,
  /* 101 */  (opcode_t)51,
  /* 102 */  (opcode_t)43,
  /* 103 */  (opcode_t)47,
  /* 104 */  (opcode_t)43,
  /* 105 */  (opcode_t)47,
  /* 106 */  (opcode_t)30,
  /* 107 */  (opcode_t)33,
  /* 108 */  (opcode_t)27,
  /* 109 */  (opcode_t)36,
  /* 110 */  (opcode_t)47,
  /* 111 */  (opcode_t)43,
  /* 112 */  (opcode_t)51,
  /* 113 */  (opcode_t)39,
  /* 114 */  (opcode_t)33,
  /* 115 */  (opcode_t)36,
  /* 116 */  OCAML_CONST2,
  /* 117 */  OCAML_RETURN,
  /* 118 */  1,
  /* 119 */  OCAML_CONST3,
  /* 120 */  OCAML_RETURN,
  /* 121 */  1,
  /* 122 */  OCAML_CONST1,
  /* 123 */  OCAML_RETURN,
  /* 124 */  1,
  /* 125 */  OCAML_CONST0,
  /* 126 */  OCAML_RETURN,
  /* 127 */  1,
  /* 128 */  OCAML_CONSTINT_1B,
  /* 129 */  (opcode_t)4,
  /* 130 */  OCAML_RETURN,
  /* 131 */  1,
  /* 132 */  OCAML_CONSTINT_1B,
  /* 133 */  (opcode_t)6,
  /* 134 */  OCAML_RETURN,
  /* 135 */  1,
  /* 136 */  OCAML_CONSTINT_1B,
  /* 137 */  (opcode_t)7,
  /* 138 */  OCAML_RETURN,
  /* 139 */  1,
  /* 140 */  OCAML_CONSTINT_1B,
  /* 141 */  (opcode_t)5,
  /* 142 */  OCAML_RETURN,
  /* 143 */  1,
  /* 144 */  OCAML_ACC0,
  /* 145 */  OCAML_SWITCH_1B,
  /* 146 */  24,
  /* 147 */  0,
  /* 148 */  (opcode_t)27,
  /* 149 */  (opcode_t)30,
  /* 150 */  (opcode_t)33,
  /* 151 */  (opcode_t)36,
  /* 152 */  (opcode_t)39,
  /* 153 */  (opcode_t)43,
  /* 154 */  (opcode_t)47,
  /* 155 */  (opcode_t)43,
  /* 156 */  (opcode_t)39,
  /* 157 */  (opcode_t)51,
  /* 158 */  (opcode_t)43,
  /* 159 */  (opcode_t)47,
  /* 160 */  (opcode_t)43,
  /* 161 */  (opcode_t)47,
  /* 162 */  (opcode_t)30,
  /* 163 */  (opcode_t)33,
  /* 164 */  (opcode_t)27,
  /* 165 */  (opcode_t)36,
  /* 166 */  (opcode_t)47,
  /* 167 */  (opcode_t)43,
  /* 168 */  (opcode_t)51,
  /* 169 */  (opcode_t)39,
  /* 170 */  (opcode_t)33,
  /* 171 */  (opcode_t)36,
  /* 172 */  OCAML_CONST2,
  /* 173 */  OCAML_RETURN,
  /* 174 */  1,
  /* 175 */  OCAML_CONST3,
  /* 176 */  OCAML_RETURN,
  /* 177 */  1,
  /* 178 */  OCAML_CONST1,
  /* 179 */  OCAML_RETURN,
  /* 180 */  1,
  /* 181 */  OCAML_CONST0,
  /* 182 */  OCAML_RETURN,
  /* 183 */  1,
  /* 184 */  OCAML_CONSTINT_1B,
  /* 185 */  (opcode_t)4,
  /* 186 */  OCAML_RETURN,
  /* 187 */  1,
  /* 188 */  OCAML_CONSTINT_1B,
  /* 189 */  (opcode_t)6,
  /* 190 */  OCAML_RETURN,
  /* 191 */  1,
  /* 192 */  OCAML_CONSTINT_1B,
  /* 193 */  (opcode_t)7,
  /* 194 */  OCAML_RETURN,
  /* 195 */  1,
  /* 196 */  OCAML_CONSTINT_1B,
  /* 197 */  (opcode_t)5,
  /* 198 */  OCAML_RETURN,
  /* 199 */  1,
  /* 200 */  OCAML_ACC0,
  /* 201 */  OCAML_SWITCH_1B,
  /* 202 */  24,
  /* 203 */  0,
  /* 204 */  (opcode_t)31,
  /* 205 */  (opcode_t)31,
  /* 206 */  (opcode_t)31,
  /* 207 */  (opcode_t)31,
  /* 208 */  (opcode_t)31,
  /* 209 */  (opcode_t)35,
  /* 210 */  (opcode_t)31,
  /* 211 */  (opcode_t)27,
  /* 212 */  (opcode_t)39,
  /* 213 */  (opcode_t)39,
  /* 214 */  (opcode_t)39,
  /* 215 */  (opcode_t)39,
  /* 216 */  (opcode_t)31,
  /* 217 */  (opcode_t)35,
  /* 218 */  (opcode_t)39,
  /* 219 */  (opcode_t)39,
  /* 220 */  (opcode_t)39,
  /* 221 */  (opcode_t)39,
  /* 222 */  (opcode_t)43,
  /* 223 */  (opcode_t)43,
  /* 224 */  (opcode_t)43,
  /* 225 */  (opcode_t)43,
  /* 226 */  (opcode_t)43,
  /* 227 */  (opcode_t)43,
  /* 228 */  OCAML_CONSTINT_1B,
  /* 229 */  (opcode_t)8,
  /* 230 */  OCAML_RETURN,
  /* 231 */  1,
  /* 232 */  OCAML_CONSTINT_1B,
  /* 233 */  (opcode_t)7,
  /* 234 */  OCAML_RETURN,
  /* 235 */  1,
  /* 236 */  OCAML_CONSTINT_1B,
  /* 237 */  (opcode_t)6,
  /* 238 */  OCAML_RETURN,
  /* 239 */  1,
  /* 240 */  OCAML_CONSTINT_1B,
  /* 241 */  (opcode_t)5,
  /* 242 */  OCAML_RETURN,
  /* 243 */  1,
  /* 244 */  OCAML_CONSTINT_1B,
  /* 245 */  (opcode_t)9,
  /* 246 */  OCAML_RETURN,
  /* 247 */  1,
  /* 248 */  OCAML_ACC0,
  /* 249 */  OCAML_SWITCH_1B,
  /* 250 */  24,
  /* 251 */  0,
  /* 252 */  (opcode_t)30,
  /* 253 */  (opcode_t)30,
  /* 254 */  (opcode_t)30,
  /* 255 */  (opcode_t)30,
  /* 256 */  (opcode_t)30,
  /* 257 */  (opcode_t)33,
  /* 258 */  (opcode_t)30,
  /* 259 */  (opcode_t)27,
  /* 260 */  (opcode_t)36,
  /* 261 */  (opcode_t)36,
  /* 262 */  (opcode_t)36,
  /* 263 */  (opcode_t)36,
  /* 264 */  (opcode_t)30,
  /* 265 */  (opcode_t)33,
  /* 266 */  (opcode_t)36,
  /* 267 */  (opcode_t)36,
  /* 268 */  (opcode_t)36,
  /* 269 */  (opcode_t)36,
  /* 270 */  (opcode_t)39,
  /* 271 */  (opcode_t)39,
  /* 272 */  (opcode_t)39,
  /* 273 */  (opcode_t)39,
  /* 274 */  (opcode_t)39,
  /* 275 */  (opcode_t)39,
  /* 276 */  OCAML_CONST3,
  /* 277 */  OCAML_RETURN,
  /* 278 */  1,
  /* 279 */  OCAML_CONST2,
  /* 280 */  OCAML_RETURN,
  /* 281 */  1,
  /* 282 */  OCAML_CONST1,
  /* 283 */  OCAML_RETURN,
  /* 284 */  1,
  /* 285 */  OCAML_CONST0,
  /* 286 */  OCAML_RETURN,
  /* 287 */  1,
  /* 288 */  OCAML_CONSTINT_1B,
  /* 289 */  (opcode_t)4,
  /* 290 */  OCAML_RETURN,
  /* 291 */  1,
  /* 292 */  OCAML_ACC0,
  /* 293 */  OCAML_PUSHCONSTINT_1B,
  /* 294 */  (opcode_t)17,
  /* 295 */  OCAML_C_CALL2,
  /* 296 */  3,
  /* 297 */  OCAML_BRANCH_1B,
  /* 298 */  (opcode_t)4,
  /* 299 */  OCAML_CHECK_SIGNALS,
  /* 300 */  OCAML_CONST0,
  /* 301 */  OCAML_CONST0,
  /* 302 */  OCAML_PUSHCONSTINT_1B,
  /* 303 */  (opcode_t)16,
  /* 304 */  OCAML_C_CALL2,
  /* 305 */  4,
  /* 306 */  OCAML_BRANCHIF_1B,
  /* 307 */  (opcode_t)-7,
  /* 308 */  OCAML_CONST0,
  /* 309 */  OCAML_RETURN,
  /* 310 */  1,
  /* 311 */  OCAML_RESTART,
  /* 312 */  OCAML_GRAB,
  /* 313 */  2,
  /* 314 */  OCAML_CONST1,
  /* 315 */  OCAML_PUSHACC1,
  /* 316 */  OCAML_PUSHGETGLOBAL_1B,
  /* 317 */  4,
  /* 318 */  OCAML_APPLY2,
  /* 319 */  OCAML_CONSTINT_1B,
  /* 320 */  (opcode_t)4,
  /* 321 */  OCAML_PUSHCONSTINT_1B,
  /* 322 */  (opcode_t)15,
  /* 323 */  OCAML_C_CALL2,
  /* 324 */  1,
  /* 325 */  OCAML_CONSTINT_1B,
  /* 326 */  (opcode_t)6,
  /* 327 */  OCAML_PUSHCONSTINT_1B,
  /* 328 */  (opcode_t)15,
  /* 329 */  OCAML_C_CALL2,
  /* 330 */  1,
  /* 331 */  OCAML_CONST1,
  /* 332 */  OCAML_PUSHACC2,
  /* 333 */  OCAML_PUSHGETGLOBAL_1B,
  /* 334 */  4,
  /* 335 */  OCAML_APPLY2,
  /* 336 */  OCAML_CONST1,
  /* 337 */  OCAML_PUSHACC3,
  /* 338 */  OCAML_PUSHGETGLOBAL_1B,
  /* 339 */  4,
  /* 340 */  OCAML_APPTERM2,
  /* 341 */  5,
  /* 342 */  OCAML_RESTART,
  /* 343 */  OCAML_GRAB,
  /* 344 */  2,
  /* 345 */  OCAML_CONSTINT_1B,
  /* 346 */  (opcode_t)4,
  /* 347 */  OCAML_PUSHACC2,
  /* 348 */  OCAML_PUSHACC2,
  /* 349 */  OCAML_PUSHGETGLOBAL_1B,
  /* 350 */  5,
  /* 351 */  OCAML_APPLY2,
  /* 352 */  OCAML_GETGLOBAL_1B,
  /* 353 */  6,
  /* 354 */  OCAML_PUSHGETGLOBAL_1B,
  /* 355 */  7,
  /* 356 */  OCAML_APPLY1,
  /* 357 */  OCAML_ACC2,
  /* 358 */  OCAML_PUSHACC2,
  /* 359 */  OCAML_PUSHGETGLOBAL_1B,
  /* 360 */  8,
  /* 361 */  OCAML_APPLY2,
  /* 362 */  OCAML_CONST0,
  /* 363 */  OCAML_PUSHGETGLOBAL_1B,
  /* 364 */  9,
  /* 365 */  OCAML_APPTERM1,
  /* 366 */  5,
  /* 367 */  OCAML_CONST0,
  /* 368 */  OCAML_PUSHCONSTINT_2B,
  /* 369 */  (opcode_t)3,
  /* 370 */  255,
  /* 371 */  OCAML_PUSH,
  /* 372 */  OCAML_PUSHACC2,
  /* 373 */  OCAML_GTINT,
  /* 374 */  OCAML_BRANCHIF_1B,
  /* 375 */  (opcode_t)17,
  /* 376 */  OCAML_CHECK_SIGNALS,
  /* 377 */  OCAML_CONST0,
  /* 378 */  OCAML_PUSHGETGLOBAL_1B,
  /* 379 */  10,
  /* 380 */  OCAML_APPLY1,
  /* 381 */  OCAML_ACC1,
  /* 382 */  OCAML_PUSH,
  /* 383 */  OCAML_OFFSETINT_1B,
  /* 384 */  (opcode_t)1,
  /* 385 */  OCAML_ASSIGN,
  /* 386 */  2,
  /* 387 */  OCAML_ACC1,
  /* 388 */  OCAML_NEQ,
  /* 389 */  OCAML_BRANCHIF_1B,
  /* 390 */  (opcode_t)-13,
  /* 391 */  OCAML_CONST0,
  /* 392 */  OCAML_RETURN,
  /* 393 */  3,
  /* 394 */  OCAML_RESTART,
  /* 395 */  OCAML_GRAB,
  /* 396 */  2,
  /* 397 */  OCAML_ACC2,
  /* 398 */  OCAML_PUSHACC2,
  /* 399 */  OCAML_PUSHACC2,
  /* 400 */  OCAML_C_CALL3,
  /* 401 */  5,
  /* 402 */  OCAML_RETURN,
  /* 403 */  3,
  /* 404 */  OCAML_CONST0,
  /* 405 */  OCAML_PUSHCONSTINT_2B,
  /* 406 */  (opcode_t)3,
  /* 407 */  255,
  /* 408 */  OCAML_PUSH,
  /* 409 */  OCAML_PUSHACC2,
  /* 410 */  OCAML_GTINT,
  /* 411 */  OCAML_BRANCHIF_1B,
  /* 412 */  (opcode_t)22,
  /* 413 */  OCAML_CHECK_SIGNALS,
  /* 414 */  OCAML_ACC1,
  /* 415 */  OCAML_C_CALL1,
  /* 416 */  6,
  /* 417 */  OCAML_PUSH,
  /* 418 */  OCAML_PUSHGETGLOBAL_1B,
  /* 419 */  10,
  /* 420 */  OCAML_APPLY1,
  /* 421 */  OCAML_POP,
  /* 422 */  1,
  /* 423 */  OCAML_ACC1,
  /* 424 */  OCAML_PUSH,
  /* 425 */  OCAML_OFFSETINT_1B,
  /* 426 */  (opcode_t)1,
  /* 427 */  OCAML_ASSIGN,
  /* 428 */  2,
  /* 429 */  OCAML_ACC1,
  /* 430 */  OCAML_NEQ,
  /* 431 */  OCAML_BRANCHIF_1B,
  /* 432 */  (opcode_t)-18,
  /* 433 */  OCAML_CONST0,
  /* 434 */  OCAML_RETURN,
  /* 435 */  3,
  /* 436 */  OCAML_RESTART,
  /* 437 */  OCAML_GRAB,
  /* 438 */  1,
  /* 439 */  OCAML_CONST1,
  /* 440 */  OCAML_PUSHACC2,
  /* 441 */  OCAML_PUSHGETGLOBAL_1B,
  /* 442 */  11,
  /* 443 */  OCAML_APPLY2,
  /* 444 */  OCAML_CONST0,
  /* 445 */  OCAML_PUSHACC1,
  /* 446 */  OCAML_PUSHGETGLOBAL_1B,
  /* 447 */  11,
  /* 448 */  OCAML_APPTERM2,
  /* 449 */  4,
  /* 450 */  OCAML_RESTART,
  /* 451 */  OCAML_GRAB,
  /* 452 */  1,
  /* 453 */  OCAML_CONST1,
  /* 454 */  OCAML_PUSHACC1,
  /* 455 */  OCAML_PUSHGETGLOBAL_1B,
  /* 456 */  11,
  /* 457 */  OCAML_APPLY2,
  /* 458 */  OCAML_CONST0,
  /* 459 */  OCAML_PUSHACC2,
  /* 460 */  OCAML_PUSHGETGLOBAL_1B,
  /* 461 */  11,
  /* 462 */  OCAML_APPLY2,
  /* 463 */  OCAML_CONST0,
  /* 464 */  OCAML_PUSHACC1,
  /* 465 */  OCAML_PUSHGETGLOBAL_1B,
  /* 466 */  11,
  /* 467 */  OCAML_APPTERM2,
  /* 468 */  4,
  /* 469 */  OCAML_ACC0,
  /* 470 */  OCAML_PUSHGETGLOBAL_1B,
  /* 471 */  10,
  /* 472 */  OCAML_PUSHGETGLOBAL_1B,
  /* 473 */  12,
  /* 474 */  OCAML_APPTERM2,
  /* 475 */  3,
  /* 476 */  OCAML_C_CALL1,
  /* 477 */  7,
  /* 478 */  OCAML_SETGLOBAL_1B,
  /* 479 */  6,
  /* 480 */  OCAML_CLOSURE_1B,
  /* 481 */  0,
  /* 482 */  (opcode_t)-11,
  /* 483 */  OCAML_SETGLOBAL_1B,
  /* 484 */  7,
  /* 485 */  OCAML_CLOSURE_1B,
  /* 486 */  0,
  /* 487 */  (opcode_t)-34,
  /* 488 */  OCAML_SETGLOBAL_1B,
  /* 489 */  5,
  /* 490 */  OCAML_CLOSURE_1B,
  /* 491 */  0,
  /* 492 */  (opcode_t)-53,
  /* 493 */  OCAML_SETGLOBAL_1B,
  /* 494 */  8,
  /* 495 */  OCAML_CLOSURE_1B,
  /* 496 */  0,
  /* 497 */  (opcode_t)-91,
  /* 498 */  OCAML_SETGLOBAL_1B,
  /* 499 */  16,
  /* 500 */  OCAML_CLOSURE_1B,
  /* 501 */  0,
  /* 502 */  (opcode_t)-105,
  /* 503 */  OCAML_SETGLOBAL_1B,
  /* 504 */  15,
  /* 505 */  OCAML_CLOSURE_2B,
  /* 506 */  0,
  /* 507 */  (opcode_t)-1,
  /* 508 */  118,
  /* 509 */  OCAML_SETGLOBAL_1B,
  /* 510 */  9,
  /* 511 */  OCAML_CLOSURE_2B,
  /* 512 */  0,
  /* 513 */  (opcode_t)-1,
  /* 514 */  88,
  /* 515 */  OCAML_SETGLOBAL_1B,
  /* 516 */  14,
  /* 517 */  OCAML_BRANCH_1B,
  /* 518 */  (opcode_t)95,
  /* 519 */  OCAML_CONSTINT_1B,
  /* 520 */  (opcode_t)12,
  /* 521 */  OCAML_PUSHCONSTINT_1B,
  /* 522 */  (opcode_t)4,
  /* 523 */  OCAML_PUSHCONSTINT_1B,
  /* 524 */  (opcode_t)6,
  /* 525 */  OCAML_PUSHCONSTINT_1B,
  /* 526 */  (opcode_t)20,
  /* 527 */  OCAML_PUSHCONSTINT_1B,
  /* 528 */  (opcode_t)19,
  /* 529 */  OCAML_PUSHCONSTINT_1B,
  /* 530 */  (opcode_t)21,
  /* 531 */  OCAML_PUSHCONSTINT_1B,
  /* 532 */  (opcode_t)18,
  /* 533 */  OCAML_PUSHCONSTINT_1B,
  /* 534 */  (opcode_t)7,
  /* 535 */  OCAML_PUSHCONSTINT_1B,
  /* 536 */  (opcode_t)8,
  /* 537 */  OCAML_PUSHCONSTINT_1B,
  /* 538 */  (opcode_t)9,
  /* 539 */  OCAML_PUSHCONSTINT_1B,
  /* 540 */  (opcode_t)10,
  /* 541 */  OCAML_PUSHCONSTINT_1B,
  /* 542 */  (opcode_t)11,
  /* 543 */  OCAML_PUSHCONST0,
  /* 544 */  OCAML_PUSHACC,
  /* 545 */  9,
  /* 546 */  OCAML_PUSHGETGLOBAL_1B,
  /* 547 */  4,
  /* 548 */  OCAML_APPLY2,
  /* 549 */  OCAML_CONST0,
  /* 550 */  OCAML_PUSHACC,
  /* 551 */  8,
  /* 552 */  OCAML_PUSHGETGLOBAL_1B,
  /* 553 */  4,
  /* 554 */  OCAML_APPLY2,
  /* 555 */  OCAML_CONST0,
  /* 556 */  OCAML_PUSHACC7,
  /* 557 */  OCAML_PUSHGETGLOBAL_1B,
  /* 558 */  4,
  /* 559 */  OCAML_APPLY2,
  /* 560 */  OCAML_CONST0,
  /* 561 */  OCAML_PUSHACC6,
  /* 562 */  OCAML_PUSHGETGLOBAL_1B,
  /* 563 */  4,
  /* 564 */  OCAML_APPLY2,
  /* 565 */  OCAML_CONST0,
  /* 566 */  OCAML_PUSHACC5,
  /* 567 */  OCAML_PUSHGETGLOBAL_1B,
  /* 568 */  4,
  /* 569 */  OCAML_APPLY2,
  /* 570 */  OCAML_CONST0,
  /* 571 */  OCAML_PUSHACC4,
  /* 572 */  OCAML_PUSHGETGLOBAL_1B,
  /* 573 */  4,
  /* 574 */  OCAML_APPLY2,
  /* 575 */  OCAML_CONST1,
  /* 576 */  OCAML_PUSHACC,
  /* 577 */  12,
  /* 578 */  OCAML_PUSHGETGLOBAL_1B,
  /* 579 */  4,
  /* 580 */  OCAML_APPLY2,
  /* 581 */  OCAML_CONST1,
  /* 582 */  OCAML_PUSHACC,
  /* 583 */  11,
  /* 584 */  OCAML_PUSHGETGLOBAL_1B,
  /* 585 */  4,
  /* 586 */  OCAML_APPLY2,
  /* 587 */  OCAML_CONST1,
  /* 588 */  OCAML_PUSHACC,
  /* 589 */  10,
  /* 590 */  OCAML_PUSHGETGLOBAL_1B,
  /* 591 */  4,
  /* 592 */  OCAML_APPLY2,
  /* 593 */  OCAML_CONST1,
  /* 594 */  OCAML_PUSHACC,
  /* 595 */  10,
  /* 596 */  OCAML_PUSHGETGLOBAL_1B,
  /* 597 */  11,
  /* 598 */  OCAML_APPLY2,
  /* 599 */  OCAML_CONST0,
  /* 600 */  OCAML_PUSHACC,
  /* 601 */  10,
  /* 602 */  OCAML_PUSHGETGLOBAL_1B,
  /* 603 */  11,
  /* 604 */  OCAML_APPLY2,
  /* 605 */  OCAML_CONST1,
  /* 606 */  OCAML_PUSHACC,
  /* 607 */  10,
  /* 608 */  OCAML_PUSHGETGLOBAL_1B,
  /* 609 */  11,
  /* 610 */  OCAML_APPTERM2,
  /* 611 */  15,
  /* 612 */  OCAML_CLOSURE_1B,
  /* 613 */  0,
  /* 614 */  (opcode_t)-93,
  /* 615 */  OCAML_PUSHCONSTINT_1B,
  /* 616 */  (opcode_t)16,
  /* 617 */  OCAML_PUSHCONSTINT_1B,
  /* 618 */  (opcode_t)15,
  /* 619 */  OCAML_PUSHCONSTINT_1B,
  /* 620 */  (opcode_t)17,
  /* 621 */  OCAML_PUSHGETGLOBAL_1B,
  /* 622 */  13,
  /* 623 */  OCAML_APPLY3,
  /* 624 */  OCAML_CONST0,
  /* 625 */  OCAML_PUSHACC1,
  /* 626 */  OCAML_APPLY1,
  /* 627 */  OCAML_CONSTINT_1B,
  /* 628 */  (opcode_t)6,
  /* 629 */  OCAML_PUSHCONSTINT_1B,
  /* 630 */  (opcode_t)4,
  /* 631 */  OCAML_PUSHCONSTINT_1B,
  /* 632 */  (opcode_t)12,
  /* 633 */  OCAML_PUSHGETGLOBAL_1B,
  /* 634 */  14,
  /* 635 */  OCAML_APPLY3,
  /* 636 */  OCAML_CONST1,
  /* 637 */  OCAML_PUSHCONST0,
  /* 638 */  OCAML_PUSHCONST2,
  /* 639 */  OCAML_PUSHGETGLOBAL_1B,
  /* 640 */  15,
  /* 641 */  OCAML_APPLY3,
  /* 642 */  OCAML_CONST1,
  /* 643 */  OCAML_PUSHCONST0,
  /* 644 */  OCAML_PUSHCONSTINT_1B,
  /* 645 */  (opcode_t)4,
  /* 646 */  OCAML_PUSHGETGLOBAL_1B,
  /* 647 */  15,
  /* 648 */  OCAML_APPLY3,
  /* 649 */  OCAML_CONST1,
  /* 650 */  OCAML_PUSHCONST0,
  /* 651 */  OCAML_PUSHCONSTINT_1B,
  /* 652 */  (opcode_t)6,
  /* 653 */  OCAML_PUSHGETGLOBAL_1B,
  /* 654 */  15,
  /* 655 */  OCAML_APPLY3,
  /* 656 */  OCAML_CONST0,
  /* 657 */  OCAML_PUSHGETGLOBAL_1B,
  /* 658 */  16,
  /* 659 */  OCAML_APPLY1,
  /* 660 */  OCAML_POP,
  /* 661 */  1,
  /* 662 */  OCAML_STOP
};

#include </Users/travail/github/OMicroB/src/byterun/runtime.c>

PROGMEM void * const ocaml_primitives[OCAML_PRIMITIVE_NUMBER] = {
  (void *) &caml_array_unsafe_get,
  (void *) &caml_avr_set_bit,
  (void *) &caml_avr_clear_bit,
  (void *) &caml_avr_write_register,
  (void *) &caml_avr_read_bit,
  (void *) &caml_buffer_write,
  (void *) &caml_buffer_get_byte,
  (void *) &caml_obj_dup
};