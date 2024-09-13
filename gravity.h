#ifndef _GRAVITY_H_
#define _GRAVITY_H_

/**
 * In formula: s = (u * t) + (a * t^2)/2
 * `gravity` is `a`
 */
constexpr double gravity{9.8};

/**
 * The height of the ground. Mean 0.
 */
constexpr double groundHeight{0.0};

/**
 * `dropObjectFrom(int towerHeight)`
 *
 * With the input is `towerHeight`, print the heights of
 * object each second
 *
 * Asume that object is droped from `towerHeight` meters
 * to the ground under the impact
 */
void dropObjectFrom(int);

/**
 *
 * `calculateObjectHeight(int towerheight, int second)`
 *
 * With the input is `towerHeight` and `second`,
 * calculate the height of object at that time
 *
 * Asume that object is droped from `towerHeight` meters
 * to the ground under the impact of gravity
 *
 * Return the height of object at `second` time
 */
double calculateObjectHeight(int, int);

#endif