//
// Created by mano on 18.10.16.
//

#ifndef PRJ_INCLUDES_H
#define PRJ_INCLUDES_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/time.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <signal.h>
#include <netdb.h>
#include <unistd.h>
#include <fcntl.h>
#include <dirent.h>
#include <thread>
#include <mutex>
#include <condition_variable>
#include <string>
#include <map>
#include <thread>
#include <set>
#include <queue>
#include <cstdint>
#include <ctime>
#include <atomic>

typedef std::pair<int, unsigned short> Ip_Port;

// cuttom sizes buffers:
#define CUSTOM_SERVER_BUFFER_SIZE 1024
#define CUSTOM_CONNECTION_TMP_BUFFER_SIZE 1024
#define CUSTOM_CONNECTION_RECV_BUFFER_SIZE 1000
#define CUSTOM_CONNECTION_SEND_BUFFER_SIZE 1000

// microsecounds:
#define CUSTOM_PERIOD_SEND_DATA 10
#define CUSTOM_SELECT_TIMEOUT 3000000
#define CUSTOM_RECEIVE_TIMEOUT 10000000

#define CUSTOM_SIZE_CONNECTIONS_QUEUE 10

#define SEND_WITH_DATA 0
#define SEND_ONLY_ACK 1

#define SIZE_PIPE_BUFFER_LIMIT 10000

#define SECOUND_TO_USEC 1000000

#endif //PRJ_INCLUDES_H
