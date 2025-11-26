#include <iostream>
#include <cpr/cpr.h>

bool check_cmd(std::string cmd) {
  std::string cmds[] = {"get","post", "put", "delete", "patch"};
  for (std::string c : cmds) {
    if (cmd == c) {
      return true;
    }
  }
  return false;
}

void send_request(std::string cmd) {
  cpr::Response r;
  std::string link = "http://httpbin.org/";

  link.append(cmd);
  printf("link: %s\n", link.c_str());
  cpr::Url url = cpr::Url(link);
  cpr::Header hdr = cpr::Header{{"User-Agent", "Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:145.0) Gecko/20100101 Firefox/145.0"}};

  if (cmd == "get") {
    r = cpr::Get(url, hdr);
  } else if (cmd == "post") {
    r = cpr::Post(url, cpr::Payload{{"key", "new value"}});
  } else if (cmd == "put") {
    r = cpr::Put(url, cpr::Payload{{"key", "new value"}});
  } else if (cmd == "delete") {
    r = cpr::Delete(url, cpr::Payload{{"key", "new value"}});
  } else if (cmd == "patch") {
    r = cpr::Patch(url, cpr::Payload{{"key", "new value"}});
  } else {
    return;
  }

  std::cout << "text:\n" << r.text;
  if (r.status_code == 200) {
    std::cout << "===DONE===\n\n";
  } else {
    std::cout << "===ERROR===\n\n";
  }
}

int main() {
  
  std::string cmd;

  while (cmd != "exit")
  {
    std::cout << "Enter command: ";
    std::cin >> cmd;
    if (check_cmd(cmd)) {
      send_request(cmd);
    }
  }
  
}
