/*
 * BIT_MATH.h
 *
 * Created: 6/10/2024 4:39:13 PM
 *  Author: Mina-Nasser
 */ 


#ifndef BIT_MATH_H_
#define BIT_MATH_H_

#define SET_BIT(x,bit_num) x |= (1<<bit_num)
#define CLEAR_BIT(x,bit_num) x &= ~(1<<bit_num)
#define TOGGLE_BIT(x,bit_num) x ^= (1<<bit_num)
#define READ_BIT(x,bit_num) ((x&(1<<bit_num))>>bit_num)
#define MAX(x,y) ((x)>(y)) ? (x):(y)
#define MIN(x,y) ((x)<(y)) ? (x):(y)

#define SET_REG(Reg) Reg=0xFF
#define CLEAR_REG(Reg) Reg=0x00
#define TOOGLE_REG(Reg) Reg^=0xFF
#define ASSIGN_REG(Reg,Value) Reg=Value
#define SET_BITS_REG(Reg,Mask) Reg|=(Mask)
#define CLEAR_BITS_REG(Reg,Mask) Reg=(Reg&(~Mask))


#endif /* BIT_MATH_H_ */