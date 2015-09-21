# main

# 源文件列表
aux_source_directory(. srcs)

# 设置生成的可执行文件的路径
set(EXECUTABLE_OUTPUT_PATH ${CONTACTS_SOURCE_DIR}/bin)

# 头文件目录
include_directories(${CONTACTS_SOURCE_DIR}/include)

# 生成的可执行文件
add_executable(contacts ${srcs})

# 所需要的库文件的目录
link_directories(${CONTACTS_SOURCE_DIR}/lib)
  
# 需要链接的库文件
target_link_libraries(contacts persion)
