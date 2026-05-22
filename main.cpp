#include "pxt.h"

using namespace pxt;

namespace customaudio {

    //%
    void setSilenceLevel(int level) {
        uBit.serial.send("hello\n"); //uBit.audio.setSilenceLevel(level);
    }
}
