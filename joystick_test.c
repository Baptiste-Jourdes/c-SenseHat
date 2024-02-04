#include "senseHat.h"
#include <unistd.h>

int main(int argc, char *argv[])
{

    SenseHat *s = SenseHat_creer();
    printf("%d\n", SenseHat_recupererEtatJoystick(s));

    return 0;
}