#include <kipr/wombat.h>
int main()
{

    if(create3_connect() == 1 )
    {

        grabFlag();
        create3_wait();
    }
}


void grabFlag()
{
    create3_drive_straight(1.2, 0.3);
    create3_wait();
    create3_velocity_set_components(0, 0);
    create3_wait();
    create3_drive_arc_degrees(.25, -90, -0.24);
    create3_drive_straight(0.1, 0.3);
    create3_wait();
    motor(0,500);
    msleep(2000);
    motor(0,0);
    create3_wait();

}
