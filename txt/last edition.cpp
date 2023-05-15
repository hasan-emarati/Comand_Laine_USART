while (2)
  {       
          
          
  data = getchar();                       

          if (data==0X0D)
          {  
          if (rx_wr_index==0){printf("hasan@localhost:~$  ");}


                            
          getch = getchar(); 
          data = getchar();
          if (data==0X0D)
		  switch (getch)
               {
               case 'hh':
                  printf("\r\nhh = %d\r\n ",hh); 
               break;
               default: 
                  printf("\r\ncommand not fuond\r\n");
               break;
               }       
        
            }
           
  }
  // Declare your local variables here
char data;
char Enter=0X0D;
int h=12;
char getch;