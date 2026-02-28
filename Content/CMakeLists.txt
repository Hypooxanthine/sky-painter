# ----- Project definition -----

project(SkyPainter)

# ----- Subdirectories -----

add_subdirectory("Scripts")

# ----- Resources -----

add_resources_target(SkyPainterResources ${CMAKE_CURRENT_SOURCE_DIR}/Resources)
