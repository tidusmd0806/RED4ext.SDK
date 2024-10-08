set(ZOLTAN_ALL_SIGNATURES "${PROJECT_BINARY_DIR}/zoltan/Signatures.hpp")

file(GLOB_RECURSE RED4EXT_ZOLTAN_HEADERS ${PROJECT_SOURCE_DIR}/include/RED4ext/*.hpp)
list(FILTER RED4EXT_ZOLTAN_HEADERS EXCLUDE REGEX ".*-inl.hpp")
list(REMOVE_ITEM RED4EXT_ZOLTAN_HEADERS "${PROJECT_SOURCE_DIR}/include/RED4ext/Definitions.hpp")
list(REMOVE_ITEM RED4EXT_ZOLTAN_HEADERS "${PROJECT_SOURCE_DIR}/include/RED4ext/Enum-VFT.hpp")

file(WRITE ${ZOLTAN_ALL_SIGNATURES} "")
foreach(RED4EXT_ZOLTAN_HEADER ${RED4EXT_ZOLTAN_HEADERS})
 file(RELATIVE_PATH IN_FILE_RELATIVE ${PROJECT_SOURCE_DIR}/include/ ${RED4EXT_ZOLTAN_HEADER})
 file(APPEND ${ZOLTAN_ALL_SIGNATURES} "#include <${IN_FILE_RELATIVE}>\n")
endforeach()

set(ZOLTAN_ALL_ADDRESSES "${PROJECT_SOURCE_DIR}/include/RED4ext/Addresses-Found.hpp")

execute_process(
  COMMAND "C:/Users/Jack/Documents/cyberpunk/zoltan/target/release/zoltan-clang.exe"
  # COMMAND ${PROJECT_SOURCE_DIR}/tools/zoltan-clang.exe
  "${PROJECT_SOURCE_DIR}/include/" -x "${CYBERPUNK_2077_GAME_DIR}/bin/x64/Cyberpunk2077.exe" 
  -f "std=c++20" -f "I${PROJECT_SOURCE_DIR}/include" --c-output "${ZOLTAN_ALL_ADDRESSES}") 
  # "${ZOLTAN_ALL_SIGNATURES}" -x "${CYBERPUNK_2077_GAME_DIR}/bin/x64/Cyberpunk2077.exe" -f "std=c++20" -f "I${PROJECT_SOURCE_DIR}/include" --c-output "${ZOLTAN_ALL_ADDRESSES}")