# model

# 源文件列表
aux_source_directory(. srcs)
  
# 头文件目录
include_directories(${CONTACTS_SOURCE_DIR}/include)
  
# 设置生成的库文件的路径
set(LIBRARY_OUTPUT_PATH ${CONTACTS_SOURCE_DIR}/lib)
  
# 生成的库文件
add_library(persion STATIC ${srcs})