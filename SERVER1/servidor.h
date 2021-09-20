#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <unistd.h>
#include <arpa/inet.h>
#include <sys/socket.h>

#define PORTMAPPER 1111 // Servidor de nombres
#define SERVICE_PORT 4444

// utilerias

int portmapper(char * host);        // conexión con servidor de nombres
int initialization();               // inicialiación del servicio
int connection(int socket_desc);    // esperar a los clientes
int close(int sock);

// servicio(s)

int store(char * m);
