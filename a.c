
struct _atexit {
 struct _atexit *_next;
 int _ind;

 void (*_fns[32])(void);
//        struct _on_exit_args _on_exit_args;
};

int main(int argc, char** argv)
{
    return 0;
}

