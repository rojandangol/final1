#ifndef EMEROOM_H
#define EMEROOM_H
#include <vector>
#include <string>
#include <queue>
using namespace std;

class emeroom
{
    // protected:
    //     /* data */
    //     int size;
    //     string name;
    //     int severity_lvl;

    //     vector<int> fvector;

public:
    // emeroom();

    // emeroom(int size);

    /// @brief 		"Updates" the queue in ways appropriate
    ///				to what sort of queue it is, see respective
    ///				*.h files.
    /// @param t 	Events happen at a start time t
    virtual void update(int t) = 0;
};
#endif
