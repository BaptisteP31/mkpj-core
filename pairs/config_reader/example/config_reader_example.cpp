#include "../include/config_reader.hpp"
#include <iostream>

// This is a simple example of how to use the config library
// It will print all the configs in the config file and the data of the first config
// To make this example work, you need to create a config file named "config.conf" in the same directory as the executable

// The config file must be in the following format:
// [config_name]
// key = value
// key = value

// If there is no config name, the config will be named "default"
// Comments must be preceded by a #
// You can list all the configs in the config file with the list_configs() function
// You can get the data of a config with the config_to_map("config_name") function, if you don't specify a config name, it will return the data of the first config
// You can also get the data of a config as a vector of pairs with the to_vector() function, use the config::Configs type to store the data

// You should check if the config file was loaded correctly with the is_loaded() function
// You can also check if the config file is empty with the is_empty() function

// Written by: Paqueriaud Baptiste (GNU General Public License v3.0)

int main(int argc, char **argv) {
    config::ConfigFile config;
    config.load_from_file("config.conf");

    if (!config.is_loaded())
        throw std::runtime_error("Config file not loaded");

    if (config.is_empty())
        throw std::runtime_error("Config file is empty");

    std::vector<std::string> configs = config.list_configs();

    // list all configs in the config file
    std::cout << "Configs found in the config file:" << std::endl;
    for (auto const& config : config.list_configs()) {
        std::cout << config << std::endl;
    } std::cout << std::endl;


    config::ConfigMap map = config.config_to_map();
    //Print the data
    std::cout << "Data of the first config:" << std::endl;
    for (auto const& [key, val] : map) {
        std::cout << key << " = " << val << std::endl;
    }    

    return 0;
}
