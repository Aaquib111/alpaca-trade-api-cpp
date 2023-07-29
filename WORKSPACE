################################################################################
# General Initialization
################################################################################

load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")

################################################################################
# C++ Dependencies
################################################################################

# alpaca-trade-api-cpp is a C++ client library for the Alpaca Trading API.
http_archive(
    name = "com_github_marpaia_alpaca_trade_api_cpp",
    strip_prefix = "alpaca-trade-api-cpp-master",
    urls = ["https://github.com/marpaia/alpaca-trade-api-cpp/archive/master.tar.gz"],
)
load("@com_github_marpaia_alpaca_trade_api_cpp//bazel:deps.bzl", "alpaca_deps")
alpaca_deps()


load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")


# Hedron's Bazel Rules for C++ HTTPS Requests
# Makes @cpr, @curl, and @boringssl available for use
# https://github.com/hedronvision/bazel-make-cc-https-easy
http_archive(
    name = "hedron_make_cc_https_easy",

    # Replace the commit hash in both places (below) with the latest, rather than using the stale one here.
    # Even better, set up Renovate and let it do the work for you (see "Suggestion: Updates" in the README).
    url = "https://github.com/hedronvision/bazel-make-cc-https-easy/archive/0da80a924485000008f43343c3fea56131aeff9d.tar.gz",
    strip_prefix = "bazel-make-cc-https-easy-0da80a924485000008f43343c3fea56131aeff9d",
    # When you first run this tool, it'll recommend a sha256 hash to put here with a message like: "DEBUG: Rule 'hedron_compile_commands' indicated that a canonical reproducible form can be obtained by modifying arguments sha256 = ..."
)
load("@hedron_make_cc_https_easy//:workspace_setup.bzl", "hedron_make_cc_https_easy")
hedron_make_cc_https_easy()
load("@hedron_make_cc_https_easy//:transitive_workspace_setup.bzl", "hedron_keep_cc_https_easy")
hedron_keep_cc_https_easy()