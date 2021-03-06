#ifndef BAMBOO_NET_CONFIG_H_
#define BAMBOO_NET_CONFIG_H_

#include <cassert>
#include <memory>
#include <string>
#include <vector>

namespace bamboo {

typedef std::string InetAddr;

class Config {
 public:
  int get_id() const;
  void set_id(int id);

  int get_num_of_processes() const;
  void set_num_of_processes(int num_of_processes);

  typedef std::vector<unsigned short> Ports;

  const Ports& get_ports() const;
  void set_ports(const Ports& ports);

  typedef std::vector<InetAddr> Addresses;

  const Addresses& get_addresses() const;
  void set_addresses(const Addresses& addresses);

 private:
  int id_;
  int num_of_processes_;
  Ports ports_;
  Addresses addresses_;
};

}  // namespace bamboo

#endif  // BAMBOO_NET_CONFIG_H_
