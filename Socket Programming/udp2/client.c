                                                                //
  /*                                                            //
        server                 client                           //
       ---------            -------------                       //      
       socket                   socket                          //
         \/                       \/                            //      
        bind                    connect                         //
         \/                       \/                            //
      recevto                    sendto                         //
                                                                //
                                                    */          //
//////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<netinet/in.h>
#include<string.h>
#include<arpa/inet.h>
#include<unistd.h>

void main()
{

    int sockfd;
    char msg[100],bufer[100];
    
    struct sockaddr_in servaddr;
    servaddr.sin_family=AF_INET;
    servaddr.sin_port=tons(5000);
    servaddr.sin_addr.s_addr=inet_addr("127.0.0.1");

    // socket creation

    sockfd = socket(AF_INET,SOCK_DGRAM,0);


    if(connect(sockfd,(sockaddr *)&servaddr,sizeof(servaddr))<0){
        perror("Error in connection")
    }else printf("connected");

    
    fgets(msg,sizeof(msg),stdin);
    sendto(sockfd,msg,sizeof(msg));

    recevfrom(sockfd,buffer,100);
    printf("server : %s ",buffer);

}

