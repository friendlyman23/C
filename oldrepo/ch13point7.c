int main(int argc, char *argv[])
{

}

    // argc = "argument count" --> number of command-line arguments
    // *argv[] = "argument vector" --> array of pointers to command-line 
    //                                  arguments stored as strings.
    //                                  note argv[0] points to program name
    //                                  and argv[1] thru argv[argc-1]
    //                                  point to remaining command-line args.

    // argv[argc] is a null pointer; macro NULL represents null pointer
    // a null pointer is a special pointer that points to nothing.

    // example ls -l remind.c
    
    // argc will be 3
    // argv[0] points to string containing program name
    // argv[1] points to string "-l"
    // argv[2] points to "remind.c"
    // argv[3] is a null pointer

    // sample loop that examines each argument in turn and prints them one per line:
    // (using an integer variable as an index into argv array)

    int i;

    for (i = 1; i < argc; i++)
        printf("%s\n", argv[i]);
    
    

    // can also set up a pointer to argv[1], then increment it repreatedly
    // to step through rest of array. loop terminates when it finds null pointer

    char **p; // declare p as pointer to a pointer

    for (p = &argv[1]; *p != NULL; p++) 
        printf("%s\n", *p);

    // argv[1] is a pointer to a character, so &argv[1] is a pointer to a pointer         
    // *p != NULL is ok since *p and NULL arge both pointers
    
                 