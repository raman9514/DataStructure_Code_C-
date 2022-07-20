#include<netinet/in.h>      //h1
#include<stdio.h>           //h2
#include<stdlib.h>          //h3
#include<string.h>
#include<unistd.h>


// #include<sys/types.h> 
// #include<sys/socket.h>
// #include<unistd.h>


void main()
{
 int sockfd , client_sockfd,client_length,temp,i;
 struct sockaddr_in server_addr ,client_addr;       //h1
 char msg[250],msg2[250],t[250];
 sockfd = socket(AF_INET,SOCK_STREAM,0);            //h1

 if(sockfd<0)
  {  perror("Error in socket creation");            //h2
     exit(1);}
 else  printf("socket created success fully \n");
 
//  bzero((char *)&server_addr,sizeof(server_addr));
       
       server_addr.sin_family=AF_INET;
       server_addr.sin_addr.s_addr=INADDR_ANY;
       server_addr.sin_port=htons(8021);


    if(bind(sockfd,(struct sockaddr *)&server_addr,sizeof(server_addr))<0)
        {
            perror("Error in Binding");
           exit(1);                                                                 //h3
        }else printf("Binding competed \n");

    
    if(listen(sockfd , 5)<0){
        perror("errorn in listening");
        exit(1);
    }else printf("listening.... \n");

  client_length=sizeof(client_addr);

  client_sockfd = accept(sockfd,(struct sockaddr *)&client_addr,&client_length);

  if(client_sockfd<0){
      perror("Error in accepting ");
      exit(1);
  }else printf("Client is connected .");




   bzero(msg,250);
   temp =  read(client_sockfd,msg2,250);
   
 
//    printf("\n client : %s ",msg2);
    
    for(i=0;i<=10;i++){
        printf("%d :  %c \n",i,msg2[i]);
    }
    
  if(msg2[0] == "b"){
        printf("Exiting");
    }

//    bzero(msg,250);

//    fgets(msg,250,stdin);
//    temp = write(client_sockfd,"Hello client ",250);

scanf("%d",&i);


    
close(sockfd);
close(client_sockfd);

}

