
cmake_minimum_required(VERSION 2.8)

PROJECT(TransformPipeline)

find_package(VTK REQUIRED)
include(${VTK_USE_FILE})

add_executable(TransformPipeline MACOSX_BUNDLE TransformPipeline)

if(VTK_LIBRARIES)
  target_link_libraries(TransformPipeline ${VTK_LIBRARIES})
else()
  target_link_libraries(TransformPipeline vtkHybrid vtkWidgets)
endif()
