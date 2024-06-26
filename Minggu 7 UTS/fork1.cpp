#include <iostream>
#include <sys/types.h>
#include <unistd.h>

/* getpid() adalah system call yg dideklarasikan pada unistd.h.
Menghasilkan suatu nilai dengan type pid_t.
pid_t adalah type khusus untuk process id yg ekuivalen dg int
*/

int main(void) {
    pid_t mypid:
    uid_t myuid;
    for (int i = 0; i < 3; i++) {
            mypid = getpid();
            cout << "I am process " << mypid << endl;
            cout << "My parent process ID is " << getppid() << endl;
            cout << "The owner of this process has uid " << getuid()
    << endl;

/* sleep adalah system call atau fungsi library
yang menghentikan proses ini dalam detik
*/

    sleep(3);
    }   
return 0;
}