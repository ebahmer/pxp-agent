#ifndef SRC_AGENT_ACTION_OUTPUT_HPP
#define SRC_AGENT_ACTION_OUTPUT_HPP

#include <leatherman/json_container/json_container.hpp>

#include <string>

namespace PXPAgent {

struct ActionOutput {
    int exitcode;
    std::string std_out;
    std::string std_err;
};

}  // namespace PXPAgent

#endif  // SRC_AGENT_ACTION_OUTPUT_HPP
