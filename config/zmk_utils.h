#define COMBO(NAME, BINDINGS, KEYPOS, LAYERS, MS) \
    combo_##NAME { \
        bindings = <BINDINGS>; \
        key-positions = <KEYPOS>; \
        timeout-ms = <MS>; \
        layers = <LAYERS>; \
        COMBO_QT \
    };