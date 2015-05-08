//********************************************************************************
// Medusa, a distributed embedded system to apply filters on image files.
// Copyright (C) 2015  Gorka Su�rez Garc�a, Dan Cristian Rotaru
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.
//********************************************************************************

#include "Utility.hpp"

#include <ctime>
#include <limits>

//********************************************************************************
// Functions:
//********************************************************************************

bool IsPortNumber(const std::string & victim) {
    try {
        int value = std::stoi(victim);
        if (0 <= value && value <= std::numeric_limits<unsigned short>::max()) {
            return true;
        }
    } catch (...) {
    }
    return false;
}

//--------------------------------------------------------------------------------

void InitializeRandom() {
    std::srand(static_cast<unsigned int>(std::time(nullptr)));
}

//--------------------------------------------------------------------------------

int GetRandom(int max) {
    return std::rand() % max;
}