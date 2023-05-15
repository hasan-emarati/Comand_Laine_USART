#ifndef _LIBCOMMAND_H_
#define _LIBCOMMAND_H_

/////////////////start///////////////////////////////

switch (getch)
			  {
			  case 'help':
				  printf("\r\nhelp         :  Provides Help information for command LAnd commands.\r\nlog          :  syslog \r\nget port     : 	Set the base as output Example : get portA.0=1\r\nget pin      :  See the amount of inputs Example : get pinA.0\r\nset password :	Choose a password\r\nlcd_puts     : 	Show letters in LCD Example : lcd_puts(hello world)\r\nsysinfo      : 	system information\r\nRegister     :	pin or port\r\n");
				  break;
			  case 'syslog':
				  printf("\r\nPassword : hasan126523515\r\nTimer/Counter 1 initialization\r\nClock source: System Clock\r\nClock value: Timer1 Stopped\r\nMode: Normal top=0xFFFF\r\nOC1A output: Disconnected\r\nOC1B output: Disconnected\r\nNoise Canceler: Off\r\nInput Capture on Falling Edge\r\nTimer1 Overflow Interrupt: Off\r\nInput Capture Interrupt: Off\r\nCompare A Match Interrupt: Off\r\nCompare B Match Interrupt: Off\r\nTimer/Counter 2 initialization\r\nClock source: System Clock\r\nClock value: Timer2 Stopped\r\nMode: Normal top=0xFF\r\nOC2 output: Disconnected\r\nrx_counter          : %d\r\nRX_BUFFER           : %d\r\nRX_BUFFER_SIZE      : %d\r\ntx_counter          : %d\r\ntx_rd_index         : %d\r\nFRAMING_ERROR       : %d\r\nPARITY_ERROR        : %d\r\nUDR                 : %d\r\n_DEBUG_TERMINAL_IO_ : %d", rx_counter, RX_BUFFER, RX_BUFFER_SIZE, tx_counter, tx_rd_index, FRAMING_ERROR, PARITY_ERROR, UDR, _DEBUG_TERMINAL_IO_);
				  break;
			  case 'get port':
				  printf("\r\nget port \r\n         [ help | GROUP | VIEW | START | B.0=1]");
				  break;
			  case 'get pin':
				  printf("\r\nget pin \r\n         [ help | GROUP | VIEW | START | A.0=1]");
				  break;

			  case 'get portB.0=1':
				  PORTB.0 = 1;
				  break;
			  case 'get portB.1=1':
				  PORTB.1 = 1;
				  break;
			  case 'get portB.2=1':
				  PORTB.2 = 1;
				  break;
			  case 'get portB.3=1':
				  PORTB.3 = 1;
				  break;
			  case 'get portB.4=1':
				  PORTB.4 = 1;
				  break;
			  case 'get portB.5=1':
				  PORTB.5 = 1;
				  break;
			  case 'get portB.6=1':
				  PORTB.6 = 1;
				  break;
			  case 'get portB.7=1':
				  PORTB.7 = 1;
				  break;

				  // PORT == 0			

			  case 'get portB.0=0':
				  PORTB.0 = 0;
				  break;
			  case 'get portB.1=0':
				  PORTB.1 = 0;
				  break;
			  case 'get portB.2=0':
				  PORTB.2 = 0;
				  break;
			  case 'get portB.3=0':
				  PORTB.3 = 0;
				  break;
			  case 'get portB.4=0':
				  PORTB.4 = 0;
				  break;
			  case 'get portB.5=0':
				  PORTB.5 = 0;
				  break;
			  case 'get portB.6=0':
				  PORTB.6 = 0;
				  break;
			  case 'get portB.7=0':
				  PORTB.7 = 0;
				  break;

				  // END PORT
				  // get pin

			  case 'get pinA.0':
				  temp0 = read_adc(0);
				  sprintf(A0, "\r\nPINA.0 = %d \r\n", temp0);
				  printf("%d", A0);
				  break;
			  case 'get pinA.1':
				  temp1 = read_adc(1);
				  sprintf(A1, "\r\nPINA.1 = %d \r\n", temp1);
				  printf("%d", A1);
				  break;
			  case 'get pinA.2':
				  temp2 = read_adc(2);
				  sprintf(A2, "\r\nPINA.2 = %d \r\n", temp2);
				  printf("%d", A2);
				  break;
			  case 'get pinA.3':
				  temp3 = read_adc(3);
				  sprintf(A3, "\r\nPINA.3 = %d \r\n", temp3);
				  printf("%d", A3);
				  break;
			  case 'get pinA.4':
				  temp4 = read_adc(4);
				  sprintf(A4, "\r\nPINA.4 = %d \r\n", temp4);
				  printf("%d", A4);
				  break;
			  case 'get pinA.5':
				  temp5 = read_adc(5);
				  sprintf(A5, "\r\nPINA.5 = %d \r\n", temp5);
				  printf("%d", A5);
				  break;
			  case 'get pinA.6':
				  temp6 = read_adc(6);
				  sprintf(A6, "\r\nPINA.6 = %d \r\n", temp6);
				  printf("%d", A6);
				  break;
			  case 'get pinA.7':
				  temp7 = read_adc(7);
				  sprintf(A7, "\r\nPINA.7 = %d \r\n", temp7);
				  printf("%d", A7);
				  break;

				  // lcd flags

			  case 'lcd_puts ':         // meghdar az karbar grefteh mishavad 

				  printf("\r\nLCD : \r\n");
				  lcd = getchar();
				  lcd_puts(lcd);
				  delay_ms(100);
				  lcd_clear();
				  break;
				  case 'sysinfo';
					  printf("\r\n/***************************************************************************************************\1235448 \r\nChip type               : ATmega16\r\nProgram type            : Application\r\nAVR Core Clock frequency: 16.000000 MHz\r\nMemory model            : Small\r\nExternal RAM size       : 0\r\nData Stack size         : 256\r\nUSART Baud Rate         : 1200\r\ncommand line virsion    : 1.1\r\n*********************************************************************************************************/\r\n");
					  break;
				  case 'Register':
					  printf("\r\nPORT-A	:ADC\r\nPORT-B	:OUT\r\nPORT-C	:LCD-PINC.7=DEFULT\r\nPORT-D	:RXD-TXD-IN1-OC1\r\n");
					  break;
				  case 'echo':
					  printf("%d", getch);
					  break;
				  default:
					  printf("\r\ncommand not fuond\r\n");
					  break;