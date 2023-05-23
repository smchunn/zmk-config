#define ZMK_STRINGIFY(x) #x

#define COMBO(NAME, BINDINGS, KEYPOS, LAYERS, MS) \
    combo_##NAME { \
        bindings = <BINDINGS>; \
        key-positions = <KEYPOS>; \
        timeout-ms = <MS>; \
        layers = <LAYERS>; \
        COMBO_QT \
    };

#define MOD_MORPH(NAME, BINDINGS, MODS) \
    NAME: NAME { \
            compatible = "zmk,behavior-mod-morph"; \
            label = ZMK_STRINGIFY(MM_ ## NAME); \
            #binding-cells = <0>; \
            bindings = BINDINGS; \
            mods = <(MODS)>; \
        };