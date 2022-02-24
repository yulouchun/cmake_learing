add_library(myfunction mypower.cpp mypower.h)
install(TARGETS myfunction DESTINATION lib)
install(FILES mypower.h DESTINATION include)
