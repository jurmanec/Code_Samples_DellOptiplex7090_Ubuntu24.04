
/**
 * include gaurds prevent multiple inclusion of the same header files.
 */
#ifndef ROBOT_HPP_ 
#define ROBOT_HPP_

class Robot {
    
    public:
    void greet();
    /**
     *  What about constructor and destructor?
     *  If we dont' define them, the compiler implicitly declares and defines them for us.
     */
};

#endif