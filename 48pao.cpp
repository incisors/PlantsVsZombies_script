#include "avz.h"
using namespace AvZ;
using namespace std;
void Script() {
    OpenMultipleEffective();
    SetZombies({ PJ_0,  TT_4,  WW_8,  QS_11,  BC_12,  XC_15,  KG_17,  HT_14,  CG_3,  BY_23,  HY_32});
    SelectCards({ HBG_14,  M_HBG_14,  KFD_35,  XPG_8,  YGG_9,  HP_33,  DXG_13,  HMG_15,  YTZD_2,  YZBHS_37});
    SetTime(-599,1);
    pao_operator.resetPaoList({{{1,1},{1,2},{1,3},{1,4},{1,5},{1,6},{1,7},{1,8},
                            {2,1},{2,2},{2,3},{2,4},{2,5},{2,6},{2,7},{2,8},
                            {3,1},{3,2},{3,3},{3,4},{3,5},{3,6},{3,7},{3,8},
                            {4,1},{4,2},{4,3},{4,4},{4,5},{4,6},{4,7},{4,8},
                            {5,1},{5,2},{5,3},{5,4},{5,5},{5,6},{5,7},{5,8},
                            {6,1},{6,2},{6,3},{6,4},{6,5},{6,6},{6,7},{6,8}}});


    //ice_filler.start({{4, 9}});
    for (auto wave : {1,2,3,4,5,6,7,8,11,12,13,14,15,16,17,18}) {
        SetTime(-95,wave);
        pao_operator.pao({{2,9},{5,9}});
        pao_operator.pao({{2,9},{5,9}});
        SetTime(-95+107,wave);
        pao_operator.pao({{1,8.8},{5,8.8}});
        pao_operator.pao({{1,8.8},{5,8.8}});
    }
    for (auto wave : {9,19}) {
        SetTime(-95,wave);
        pao_operator.pao({{2,9},{5,9}});
        pao_operator.pao({{2,9},{5,9}});
        SetTime(-95+107,wave);
        pao_operator.pao({{1,8.8},{5,8.8}});
        pao_operator.pao({{1,8.8},{5,8.8}});
    }
    // for (auto wave : {2,5,8,12,15,18}) {
    //     SetTime(-95,wave);
    //     pao_operator.pao({{2,9},{5,9}});
    //     SetTime(-95+373-100-198,wave);
    //     ice_filler.coffee();
    // }

    // for (auto wave : {3,6,9,13,16,19}) {
    //     SetTime(-95,wave);
    //     pao_operator.pao({{2,9},{5,9},{2,9},{5,9}});
    //     SetTime(-95+107,wave);
    //     pao_operator.pao({{1,8.8},{5,8.8}});
    // }
    SetTime(-95,10);
    pao_operator.pao({{2,9},{5,9},{2,9},{5,9},{2,9},{5,9}});
    SetTime(-95+107,10);
    pao_operator.pao({{1,8.8},{5,8.8}});

    // 炮消珊瑚
    SetTime(-150,20);
    pao_operator.pao({{4,7}});

    SetTime(-55,20);
    pao_operator.pao({{2,9},{5,9},{2,9},{5,9}});
    SetTime(-55+108,20);
    pao_operator.pao({{1,8.8},{5,8.8}});

    SetTime(400,20);
    pao_operator.pao({{2,9},{5,9}});
    SetTime(200,20);
    pao_operator.pao({{2,9},{5,9}});
}