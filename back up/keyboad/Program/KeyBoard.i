
#pragma used+
sfrb TWBR=0;
sfrb TWSR=1;
sfrb TWAR=2;
sfrb TWDR=3;
sfrb ADCL=4;
sfrb ADCH=5;
sfrw ADCW=4;      
sfrb ADCSRA=6;
sfrb ADMUX=7;
sfrb ACSR=8;
sfrb UBRRL=9;
sfrb UCSRB=0xa;
sfrb UCSRA=0xb;
sfrb UDR=0xc;
sfrb SPCR=0xd;
sfrb SPSR=0xe;
sfrb SPDR=0xf;
sfrb PIND=0x10;
sfrb DDRD=0x11;
sfrb PORTD=0x12;
sfrb PINC=0x13;
sfrb DDRC=0x14;
sfrb PORTC=0x15;
sfrb PINB=0x16;
sfrb DDRB=0x17;
sfrb PORTB=0x18;
sfrb PINA=0x19;
sfrb DDRA=0x1a;
sfrb PORTA=0x1b;
sfrb EECR=0x1c;
sfrb EEDR=0x1d;
sfrb EEARL=0x1e;
sfrb EEARH=0x1f;
sfrw EEAR=0x1e;   
sfrb UBRRH=0x20;
sfrb UCSRC=0X20;
sfrb WDTCR=0x21;
sfrb ASSR=0x22;
sfrb OCR2=0x23;
sfrb TCNT2=0x24;
sfrb TCCR2=0x25;
sfrb ICR1L=0x26;
sfrb ICR1H=0x27;
sfrb OCR1BL=0x28;
sfrb OCR1BH=0x29;
sfrw OCR1B=0x28;  
sfrb OCR1AL=0x2a;
sfrb OCR1AH=0x2b;
sfrw OCR1A=0x2a;  
sfrb TCNT1L=0x2c;
sfrb TCNT1H=0x2d;
sfrw TCNT1=0x2c;  
sfrb TCCR1B=0x2e;
sfrb TCCR1A=0x2f;
sfrb SFIOR=0x30;
sfrb OSCCAL=0x31;
sfrb OCDR=0x31;
sfrb TCNT0=0x32;
sfrb TCCR0=0x33;
sfrb MCUCSR=0x34;
sfrb MCUCR=0x35;
sfrb TWCR=0x36;
sfrb SPMCR=0x37;
sfrb TIFR=0x38;
sfrb TIMSK=0x39;
sfrb GIFR=0x3a;
sfrb GICR=0x3b;
sfrb OCR0=0X3c;
sfrb SPL=0x3d;
sfrb SPH=0x3e;
sfrb SREG=0x3f;
#pragma used-

#asm
	#ifndef __SLEEP_DEFINED__
	#define __SLEEP_DEFINED__
	.EQU __se_bit=0x40
	.EQU __sm_mask=0xB0
	.EQU __sm_powerdown=0x20
	.EQU __sm_powersave=0x30
	.EQU __sm_standby=0xA0
	.EQU __sm_ext_standby=0xB0
	.EQU __sm_adc_noise_red=0x10
	.SET power_ctrl_reg=mcucr
	#endif
#endasm

typedef char *va_list;

#pragma used+

char getchar(void);
void putchar(char c);
void puts(char *str);
void putsf(char flash *str);
int printf(char flash *fmtstr,...);
int sprintf(char *str, char flash *fmtstr,...);
int vprintf(char flash * fmtstr, va_list argptr);
int vsprintf(char *str, char flash * fmtstr, va_list argptr);

char *gets(char *str,unsigned int len);
int snprintf(char *str, unsigned int size, char flash *fmtstr,...);
int vsnprintf(char *str, unsigned int size, char flash * fmtstr, va_list argptr);

int scanf(char flash *fmtstr,...);
int sscanf(char *str, char flash *fmtstr,...);

#pragma used-

#pragma library stdio.lib

#pragma used+

void delay_us(unsigned int n);
void delay_ms(unsigned int n);

#pragma used-

#pragma used+

unsigned char cabs(signed char x);
unsigned int abs(int x);
unsigned long labs(long x);
float fabs(float x);
int atoi(char *str);
long int atol(char *str);
float atof(char *str);
void itoa(int n,char *str);
void ltoa(long int n,char *str);
void ftoa(float n,unsigned char decimals,char *str);
void ftoe(float n,unsigned char decimals,char *str);
void srand(int seed);
int rand(void);
void *malloc(unsigned int size);
void *calloc(unsigned int num, unsigned int size);
void *realloc(void *ptr, unsigned int size); 
void free(void *ptr);

#pragma used-
#pragma library stdlib.lib

#pragma used+

char *strcat(char *str1,char *str2);
char *strcatf(char *str1,char flash *str2);
char *strchr(char *str,char c);
signed char strcmp(char *str1,char *str2);
signed char strcmpf(char *str1,char flash *str2);
char *strcpy(char *dest,char *src);
char *strcpyf(char *dest,char flash *src);
unsigned int strlenf(char flash *str);
char *strncat(char *str1,char *str2,unsigned char n);
char *strncatf(char *str1,char flash *str2,unsigned char n);
signed char strncmp(char *str1,char *str2,unsigned char n);
signed char strncmpf(char *str1,char flash *str2,unsigned char n);
char *strncpy(char *dest,char *src,unsigned char n);
char *strncpyf(char *dest,char flash *src,unsigned char n);
char *strpbrk(char *str,char *set);
char *strpbrkf(char *str,char flash *set);
char *strrchr(char *str,char c);
char *strrpbrk(char *str,char *set);
char *strrpbrkf(char *str,char flash *set);
char *strstr(char *str1,char *str2);
char *strstrf(char *str1,char flash *str2);
char *strtok(char *str1,char flash *str2);

unsigned int strlen(char *str);
void *memccpy(void *dest,void *src,char c,unsigned n);
void *memchr(void *buf,unsigned char c,unsigned n);
signed char memcmp(void *buf1,void *buf2,unsigned n);
signed char memcmpf(void *buf1,void flash *buf2,unsigned n);
void *memcpy(void *dest,void *src,unsigned n);
void *memcpyf(void *dest,void flash *src,unsigned n);
void *memmove(void *dest,void *src,unsigned n);
void *memset(void *buf,unsigned char c,unsigned n);
unsigned int strcspn(char *str,char *set);
unsigned int strcspnf(char *str,char flash *set);
int strpos(char *str,char c);
int strrpos(char *str,char c);
unsigned int strspn(char *str,char *set);
unsigned int strspnf(char *str,char flash *set);

#pragma used-
#pragma library string.lib

#asm
   .equ __lcd_port=0x18
#endasm

#pragma used+

void _lcd_ready(void);
void _lcd_write_data(unsigned char data);

void lcd_write_byte(unsigned char addr, unsigned char data);

unsigned char lcd_read_byte(unsigned char addr);

void lcd_gotoxy(unsigned char x, unsigned char y);

void lcd_clear(void);
void lcd_putchar(char c);

void lcd_puts(char *str);

void lcd_putsf(char flash *str);

unsigned char lcd_init(unsigned char lcd_columns);

void lcd_control (unsigned char control);

#pragma used-
#pragma library lcd.lib

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

interrupt [2] void ext_int0_isr(void){
count++;
if (h2==0)
{
if(bitcount < 11 && bitcount > 2)
{
data=(data >> 1);
if(PIND.7==1)data=(data|0b10000000);
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
strcatf(str,s2);
break;
case 0x04:
strcatf(str,s3);
break;  
case 0x0c:
strcatf(str,s4);
break;  
case 0x03:      
strcatf(str,s5);
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
strcatf(str,s10);
break;  
case 0x78:    
strcatf(str,s11);
break;  
case 0x07:      
strcatf(str,s12);
break;
case 0x0e:      
strcatf(str,s13);
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
case 0x2e:      
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
case 0x11:      
strcatf(str,s66);
break;
case 0x29:      
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
case 0x74:      
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
case 0x79:      
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
str[a-1]=0;
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
lcd_init(16);
#asm("sei")
while(1)
{  
key(out);
lcd_clear();
lcd_gotoxy(x,y);
lcd_puts(str);
delay_ms(500);
};
}
