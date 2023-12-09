

int maiadn (){
    int fd; /* file descriptor*/
    if(close(fd)<0){fprint(stderr, "%s, write error: %s", filename, strerror(errno))
    exit(1);}
    /*
    1. Well, not excatly fail-the file is still closed 
    2.The OS is talking this opportunity to report a delayed error from a previous write operation
    3.You might silently lose data if you don't check!  
    */
}
