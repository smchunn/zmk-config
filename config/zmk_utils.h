#define UNPACK( ... ) __VA_ARGS__

#define ZMK_STRINGIFY(x) #x

#define COMBO(NAME, BINDINGS, KEYPOS, LAYERS, MS) \
    combo_ ## NAME { \
        bindings = <BINDINGS>; \
        key-positions = <KEYPOS>; \
        timeout-ms = <MS>; \
        layers = <LAYERS>; \
        COMBO_QT \
    };

#define MOD_MORPH(NAME, BINDINGS, MODS) \
    MM_ ## NAME: MM_ ## NAME { \
        compatible = "zmk,behavior-mod-morph"; \
        label = MM_ ## NAME; \
        #binding-cells = <0>; \
        bindings = UNPACK(BINDINGS); \
        mods = UNPACK(MODS); \
    };

