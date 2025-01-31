
# 指定cmake最低版本
cmake_minimum_required(VERSION 3.26)

# 指定C++标准(此段代码需要在add_executable之前添加)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# 添加项目名和版本号
project(Exercise01 VERSION 1.0.2)

# set()函数用于包含多个源文件
set(SRC_LIST Test01.cpp)


# 将时间戳以指定格式保存到 COMPILE_TIME 变量中，并打印时间戳。(注意：此段代码需要放在版本号之前)
string(TIMESTAMP COMPILE_TIME %Y%m%d-%H%M%S)
message(STATUS "Compile time: ${COMPILE_TIME}")

# 将版本号传递给源代码
configure_file(Exercise01Config.h.in Exercise01Config.h)


# =======================================添加Exercise01_Library库=======================================
# 1、直接添加 Exercise01_Library 库
# add_subdirectory(Exercise01_Library)

# 2、检查选项USE_MYMATH的值，根据结果判断是否构建并链接Exercise01_Library库（经典方法）

# 检查是否定义了USE_MYMATH，如果定义了就添加Exercise01_Library库
# 通过option()函数添加一个USE_MYMATH选项，默认为ON
option(USE_MYMATH "Use tutorial provided math implementation" ON)

if(USE_MYMATH)
  add_subdirectory(Exercise01_Library)
  # APPEND表示将元素Exercise01_Library追加到列表EXTRA_LIBS中
  # EXTRA_LIBS存储Exercise01_Library库，EXTRA_INCLUDES存储Exercise01_Library头文件。
  list(APPEND EXTRA_LIBS Exercise01_Library)
  list(APPEND EXTRA_INCLUDES ${PROJECT_SOURCE_DIR}/Exercise01_Library)
else()
  # 如果 USE_MYMATH 为 OFF，则不构建 Exercise01_Library 库
  message(STATUS "Not using Exercise01_Library library")
endif()

# 3、检查选项USE_MYMATH的值，根据结果判断是否构建并链接Exercise01_Library库（现代方法）

# 添加项目所需源文件，${PROJECT_NAME}是项目名
add_executable(${PROJECT_NAME} ${SRC_LIST})

# 将新的库文件(Exercise01_Library)添加到可执行文件中
if(USE_MYMATH)
  target_link_libraries(${PROJECT_NAME} PUBLIC Exercise01_Library)
endif()

# 用于指定包含目录，告诉编译器在哪些目录中查找头文件。
# ${PROJECT_BINARY_DIR} 表示当前工程的构建目录，即中间文件、可执行文件存放的路径。本例中即为build。
# ${PROJECT_SOURCE_DIR} 表示当前工程的根目录，即 CMakeLists.txt 所在的路径。
# /Exercise01_Library 表示Exercise01_Library库的头文件路径
target_include_directories(${PROJECT_NAME} PUBLIC
                           ${PROJECT_BINARY_DIR}
                           ${PROJECT_SOURCE_DIR}/Exercise01_Library
                           )