option(Compaction "Build compaction backends" ON)

cmake_dependent_option(CompactionI386 "Build the standard i386 Diablo for compaction" ON "Compaction;ArchitectureI386" OFF)
cmake_dependent_option(CompactionARM "Build the standard ARM Diablo for compaction" ON "Compaction;ArchitectureARM" OFF)

set(common_link_libraries
  PRIVATE FlowgraphDebugDwarf
  PRIVATE Common_Opt
  PRIVATE ObjectElf
)

if (CompactionI386)
  add_executable(diablo-i386 ${CMAKE_SOURCE_DIR}/frontends/diablo_i386_main.c)
  target_link_libraries(diablo-i386
    PRIVATE AnoptI386
    PRIVATE FlowgraphI386
    ${common_link_libraries}
    PRIVATE I386_Opt
  )
endif()

if (CompactionARM)
  add_executable (diablo-arm ${CMAKE_SOURCE_DIR}/frontends/diablo_arm_main.c)
  target_link_libraries(diablo-arm
    PRIVATE AnoptARM
    PRIVATE FlowgraphARM
    ${common_link_libraries}
    PRIVATE ARM_Opt
  )
endif()
