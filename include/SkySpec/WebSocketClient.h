#include <websocketpp/config/asio_no_tls_client.hpp>
#include <websocketpp/client.hpp>

typedef websocketpp::client<websocketpp::config::asio_client> client;

using websocketpp::lib::placeholders::_1;
using websocketpp::lib::placeholders::_2;
using websocketpp::lib::bind;

typedef websocketpp::config::asio_client::message_type::ptr message_ptr;

namespace SkySpec {
    namespace WebSocketClient {
        bool ConnectToServer(int webSocketPort = 6969, int retries = 30, float waitIntervalMs = 1000) {

        }
    }
}
