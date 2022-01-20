#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
#include <assert.h>
#include "common.h"
/**
 * @file 1.c
 * @author Anthony (you@domain.com)
 * @brief 
 * 
 * 1. the OS is sometimes known as a resource manager. Each of the CPU,
 * memory, and disk is a resource of the system, it is thus the operating system's role to manage those resources. 
 * @date 2022-01-20
 * 
 * @copyright Copyright (c) 2022
 */

int main(int argc, char *argv[]){
    if(argc != 2){
        fprintf(stderr,"Usage: ");
	exit(1);
    }
    while(1){
	fprintf(stdout,"Group");
	fprintf(stderr,"XiyouLinux");
	getchar();
	}

	
}
