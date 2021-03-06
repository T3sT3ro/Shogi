//
// Created by Tooster on 26.01.2018.
//

#ifndef SHOGI_UTILS_H
#define SHOGI_UTILS_H


/// enum for pawns

#define     SHOGI_UI_SCALE                     0.7

#define     SHOGI_PAWN_IS_BLACK(pawn)       ((pawn) == SHOGI_PAWN_NONE ? 0 : ((pawn)%2 == 1))
#define     SHOGI_PAWN_IS_WHITE(pawn)       ((pawn) == SHOGI_PAWN_NONE ? 0 : ((pawn)%2 == 0))

#define     SHOGI_PAWN_COUNT                8
enum SHOGI_PAWN {
    SHOGI_PAWN_K,
    SHOGI_PAWN_G,
    SHOGI_PAWN_S,
    SHOGI_PAWN_N,
    SHOGI_PAWN_L,
    SHOGI_PAWN_B,
    SHOGI_PAWN_R,
    SHOGI_PAWN_P,
    SHOGI_PAWN_NONE = -1

};

#define     SHOGI_PAWN_DETAILED_COUNT       28
#define     SHOGI_PAWN_PRO_OFFSET           12  // offset between pawn and it's promoted counterpart
#define     SHOGI_PAWN_PROMOTABLE_START     SHOGI_PAWN_DETAILED_S_WHITE   // idx of first promotable pawn
#define     SHOGI_PAWN_PROMOTABLE_END       SHOGI_PAWN_DETAILED_S_PRO_WHITE  // idx + 1 of last promotable piece
#define     SHOGI_PAWN_DETAILED_IS_PROMOTABLE(pawn) ((pawn) != SHOGI_PAWN_DETAILED_NONE && \
                                                     (pawn) >= SHOGI_PAWN_PROMOTABLE_START && \
                                                     (pawn) < SHOGI_PAWN_PROMOTABLE_END)
#define     SHOGI_PAWN_TO_BASE_TYPE(pawn_detailed)  (enum SHOGI_PAWN)((pawn_detailed) == SHOGI_PAWN_DETAILED_NONE ? \
                                                                                                SHOGI_PAWN_NONE : \
                                                                                                ((pawn_detailed) >= SHOGI_PAWN_PROMOTABLE_END ? ((pawn_detailed) - SHOGI_PAWN_PRO_OFFSET) / 2 : (pawn_detailed) / 2))
#define     SHOGI_PAWN_TO_DETAILED_TYPE(pawn_base, is_black) ((enum SHOGI_PAWN_DETAILED)((pawn_base) == SHOGI_PAWN_NONE ?\
                                                                                                                        SHOGI_PAWN_DETAILED_NONE : \
                                                                                                                        ((pawn_base)*2 + ((is_black) ? 1 : 0))))
#define     SHOGI_PAWN_IS_PROMOTED(pawn_detailed) ((pawn_detailed) >= SHOGI_PAWN_DETAILED_S_PRO_WHITE)

enum SHOGI_PAWN_DETAILED {
    SHOGI_PAWN_DETAILED_K_WHITE,
    SHOGI_PAWN_DETAILED_K_BLACK,

    SHOGI_PAWN_DETAILED_G_WHITE,
    SHOGI_PAWN_DETAILED_G_BLACK,

    SHOGI_PAWN_DETAILED_S_WHITE,
    SHOGI_PAWN_DETAILED_S_BLACK,

    SHOGI_PAWN_DETAILED_N_WHITE,
    SHOGI_PAWN_DETAILED_N_BLACK,

    SHOGI_PAWN_DETAILED_L_WHITE,
    SHOGI_PAWN_DETAILED_L_BLACK,

    SHOGI_PAWN_DETAILED_B_WHITE,
    SHOGI_PAWN_DETAILED_B_BLACK,

    SHOGI_PAWN_DETAILED_R_WHITE,
    SHOGI_PAWN_DETAILED_R_BLACK,

    SHOGI_PAWN_DETAILED_P_WHITE,
    SHOGI_PAWN_DETAILED_P_BLACK,

    SHOGI_PAWN_DETAILED_S_PRO_WHITE,
    SHOGI_PAWN_DETAILED_S_PRO_BLACK,

    SHOGI_PAWN_DETAILED_N_PRO_WHITE,
    SHOGI_PAWN_DETAILED_N_PRO_BLACK,

    SHOGI_PAWN_DETAILED_L_PRO_WHITE,
    SHOGI_PAWN_DETAILED_L_PRO_BLACK,

    SHOGI_PAWN_DETAILED_B_PRO_WHITE,
    SHOGI_PAWN_DETAILED_B_PRO_BLACK,

    SHOGI_PAWN_DETAILED_R_PRO_WHITE,
    SHOGI_PAWN_DETAILED_R_PRO_BLACK,

    SHOGI_PAWN_DETAILED_P_PRO_WHITE,
    SHOGI_PAWN_DETAILED_P_PRO_BLACK,

    SHOGI_PAWN_DETAILED_NONE = -1
};

#endif //SHOGI_UTILS_H
