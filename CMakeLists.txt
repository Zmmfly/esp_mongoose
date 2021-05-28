file(GLOB cfiles "./*.c")
idf_component_register(
    SRCS
        ${cfiles}
    INCLUDE_DIRS
        "."
    REQUIRES
        mbedtls
)