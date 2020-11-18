#pragma once

#include "quantum.h"

#define KNO KC_NO

#define LAYOUT_default( \
  K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, K0C, K0D, K0E, K0F, K0G, \
  K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C, K1D, K1E, K1F, K1G, \
  K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, K2C,                     \
  K30, K31, K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B,                K3F,      \
  K40, K41, K42,           K45,                     K4A, K4B, K4C, K4D, K4E, K4F, K4G  \
) { \
  {  K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, K0C, K0D, K0E, K0F, K0G,  }, \
  {  K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C, K1D, K1E, K1F, K1G,  }, \
  {  K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, K2C, KNO, KNO, KNO, KNO,  }, \
  {  K30, K31, K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B, KNO, KNO, KNO, K3F, KNO,  }, \
  {  K40, K41, K42, KNO, KNO, K45, KNO, KNO, KNO, KNO, K4A, K4B, K4C, K4D, K4E, K4F, K4G,  }  \
}
