/*
 * candump-ph-client.c
 *
 *  Created on: Mar 6, 2017
 *      Author: PengHui
 *
 *  Tips: This program is going to send CAN frames,so it must work with candump.c or some other programs which can recieve frames.
 *        candump.c is at https://github.com/linux-can/can-utils/
 */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <net/if.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <sys/ioctl.h>
#include <linux/can.h>
#include <linux/can/raw.h>
//int main(void) {
//	int s;
//	int nbytes;
//	struct sockaddr_can addr;
//	struct can_frame frame;
//	struct ifreq ifr;
//	char *ifname = "vcan1";
//	if ((s = socket(PF_CAN, SOCK_RAW, CAN_RAW)) < 0) {
//		perror("Error while opening socket");
//		return -1;
//	}
//	//将接口命名为ifname
//	strcpy(ifr.ifr_name, ifname);
//	ioctl(s, SIOCGIFINDEX, &ifr);
//
//	addr.can_family = AF_CAN;
//	addr.can_ifindex = ifr.ifr_ifindex;
//	printf("%s at index %d\n", ifname, ifr.ifr_ifindex);
//	if (bind(s, (struct sockaddr *) &addr, sizeof(addr)) < 0) {
//		perror("Error in socket bind");
//		return -2;
//	}
//	frame.can_id = 0x123;
//	frame.can_dlc = 3;//数据域有3字节
//	frame.data[0] = 0x11;
//	frame.data[1] = 0x22;
//	frame.data[2] = 0x33;
//	nbytes = write(s, &frame, sizeof(struct can_frame));
//	printf("Wrote %d bytes\n", nbytes);
//	return 0;
//}

