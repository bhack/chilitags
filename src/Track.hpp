/*******************************************************************************
*   Copyright 2013-2014 EPFL                                                   *
*   Copyright 2013-2014 Quentin Bonnard                                        *
*                                                                              *
*   This file is part of chilitags.                                            *
*                                                                              *
*   Chilitags is free software: you can redistribute it and/or modify          *
*   it under the terms of the Lesser GNU General Public License as             *
*   published by the Free Software Foundation, either version 3 of the         *
*   License, or (at your option) any later version.                            *
*                                                                              *
*   Chilitags is distributed in the hope that it will be useful,               *
*   but WITHOUT ANY WARRANTY; without even the implied warranty of             *
*   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the              *
*   GNU Lesser General Public License for more details.                        *
*                                                                              *
*   You should have received a copy of the GNU Lesser General Public License   *
*   along with Chilitags.  If not, see <http://www.gnu.org/licenses/>.         *
*******************************************************************************/

#ifndef Track_HPP
#define Track_HPP

#include <map>
#include <opencv2/core/core.hpp>
#include "Refine.hpp"
#include "EnsureGreyscale.hpp"

namespace chilitags {

typedef cv::Matx<float, 4, 2> Quad;

class Track
{
public:

Track();

void update(const std::map<int, Quad> &tags);
void update(const cv::Mat &inputImage, const std::map<int, Quad> &tags);
std::map<int, Quad> operator()(const cv::Mat &inputImage);

protected:

chilitags::Refine mRefine;
chilitags::EnsureGreyscale mEnsureGreyscale;

cv::Mat mFromImage;
cv::Mat mToImage;
std::map<int, Quad> mFromTags;

};

}

#endif
