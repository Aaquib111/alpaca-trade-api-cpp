package(default_visibility = ["//visibility:private"])

cc_library(
    name = "alpaca",
    hdrs = [
        "src/account/account.h",
        "src/data_storage/asset.h",
        "lib/alpaca.h",
        "src/data_storage/bars.h",
        "src/data_storage/calendar.h",
        "src/client/client.h",
        "src/data_storage/clock.h",
        "src/account/config.h",
        "lib/documentation.h",
        "lib/json.h",
        "src/data_storage/order.h",
        "src/data_storage/portfolio.h",
        "src/data_storage/position.h",
        "src/data_storage/quote.h",
        "src/data_storage/orderbook.h",
        "src/data_storage/status.h",
        "src/client/streaming.h",
        "src/data_storage/trade.h",
        "src/data_storage/watchlist.h",
    ],
    srcs = [
        "src/account/account.cpp",
        "src/data_storage/asset.cpp",
        "src/data_storage/bars.cpp",
        "src/data_storage/calendar.cpp",
        "src/client/client.cpp",
        "src/data_storage/clock.cpp",
        "src/account/config.cpp",
        "src/data_storage/order.cpp",
        "src/data_storage/portfolio.cpp",
        "src/data_storage/position.cpp",
        "src/data_storage/quote.cpp",
        "src/data_storage/orderbook.cpp",
        "src/data_storage/status.cpp",
        "src/client/streaming.cpp",
        "src/data_storage/trade.cpp",
        "src/data_storage/watchlist.cpp",
    ],
    visibility = ["//visibility:public"],
    defines = [
        "CPPHTTPLIB_OPENSSL_SUPPORT",
    ],
    deps = [
        "@com_github_google_boringssl//:ssl",
        "@com_github_google_glog//:glog",
        "@com_github_tencent_rapidjson//:rapidjson",
        "@com_github_yhirose_cpp_httplib//:httplib",
        "@com_github_unetworking_uwebsockets//:uwebsockets",
        "@cpr"
    ],
)

cc_test(
    name = "account_test",
    size = "small",
    srcs = [
        "account_test.cpp",
    ],
    deps = [
        ":alpaca",
        "//test:test_helpers",
        "@com_github_google_googletest//:gtest_main",
    ],
)

cc_test(
    name = "asset_test",
    size = "small",
    srcs = [
        "asset_test.cpp",
    ],
    deps = [
        ":alpaca",
        "//test:test_helpers",
        "@com_github_google_googletest//:gtest_main",
    ],
)

cc_test(
    name = "bars_test",
    size = "small",
    srcs = [
        "bars_test.cpp",
    ],
    deps = [
        ":alpaca",
        "//test:test_helpers",
        "@com_github_google_googletest//:gtest_main",
    ],
)

cc_test(
    name = "calendar_test",
    size = "small",
    srcs = [
        "calendar_test.cpp",
    ],
    deps = [
        ":alpaca",
        "//test:test_helpers",
        "@com_github_google_googletest//:gtest_main",
    ],
)

cc_test(
    name = "client_test",
    size = "large",
    srcs = [
        "client_test.cpp",
    ],
    deps = [
        ":alpaca",
        "//test:test_helpers",
        "@com_github_google_googletest//:gtest_main",
    ],
)

cc_test(
    name = "clock_test",
    size = "small",
    srcs = [
        "clock_test.cpp",
    ],
    deps = [
        ":alpaca",
        "//test:test_helpers",
        "@com_github_google_googletest//:gtest_main",
    ],
)

cc_test(
    name = "order_test",
    size = "small",
    srcs = [
        "order_test.cpp",
    ],
    deps = [
        ":alpaca",
        "//test:test_helpers",
        "@com_github_google_googletest//:gtest_main",
    ],
)

cc_test(
    name = "portfolio_test",
    size = "small",
    srcs = [
        "portfolio_test.cpp",
    ],
    deps = [
        ":alpaca",
        "//test:test_helpers",
        "@com_github_google_googletest//:gtest_main",
    ],
)

cc_test(
    name = "position_test",
    size = "small",
    srcs = [
        "position_test.cpp",
    ],
    deps = [
        ":alpaca",
        "//test:test_helpers",
        "@com_github_google_googletest//:gtest_main",
    ],
)

cc_test(
    name = "quote_test",
    size = "small",
    srcs = [
        "quote_test.cpp",
    ],
    deps = [
        ":alpaca",
        "//test:test_helpers",
        "@com_github_google_googletest//:gtest_main",
    ],
)

cc_test(
    name = "status_test",
    size = "small",
    srcs = [
        "status_test.cpp",
    ],
    deps = [
        ":alpaca",
        "//test:test_helpers",
        "@com_github_google_googletest//:gtest_main",
    ],
)

cc_test(
    name = "streaming_test",
    size = "small",
    srcs = [
        "streaming_test.cpp",
    ],
    deps = [
        ":alpaca",
        "//test:test_helpers",
        "@com_github_google_googletest//:gtest_main",
    ],
)

cc_test(
    name = "trade_test",
    size = "small",
    srcs = [
        "trade_test.cpp",
    ],
    deps = [
        ":alpaca",
        "//test:test_helpers",
        "@com_github_google_googletest//:gtest_main",
    ],
)

cc_test(
    name = "watchlist_test",
    size = "small",
    srcs = [
        "watchlist_test.cpp",
    ],
    deps = [
        ":alpaca",
        "//test:test_helpers",
        "@com_github_google_googletest//:gtest_main",
    ],
)