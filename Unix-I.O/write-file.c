int main(){

    /* Paramenters */
    /* 
    1. file descriptor 
    2. buffer
    3. buffer size 
    
    */
    char buf[512];
    int fd;  /* file descriptor */
    int nbytes;  /* number of bytes read */


/* OPen the file fd .. */
/* Then write up to 512 bytes from buf to file fd */
if ((nbytes = write(fd, buf, sizeof(buf))) < 0){
    perror("read");
    exit(1);
}

}
