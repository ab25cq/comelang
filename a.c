#include <stdio.h>
#include <string.h>
#include <stdlib.h>

union pxe_device {
  struct {
    int    BusType;
    short  Bus;
    int    Device;
    int    Function;
  } PCI, PCC;
};

int main(int argc, char** argv)
{
    
    return 0;
}

