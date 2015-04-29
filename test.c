#include <unistd.h>
#include <stdio.h>
#include <sys/mman.h>
#include <options.h>

int main() {
        int fd;

        fd = open("/proc/meminfo", O_RDONLY);
        if (fd < 0) {
                perror("open");
                return -1;
        }


}
