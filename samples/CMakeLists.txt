################################################################################
#   Copyright 2013-2014 EPFL                                                   #
#   Copyright 2013-2014 Quentin Bonnard                                        #
#                                                                              #
#   This file is part of chilitags.                                            #
#                                                                              #
#   Chilitags is free software: you can redistribute it and/or modify          #
#   it under the terms of the Lesser GNU General Public License as             #
#   published by the Free Software Foundation, either version 3 of the         #
#   License, or (at your option) any later version.                            #
#                                                                              #
#   Chilitags is distributed in the hope that it will be useful,               #
#   but WITHOUT ANY WARRANTY; without even the implied warranty of             #
#   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the              #
#   GNU Lesser General Public License for more details.                        #
#                                                                              #
#   You should have received a copy of the GNU Lesser General Public License   #
#   along with Chilitags.  If not, see <http://www.gnu.org/licenses/>.         #
################################################################################

add_executable( estimate3d 3destimation/estimate3d.cpp)
target_link_libraries( estimate3d chilitags_static )
target_link_libraries( estimate3d ${OpenCV_LIBS} )
install (TARGETS estimate3d RUNTIME DESTINATION bin)

add_executable( estimate3d-gui 3destimation/estimate3d-gui.cpp)
target_link_libraries( estimate3d-gui chilitags_static )
target_link_libraries( estimate3d-gui ${OpenCV_LIBS} )
install (TARGETS estimate3d-gui RUNTIME DESTINATION bin)

add_executable( detect-live detection/detect-live.cpp)
target_link_libraries( detect-live chilitags_static )
target_link_libraries( detect-live ${OpenCV_LIBS} )
install (TARGETS detect-live RUNTIME DESTINATION bin)

add_executable( detect-from-file detection/detect-from-file.cpp)
target_link_libraries( detect-from-file chilitags_static )
target_link_libraries( detect-from-file ${OpenCV_LIBS} )
install (TARGETS detect-from-file RUNTIME DESTINATION bin)

add_executable( tracking tracking/tracking.cpp)
target_link_libraries( tracking chilitags )
target_link_libraries( tracking ${OpenCV_LIBS} )
install (TARGETS tracking RUNTIME DESTINATION bin)
