#ifndef OPENAGE_PATHFINDING_HEURISTIC_H_CBE087E5409147DE8A880F6D25D5BBB6
#define OPENAGE_PATHFINDING_HEURISTIC_H_CBE087E5409147DE8A880F6D25D5BBB6

#include "path.h"

namespace openage {
namespace path {

/**
 * Manhattan distance cost estimation.
 * @returns the sum of the x and y difference.
 */
cost_t manhattan_cost(const Node &start, const Node &end);

/**
 * Chebyshev distance cost estimation.
 * @returns y or x difference, whichever is higher.
 */
cost_t chebyshev_cost(const Node &start, const Node &end);

/**
 * Euclidean distance cost estimation.
 * @returns the hypotenuse length of the rectangular triangle formed.
 */
cost_t euclidean_cost(const Node &start, const Node &end);

} // namespace path
} // namespace openage

#endif // _OPENAGE_PATHFINDING_HEURISTIC_H_
