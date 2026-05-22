#include "pxt.h"

using namespace pxt;

namespace customaudio {

    //%
    void setSilenceLevel(int level) {
        uBit.audio.setSilenceLevel(level);
    }
}
