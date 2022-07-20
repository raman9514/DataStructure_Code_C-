#include<netinet/in.h>
#include<stdio.h>
#include<stdlib.h>
#include<arpa/inet.h>                           //h1
// // #include<sys/socket.h>
// // #include<sys/types.h>
// #include<netdb.h>
#include<strings.h>                             //h2
#include<unistd.h>                              //h3

void main()
{

int sockfd,temp;
char msg[250];
struct sockaddr_in client_addr;

sockfd = socket(AF_INET,SOCK_STREAM,0);

if(sockfd<0)
{
    perror("Error in creating socket ");
    exit(1);
}else printf("Socket created \n");


client_addr.sin_family=AF_INET;
client_addr.sin_port=htons(8021);
inet_pton(AF_INET, "127.0.0.1", &client_addr.sin_addr);             //h1


if(connect(sockfd,(struct sockaddr *)&client_addr,sizeof(client_addr))<0)
{
  perror("Error in connecting ");
  exit(1);
}else printf("Connected\n");


while(1){

 bzero(msg,250);                      //h2
 printf("client : ");
 fgets(msg,250,stdin);
 temp = write(sockfd,msg,250);        //h3
 
bzero(msg,250);
printf("server : ");
temp = read(sockfd,msg,250);          //h3
printf("%s",msg);




}


close(sockfd);

}