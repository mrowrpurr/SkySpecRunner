#include <iostream>
#include <functional>
#include <websocketpp/config/asio_no_tls_client.hpp>
#include <websocketpp/client.hpp>

//typedef websocketpp::client<websocketpp::config::asio_client> client;
//
//using websocketpp::lib::placeholders::_1;
//using websocketpp::lib::placeholders::_2;
//using websocketpp::lib::bind;
//
//typedef websocketpp::config::asio_client::message_type::ptr message_ptr;

namespace SkySpec {

    namespace {
        BOOL WINAPI ListenForControlC(DWORD ctrl) {
            if (ctrl == CTRL_C_EVENT) {
                std::cout << "Stopping\n";
                ExitProcess(0);
            }
            return TRUE;
        }

        void EstablishConnection(int webSocketPort) {
            std::string uri = "ws://localhost:6969";

//            try {
//
//            }
        }
    }

    void RunTestsAsync(const std::string& executablePath, const std::function<void(bool)>& testResultHandler, int webSocketPort = 6969) {
        SetConsoleCtrlHandler(ListenForControlC, TRUE);

        std::cout << "TODO - run tests - setting up project...";

        // Launch Skyrim
        //int result = std::system(executablePath.c_str());
        //if (int != 0) {

        //}

        // Connect to Skyrim WebSocket server.
        // The tests are started once a connection is established.
        EstablishConnection(webSocketPort);

        std::cin.get();
    }

    void RunTestsAsync(const std::string& executablePath, int webSocketPort = 6969) {
        RunTestsAsync(executablePath, [](bool){}, webSocketPort);
    }

    void RunTestsAsync(int webSocketPort = 6969) {
        RunTestsAsync("Default Here - search for SE (or VR?)", [](bool){}, webSocketPort);
    }
}
