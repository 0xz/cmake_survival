
## Create static library and link it to executable

Scope keywords

PRIVATE    - Only used for target
INTERFACE  - Only used for targets that consume this target
PUBLIC     - Both

https://cmake.org/cmake/help/latest/command/target_link_libraries.html#command:target_link_libraries


# Exercise: try add in `src/CMakeLists.txt`

```
target_compile_definitions(${PROJECT_NAME} PRIVATE ABC=1 INTERFACE XYZ=2)
```
