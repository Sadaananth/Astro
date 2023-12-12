load("@rules_cc//cc:defs.bzl", "cc_binary", "cc_library")

cc_binary(
    name = "Astro",
    srcs = [
        "main.cpp",
        "Application.cpp",
        "Application.hpp",
        "Kattam.cpp",
        "Kattam.hpp",
    ],
    linkopts = [
        "-lsfml-graphics",
        "-lsfml-window",
        "-lsfml-system",
    ],
    visibility = ["//visibility:public"],
    deps = [
        "@SadaLogger",
        "//src:AstroLib",
    ],
)
