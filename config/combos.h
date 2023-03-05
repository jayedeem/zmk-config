/* 
#define BASE 0
#define NUM 1 
#define SYM 2
#define SET 3 */


 
// layer alphas, numerics, symbols, settings

#define COMBOS(NAME, BINDINGS, KEYPOS, LAYERS) \
    combo_##NAME { \
       bindings = <BINDINGS>; \
       key-positions = <KEYPOS>; \
       layers = <LAYERS>; \
    }; 


