#include "pxt.h"

namespace customaudio {

    //%
    int dummy() {
        return 1;
    }

    //%
    void setSilenceLevel(int level) {
        // placeholder safe call
        uBit.serial.send("hello\n");
    }
}
