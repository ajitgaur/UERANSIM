#pragma once

#include "sctp_handler.hpp"
#include "sctp_protocol_id.hpp"

#include <string>
#include <vector>

namespace sctp
{

class SctpClient
{
  private:
    const int sd;
    const PayloadProtocolId ppid;

  public:
    explicit SctpClient(PayloadProtocolId ppid);
    ~SctpClient();

    void bind(const std::string &address, uint16_t port);
    void connect(const std::string &address, uint16_t port);

    void send(uint16_t stream, const uint8_t *buffer, size_t offset, size_t length);
    void send(uint16_t stream, const uint8_t *buffer, size_t length);
    void send(uint16_t stream, const std::vector<uint8_t> &data);

    void receive(ISctpHandler *handler);
};

} // namespace sctp