#pragma once

namespace temperature {
    struct kelvin {
        double value;
        explicit kelvin(double v) : value(v) {}
        kelvin() : value(0){}
    };
}

namespace pressure {
    struct psi {
        double value;
        explicit psi(double v) : value(v) {}
        psi() : value(0){}
    };
}
