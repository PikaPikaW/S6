%RETURN_TYPE% %METHODNAME% (%ARGUMENTS%) %METHOD_CONST% {
  std::uint32_t _flag = %METHOD_FLAGS% ;
  char _args[%ARGSIZE%];
  %RETURN_DECL%

  %SET_ARGUMENTS%

  %RPC_STMT%

  %RETURN%
}