//
// Created by MagicBook on 03.03.2025.
//

#ifndef CHVIEW_CHAINED_HPP
#define CHVIEW_CHAINED_HPP

#include <cmath>
#include <vector>
#include <stdexcept>

class Chained {
private:
    std::vector<double> pB;
    std::vector<double> pC;
    // depth of chained fraction
    unsigned int _defaultTimes = 10;
    // declare API details
    double f(const double *x);
public:
    /// Make instance of Chained fraction methods storage
    /// \param defaultTimes depth of chained-fractions
    explicit Chained(unsigned int defaultTimes) {
        _defaultTimes = defaultTimes;
    }
    /// Make instance of Chained fraction methors storage
    /// default depth of chained-fraction=10
    Chained() : Chained(10) {
        // move logic to daddy constructor
    }

    /// Kill instance and temporary memory values
    ~Chained() {

    }
    double sh(double x);
    double ch(double x);
    double th(double x);
    double cth(double x);
};



#endif //CHVIEW_CHAINED_HPP
