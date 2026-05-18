#include <string>

using namespace std;

/**
 * @brief Controller class for robot movement
 * @details Handles basic movement operations and speed control for the robot
 * 
 */
class RobotController {

    public:
    /**
     * @brief Construct a new Robot Controller object
     * 
     * @param name The name identifier for the robot
     * @param speed The maximum speed in meters per second
     */
    RobotController(string name, double speed);
    /**
     * @brief Moves the robot forward by the specified distance
     * 
     * @param distance The distance to move in meters
     * @return void
     */
    void moveForward(double distance);

    private:
    double max_speed_;
    string robot_name_;
};