/*-------------------------------------------------------------------------
   reg51.h - Register Declarations for 8051 Processor
   Copyright (C) 1998, Sandeep Dutta . sandeep.dutta@usa.net
   This library is free software; you can redistribute it and/or modify it
   under the terms of the GNU General Public License as published by the
   Free Software Foundation; either version 2.1, or (at your option) any
   later version.
   This library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
   GNU General Public License for more details.
   You should have received a copy of the GNU General Public License 
   along with this library; see the file COPYING. If not, write to the
   Free Software Foundation, 51 Franklin Street, Fifth Floor, Boston,
   MA 02110-1301, USA.
   As a special exception, if you link this library with other files,
   some of which are compiled with SDCC, to produce an executable,
   this library does not by itself cause the resulting executable to
   be covered by the GNU General Public License. This exception does
   not however invalidate any other reasons why the executable file
   might be covered by the GNU General Public License.
-------------------------------------------------------------------------*/

#ifndef REG51_H
#define REG51_H

#warning This file (reg51.h) is obsolete, depending on your harware
#warning use include <8051.h>, or include <8052.h>!

/*  BYTE Register  */
sfr at 0x80 P0   ;
sfr at 0x90 P1   ;
sfr at 0xA0 P2   ;
sfr at 0xB0 P3   ;
sfr at 0xD0 PSW  ;
sfr at 0xE0 ACC  ;
sfr at 0xF0 B    ;
sfr at 0x81 SP   ;
sfr at 0x82 DPL  ;
sfr at 0x83 DPH  ;
sfr at 0x87 PCON ;
sfr at 0x88 TCON ;
sfr at 0x89 TMOD ;
sfr at 0x8A TL0  ;
sfr at 0x8B TL1  ;
sfr at 0x8C TH0  ;
sfr at 0x8D TH1  ;
sfr at 0x8E AUXR ;
sfr at 0xA8 IE   ;
sfr at 0xB8 IP   ;
sfr at 0x98 SCON ;
sfr at 0x99 SBUF ;


/*  BIT Register  */
/*  PSW   */
sbit at 0xD7 CY   ;
sbit at 0xD6 AC   ;
sbit at 0xD5 F0   ;
sbit at 0xD4 RS1  ;
sbit at 0xD3 RS0  ;
sbit at 0xD2 OV   ;
sbit at 0xD0 P    ;

/*  TCON  */
sbit at 0x8F TF1  ;
sbit at 0x8E TR1  ;
sbit at 0x8D TF0  ;
sbit at 0x8C TR0  ;
sbit at 0x8B IE1  ;
sbit at 0x8A IT1  ;
sbit at 0x89 IE0  ;
sbit at 0x88 IT0  ;

/*  IE   */
sbit at 0xAF EA   ;
sbit at 0xAC ES   ;
sbit at 0xAB ET1  ;
sbit at 0xAA EX1  ;
sbit at 0xA9 ET0  ;
sbit at 0xA8 EX0  ;

/*  IP   */
sbit at 0xBC PS   ;
sbit at 0xBB PT1  ;
sbit at 0xBA PX1  ;
sbit at 0xB9 PT0  ;
sbit at 0xB8 PX0  ;

/*  P3  */
sbit at 0xB7 RD   ;
sbit at 0xB6 WR   ;
sbit at 0xB5 T1   ;
sbit at 0xB4 T0   ;
sbit at 0xB3 INT1 ;
sbit at 0xB2 INT0 ;
sbit at 0xB1 TXD  ;
sbit at 0xB0 RXD  ;

/* P1 */
sbit at 0x90 P1_0 ;
sbit at 0x91 P1_1 ;
sbit at 0x92 P1_2 ;
sbit at 0x93 P1_3 ;
sbit at 0x94 P1_4 ;
sbit at 0x95 P1_5 ;
sbit at 0x96 P1_6 ;
sbit at 0x97 P1_7 ;

/*  SCON  */
sbit at 0x9F SM0  ;
sbit at 0x9E SM1  ;
sbit at 0x9D SM2  ;
sbit at 0x9C REN  ;
sbit at 0x9B TB8  ;
sbit at 0x9A RB8  ;
sbit at 0x99 TI   ;
sbit at 0x98 RI   ;

/* TMOD bits */
#define GATE1   (1<<7)
#define C_T1    (1<<6)
#define M1_1    (1<<5)
#define M0_1    (1<<4)
#define GATE0   (1<<3)
#define C_T0    (1<<2)
#define M1_0    (1<<1)
#define M0_0    (1<<0)

/* T2CON */
sfr at 0xC8 T2CON ;

/* T2CON bits */
sbit at 0xC8 T2CON_0 ;
sbit at 0xC9 T2CON_1 ;
sbit at 0xCA T2CON_2 ;
sbit at 0xCB T2CON_3 ;
sbit at 0xCC T2CON_4 ;
sbit at 0xCD T2CON_5 ;
sbit at 0xCE T2CON_6 ;
sbit at 0xCF T2CON_7 ;

/* RCAP2 L & H */
sfr at 0xCB RCAP2H;
sfr at 0xCA RCAP2L;

#endif










////////////////////////////////////////////////////////////////////////////////////////
/*****************************************************
Project : keybord_scan
Version : 1.1
Date    : 1386/11/8
Author  : hamid                          
Company : badami                          
Comments:
downloaded From : bargh20.com - marvella

Chip type           : ATmega16
Program type        : Application
Clock frequency     : 16.000000 MHz
Memory model        : Small
External SRAM size  : 0
Data Stack size     : 256
*****************************************************/
#include <mega16.h>
#include <stdio.h>
#include <delay.h>
#include <stdlib.h>
#include <string.h>

#asm
   .equ __lcd_port=0x18
#endasm
#include <lcd.h>

//bargh20.com
bit h2=0,y=0;
unsigned int   count=0;
unsigned char  a,x,h1=0,out=0,bitcount=11,data;
unsigned char str[20];
char str2[20];

                      
flash unsigned char s0[]="ESC",s1[]="F1",s2[]="F2",s3[]="F3",s4[]="F4";
flash unsigned char s5[]="F5",s6[]="F6",s7[]="F7",s8[]="F8",s9[]="F9";
flash unsigned char s10[]="F10",s11[]="F11",s12[]="F12",s13[]="~",s14[]="!";
flash unsigned char s15[]="@",s16[]="#",s17[]="$",s18[]="%",s19[]="^";
flash unsigned char s20[]="&",s21[]="*",s22[]="(",s23[]=")",s24[]="_";
flash unsigned char s25[]="+",s26[]="/",s27[]="",s28[]="Q",s29[]="W";  
flash unsigned char s30[]="E",s31[]="R",s32[]="T",s33[]="Y",s34[]="U";
flash unsigned char s35[]="I",s36[]="O",s37[]="P",s38[]="{",s39[]="}";
flash unsigned char s40[]="A",s41[]="S",s42[]="D",s43[]="F",s44[]="G";
flash unsigned char s45[]="H",s46[]="J",s47[]="K",s48[]="L",s49[]=";";
flash unsigned char s50[]="'",s51[]="",s52[]="SHI",s53[]="Z",s54[]="X";
flash unsigned char s55[]="C",s56[]="V",s57[]="B",s58[]="N",s59[]="M";
flash unsigned char s60[]="<",s61[]=">",s62[]="?",s63[]="shi",s64[]="ctr";
flash unsigned char s65[]="Win",s66[]="Alt",s67[]=" ",s68[]="Win",s69[]="0";
flash unsigned char s70[]=".",s71[]="1",s72[]="2",s73[]="3",s74[]="4";
flash unsigned char s75[]="5",s76[]="6",s77[]="7",s78[]="8",s79[]="9";
flash unsigned char s80[]="+",s81[]="-",s82[]="*";




interrupt [EXT_INT0] void ext_int0_isr(void){
count++;
if (h2==0)
{
if(bitcount < 11 && bitcount > 2)
{
data=(data >> 1);
if(PIND.7==1)data=(data|0b10000000);//bargh20.com
}
MCUCR=3;
h2=1;
}

if(h2==1){
MCUCR=2;
h2=0;
if(--bitcount==0)
{
out=data;
bitcount=11;
}
}
}  

//**************************************//bargh20.com
void key(unsigned char in){
switch (in)
{
case 0x76:
strcatf(str,s0);
break;
case 0x05:
strcatf(str,s1);
break;  
case 0x06:
strcatf(str,s2);//bargh20.com
break;
case 0x04:
strcatf(str,s3);
break;  
case 0x0c:
strcatf(str,s4);
break;  
case 0x03:      
strcatf(str,s5);//bargh20.com
break;  
case 0x0b:      
strcatf(str,s6);
break;  
case 0x83:      
strcatf(str,s7);
break;          
case 0x0a:
strcatf(str,s8);
break;          
case 0x01:      
strcatf(str,s9);
break;  
case 0x09:      
strcatf(str,s10);//bargh20.com
break;  
case 0x78:    
strcatf(str,s11);
break;  
case 0x07:      
strcatf(str,s12);
break;
case 0x0e:      
strcatf(str,s13);//b a r g h 2 0 
break;  
case 0x16:      
strcatf(str,s14);
break;
case 0x1e:      
strcatf(str,s15);
break;
case 0x26:      
strcatf(str,s16);
break;        
case 0x25:      
strcatf(str,s17);
break;
case 0x2e:      //bargh20.com
strcatf(str,s18);
break;
case 0x36:      
strcatf(str,s19);
break;
case 0x3d:      
strcatf(str,s20);
break;
case 0x3e:      
strcatf(str,s21);
break;
case 0x46:      
strcatf(str,s22);
break;
case 0x45:      
strcatf(str,s23);
break;
case 0x4e:      
strcatf(str,s24);
break;
case 0x55:      
strcatf(str,s25);
break;
case 0x5d:      
strcatf(str,s26);
break;
case 0x0d:      
lcd_clear();
strcpy(str,str2);
break;          
case 0x15:      
strcatf(str,s28);
break;
case 0x1d:      
strcatf(str,s29);
break;
case 0x24:      
strcatf(str,s30);
break;
case 0x2d:      
strcatf(str,s31);
break;
case 0x2c:      
strcatf(str,s32);
break;
case 0x35:      
strcatf(str,s33);
break;
case 0x3c:    
strcatf(str,s34);
break;
case 0x43:      
strcatf(str,s35);
break;
case 0x44:      
strcatf(str,s36);
break;
case 0x4d:      
strcatf(str,s37);
break;
case 0x54:      
strcatf(str,s38);
break;
case 0x5b:      
strcatf(str,s39);
break;
case 0x1c:      
strcatf(str,s40);
break;
case 0x1b:      
strcatf(str,s41);
break;
case 0x23:      
strcatf(str,s42);
break;
case 0x2b:      
strcatf(str,s43);
break;
case 0x34:      
strcatf(str,s44);
break;
case 0x33:      
strcatf(str,s45);
break;
case 0x3b:      
strcatf(str,s46);
break;
case 0x42:      
strcatf(str,s47);
break;  
case 0x4b:      
strcatf(str,s48);
break;
case 0x4c:      
strcatf(str,s49);
break;
case 0x52:      
strcatf(str,s50);
break;
case 0x5a:
y=~y;
strcpy(str,str2);
break;
case 0x12:      
x--;
break;
case 0x1a:      
strcatf(str,s53);
break;
case 0x22:      
strcatf(str,s54);
break;
case 0x21:      
strcatf(str,s55);
break;
case 0x2a:      
strcatf(str,s56);
break;
case 0x32:      
strcatf(str,s57);
break;
case 0x31:      
strcatf(str,s58);
break;
case 0x3a:      
strcatf(str,s59);
break;
case 0x41:      
strcatf(str,s60);
break;
case 0x49:      
strcatf(str,s61);
break;
case 0x4a:      
strcatf(str,s62);
break;
case 0x59:      
x++;
break;  
case 0x14:      
strcatf(str,s64);
break;
case 0x27:      
strcatf(str,s65);
break;
//b ar gh 2 0. c o    m  
case 0x11:      
strcatf(str,s66);
break;
case 0x29:      //bargh20.com
strcatf(str,s67);
break;
case 0x1f:      
strcatf(str,s68);
break;
case 0x70:      
strcatf(str,s69);
break;
case 0x71:      
strcatf(str,s70);
break;
case 0x69:      
strcatf(str,s71);
break;
case 0x72:      
strcatf(str,s72);
break;          
case 0x7a:      
strcatf(str,s73);
break;
case 0x6b:      
strcatf(str,s74);
break;
case 0x73:      
strcatf(str,s75);
break;
case 0x74:      //bargh20.com
strcatf(str,s76);
break;
case 0x6c:      
strcatf(str,s77);
break;
case 0x75:      
strcatf(str,s78);
break;
case 0x7d:      
strcatf(str,s79);
break;
case 0x79:      //bargh20.com
strcatf(str,s80);
break;
case 0x7b:      
strcatf(str,s81);
break;
case 0x7c:      
strcatf(str,s82);
break;

case 0x66:      
a=strlen(str);
str[a-1]=0;//bargh20.com
break;
          
}
if(out!=0)h1++;
out=0;
}
void main(void)
{
GICR|=0x40;
MCUCR=0x02;
MCUCSR=0x00;
GIFR=0x40;
ACSR=0x80;

DDRD.7=0;
lcd_init(16);//bargh20.com
#asm("sei")
while(1)
      {  
      key(out);
      lcd_clear();
      lcd_gotoxy(x,y);
      lcd_puts(str);//bargh20.com
      delay_ms(500);
      };
}
