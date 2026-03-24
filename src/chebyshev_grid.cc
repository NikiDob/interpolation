#include "Interpolation/chebyshev_grid.hh"

namespace Interpolation
{
namespace Chebyshev
StandardGrid::StandardGrid(size_t p)
{
    _p = p;
    for (size_t j = 0; j <= p; j++) {
        _tj.push_back(cos(j * M_PI / static_cast<double>(p)));
    }
    for (size_t j = 0; j <= p; j++) {
        
    }
}
{
} // namespace Chebyshev
} // namespace Interpolation