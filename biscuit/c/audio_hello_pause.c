#include <common.h>
#include <stdio.h>
#include <errno.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdint.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/time.h>
#include <sys/ioctl.h>

int main(int argc, char **argv)
{
	printf("hello audio world (pause)!\n");

    int fd_dsp;
    fd_dsp = open("/dev/dsp", O_WRONLY);
    if (fd_dsp < 0) {
        printf("fail to open /dev/dsp");
        return 1;
    }
    ioctl(fd_dsp, 3, NULL);
    printf("pause\n");

	return 0;
}
