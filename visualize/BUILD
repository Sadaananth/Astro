load("@rules_cc//cc:defs.bzl", "cc_binary", "cc_library")

cc_binary(
    name = "Astro",
    srcs = [
        "Application.cpp",
        "Application.hpp",
        "Kattam.cpp",
        "Kattam.hpp",
        "main.cpp",
    ],
    linkopts = [
        "-lsfml-graphics",
        "-lsfml-window",
        "-lsfml-system",
    ],
    visibility = ["//visibility:public"],
    deps = [
        "//src:AstroLib",
        "@SadaLogger",
    ],
)
