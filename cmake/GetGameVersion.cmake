find_program(POWERSHELL_PATH NAMES powershell
HINTS
  C:/Windows/System32/WindowsPowerShell/v1.0/
)

execute_process(COMMAND
  ${POWERSHELL_PATH} "(Get-Command '${CYBERPUNK_2077_GAME_DIR}/bin/x64/Cyberpunk2077.exe').FileVersionInfo.ProductVersion"
  OUTPUT_VARIABLE CYBERPUNK_PRODUCT_VERSION
  OUTPUT_STRIP_TRAILING_WHITESPACE
)

execute_process(COMMAND
  ${POWERSHELL_PATH} "(Get-Command '${CYBERPUNK_2077_GAME_DIR}/bin/x64/Cyberpunk2077.exe').FileVersionInfo.FileVersion"
  OUTPUT_VARIABLE CYBERPUNK_FILE_VERSION
  OUTPUT_STRIP_TRAILING_WHITESPACE
)

message(STATUS "Game's ProductVersion: ${CYBERPUNK_PRODUCT_VERSION}")
message(STATUS "Game's FileVersion: ${CYBERPUNK_FILE_VERSION}")