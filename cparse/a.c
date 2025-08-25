
struct sData
{
    int a:2;
    int b:1;
};

struct {
    int a;
    int b;
} gData;


int main(int argc, char** argv)
{
    struct sData data;
    data.a = 111;
    return 0;
}
