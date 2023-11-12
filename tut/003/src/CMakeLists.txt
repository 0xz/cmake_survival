project(project_library)


set(SOURCE_CPP src.cpp)

add_library(${PROJECT_NAME} SHARED ${SOURCE_CPP} ${SOURCE_INC})

