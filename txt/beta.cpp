while (1)
{

data = getchar();
if (data==Enter)
 {
printf("\r\nhasan@localhost 's password :   ");
password = getchar();
if (password==datapass)
{
printf("kipping hostkey chek for localhost\r\nhasan Welcome to command LAnd\r\n");
}
while (2)
  {       
  
  
  printf("hasan@localhost:~$  ");
  getch = getchar();                            // 
                              // data == input data == rxconter == buffer for Enter   
                                  // print micro data
                              // Enter == 0X0D                  // data bufer if (rx_counter !=0) not zero      
       
           switch (getch)                                                    //  switch case command line 
               {
               case 'h':
                  printf("\r\nh = %d\r\n ",h); 
               break;
               default: 
                  printf("\r\ncommand not fuond\r\n");
               break;
               }       
        
      
       
  }
  
       
 } 
  
}  
// Declare your local variables here
char data;
char Enter=0X0D;
int h=12;
char getch;
char password;
char datapass=0x0d;   
