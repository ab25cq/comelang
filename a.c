void (*const vector_tbl[])() __attribute__((section(".vector"))) = {
    (void*)0,
    (void*)0,
};

int gVar __attribute__((section(".my_vector")));

int fun() __attribute__((section(".my_vector")))
{
    return 0;
}


int main(int argc, char** argv) {
    static int a __attribute__((section(".vector"))) = 1;
    return 0;
}

