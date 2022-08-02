
struct sData {
    int a;
    int b;
};

#define offsetof(type, field) ((long) &((type *)0)->field)

int main(int argc, char** arv)
{
    return offsetof(struct sData, b);
}
