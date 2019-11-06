#include "Road.h"
#include "Bike.h"

int main()
{
    Road road(20);
    //road.show();
    Bike bike;
    bike.run(road);
    return 0;
}
