#include "MoonSurvivalStrategy.h"
#include <iostream>

namespace bungie {
int MoonSurvivalStrategy::ExecuteStrategy()
{
	RobotController& controller = RobotController::getInstance();

	// Since we start at the beginning, just drive forwards to finish
	controller.DriveUnits('f', 0.5, 8);

	// Done
	return 0;
}
}