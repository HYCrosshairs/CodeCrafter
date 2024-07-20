#include <cxxplot/cxxplot>

#include "Algorithms.hpp"

#include <cmath>

namespace plt = cxxplot;

int main( int argc, char* argv[] )
{
    return plt::exec( argc, argv, [ & ]( ) {
        // Generate some data
        std::vector< plt::point2d > data;

        for ( int i = 0; i <= 100; i++ )
        {
            double x = i;
            double y = algo::common::lib::minmax(-7.0, 7.0, 10 * sin(x));
            data.push_back({x, y});
        }

        // Plot the data in a window
        plt::plot( data );

        return 0;
    } );
}