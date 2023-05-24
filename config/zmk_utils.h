#define UNPACK( ... ) __VA_ARGS__

#define STRINGIFY(x) #x

#define COMBO(NAME, BINDINGS, KEYPOS, LAYERS, MS) \
    combo_ ## NAME { \
        bindings = <BINDINGS>; \
        key-positions = <KEYPOS>; \
        timeout-ms = <MS>; \
        layers = <LAYERS>; \
        COMBO_QT \
    };

#define MOD_MORPH(NAME, BINDINGS, MODS) \
    mm_ ## NAME: mm_ ## NAME { \
        compatible = "zmk,behavior-mod-morph"; \
        label = STRINGIFY(mm_ ## NAME); \
        #binding-cells = <0>; \
        bindings = UNPACK BINDINGS; \
        mods = UNPACK MODS; \
    };

