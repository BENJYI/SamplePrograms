#include <fcntl.h>
#include <sys/stat.h>
#include <mqueue.h>

int main() {
	mqd_t mqd;
	mqd = mq_open("/cisc3320/msq", O_WRONLY);
	if ((mqd_t)(-1) == mqd) {
	}

}
