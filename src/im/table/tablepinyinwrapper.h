
#ifndef TABLEPINYINWRAPPER_H
#define TABLEPINYINWRAPPER_H

#include "fcitx/addon.h"
#include "fcitx-config/hotkey.h"
#include "fcitx/ime.h"

void Table_LoadPYBaseDict(FcitxAddon* pyaddon);
void Table_PYGetPYByHZ(FcitxAddon* pyaddon, char *a, char* b);
INPUT_RETURN_VALUE Table_PYGetCandWord(void* arg, CandidateWord* candidateWord);
void Table_DoPYInput(FcitxAddon* pyaddon, FcitxKeySym sym, unsigned int state);
void Table_PYGetCandWords(FcitxAddon* pyaddon);
void Table_ResetPY(FcitxAddon* pyaddon);
char* Table_PYGetFindString(FcitxAddon* pyaddon);

#endif