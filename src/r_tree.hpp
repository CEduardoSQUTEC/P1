// Proyeto 1
// Copyright © 2021 grupo 3
//
// p1 is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// p1 is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with p1.  If not, see <http://www.gnu.org/licenses/>.

#pragma once

#include <iostream>

namespace utec {

    class r_tree {
    private:

    public:
        r_tree();

        friend std::istream &operator>>(std::istream &is, r_tree &rt);

        friend std::ostream &operator<<(std::ostream &os, const r_tree &rt);
    };

    std::istream &operator>>(std::istream &is, r_tree &rt);

    std::ostream &operator<<(std::ostream &os, const r_tree &rt);

};
