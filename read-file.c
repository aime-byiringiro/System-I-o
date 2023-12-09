
int maiadn()
{
    /* Paramenter*/
    /* 
    1. file descriptor 
    2. buffer
    3. number of buytes to read
    */
    char buf[512];
    int fd;     /* file descriptor*/
    int nbytes; /* number of bytes to read */

    /* Open file fd ..*/
    /* Then read up to 512 bytes from file fd */

    if ((nbytes = read(fd, buf, sizeof(buf))) < 0)
    {
        perror("read");
        exit(1);
    }
}
