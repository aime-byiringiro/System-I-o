

int main (){
    int fd; /* file descriptor*/

    if ((fd = open("/etc/hosts", O_RDONLY)) < 0) { /* recieves two argumens; path and flag*/
    /* can recieve third argument for default access persmission*/
    perror("open");
    exit(1);
}
}
