#include <stdio.h>
#include <unistd.h>

int main() {
    int h, m, s;
    h=m=s=0;

    while(1) {
        printf("%02d:%02d:%02d\r", h, m, s);
        fflush(stdout);
        sleep(1);
        s++;
        if(s==60){s=0;m++;}
        if(m==60){m=0;h++;}
        if(h==24){h=0;}
    }
    return 0;
}
