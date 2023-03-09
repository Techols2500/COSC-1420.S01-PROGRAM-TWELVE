#ifndef BIT_MACROS_H
#define BIT_MACROS_H

#define ShiftLeft(Bits,HowMuch)	((Bits) << (HowMuch))


#define IsOn(Bits,Which) (ShiftLeft (1, Which) & (Bits))
#define TurnOn(Bits,Which) ((ShiftLeft(1,Which) | Bits))
#define TurnOff(Bits,Which) ((~(ShiftLeft(1,Which))) & Bits)
#define Toggle(Bits,Which) ((ShiftLeft(1,Which) ^ Bits)) 
#endif