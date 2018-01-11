//compile $gcc hellotime.c -o hellotime.o
//to run ./hellotime.o#include

int main(){
        time t t = time(NULL):
        struct tm tm = *localtime(&t);

        printf("now: %d-%d-%d %d:%d:%d\n",
        tm.tm year + 1900, tm.tm mon + 1
        tm.tm mday, tm.tm hour, tm.tm min, tm.tm sec);
}
