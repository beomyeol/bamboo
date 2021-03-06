#include "bamboo/net/config.h"

namespace bamboo {

int Config::get_id() const { return id_; }

void Config::set_id(int id) { id_ = id; }

int Config::get_num_of_processes() const { return num_of_processes_; }

void Config::set_num_of_processes(int num_of_processes) {
  num_of_processes_ = num_of_processes;
}

const Config::Ports& Config::get_ports() const { return ports_; }

void Config::set_ports(const Ports& ports) { ports_ = ports; }

const Config::Addresses& Config::get_addresses() const { return addresses_; }

void Config::set_addresses(const Addresses& addresses) {
  addresses_ = addresses;
}

}  // namespace bamboo
