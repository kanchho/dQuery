/* 
  Author : Bibek Koirala
  Description : Resolve and print all the IP addresses of hostname. 
*/

# define _BSD_SOURCE

#include <stdio.h>
#include <stdlib.h>
#include <netdb.h>
#include <arpa/inet.h>
#include <netinet/in.h>
#include <sys/socket.h>


int main(int argc, char*argv[]) {

  char *hostname = (argc > 1) ? argv[1] : "localhost";
  struct hostent *host_entry = gethostbyname(hostname);  

  if (host_entry) {
      struct in_addr **address = (struct in_addr**) host_entry -> h_addr_list;
      while (*address) printf("%s\n", inet_ntoa(**(address++)));
  }
  else {
     printf("%s\n", hstrerror(h_errno));
  }

  return 0;
}
