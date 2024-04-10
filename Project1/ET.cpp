#include "ET.h"

ET::ET() : Unit()
{

}

ET::ET(int id, double tj, int h, int p, int ac) : Unit(id, "ET", tj, h, p, ac)
{
	Type = "ET";
}
