cmake_minimum_required(VERSION 3.10)

project(CalculateSqrt)

configure_file(
    "${PROJECT_SOURCE_DIR}/config.h.in"
    "${PROJECT_SOURCE_DIR}/config.h"
)

option(USE_MYMATH
        "use my function" ON)
if(USE_MYMATH)
    include_directories("${PROJECT_SOURCE_DIR}/math")
    add_subdirectory(math)
    set(EXTRA_LIBS ${EXTRA_LIBS} myfunction)
    
endif(USE_MYMATH)



add_executable(CalculateSqrt calculatesqrt.cpp)
target_link_libraries(CalculateSqrt ${EXTRA_LIBS})


install(TARGETS CalculateSqrt DESTINATION bin)
install(FILES "${PROJECT_SOURCE_DIR}/config.h" DESTINATION include)