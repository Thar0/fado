#include "fairy.h"
#include <elf.h>

// clang-format off
static const FairyDefineString stTypes[] = {
    FAIRY_DEF_STRING(STT_, NOTYPE),
    FAIRY_DEF_STRING(STT_, OBJECT),
    FAIRY_DEF_STRING(STT_, FUNC),
    FAIRY_DEF_STRING(STT_, SECTION),
    FAIRY_DEF_STRING(STT_, FILE),
    FAIRY_DEF_STRING(STT_, COMMON),
    FAIRY_DEF_STRING(STT_, TLS),
    FAIRY_DEF_STRING(STT_, NUM),
    FAIRY_DEF_STRING(STT_, LOOS),
    FAIRY_DEF_STRING(STT_, GNU_IFUNC),
    FAIRY_DEF_STRING(STT_, HIOS),
    FAIRY_DEF_STRING(STT_, LOPROC),
    FAIRY_DEF_STRING(STT_, HIPROC),
    { 0 },
};

static const FairyDefineString stBinds[] = {
    FAIRY_DEF_STRING(STB_, LOCAL),
    FAIRY_DEF_STRING(STB_, GLOBAL),
    FAIRY_DEF_STRING(STB_, WEAK),
    FAIRY_DEF_STRING(STB_, NUM),
    FAIRY_DEF_STRING(STB_, LOOS),
    FAIRY_DEF_STRING(STB_, GNU_UNIQUE),
    FAIRY_DEF_STRING(STB_, HIOS),
    FAIRY_DEF_STRING(STB_, LOPROC),
    FAIRY_DEF_STRING(STB_, HIPROC),
    { 0 },
};

static const FairyDefineString stVisibilities[] = {
    FAIRY_DEF_STRING(STV_, DEFAULT),
    FAIRY_DEF_STRING(STV_, INTERNAL),
    FAIRY_DEF_STRING(STV_, HIDDEN),
    FAIRY_DEF_STRING(STV_, PROTECTED),
    { 0 },
};

// clang-format on