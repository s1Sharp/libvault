#include "VaultClient.h"

std::optional<std::string> Vault::Sys::Policies::RGP::list() {
  return Vault::Sys::Policies::list(client_, getUrl(Path{}));
}

std::optional<std::string> Vault::Sys::Policies::RGP::read(const Path &path) {
  return Vault::Sys::Policies::read(client_, getUrl(path));
}

std::optional<std::string>
Vault::Sys::Policies::RGP::create(const Path &path,
                                  const Parameters &parameters) {
  return Vault::Sys::Policies::create(client_, getUrl(path), parameters);
}

std::optional<std::string>
Vault::Sys::Policies::RGP::update(const Path &path,
                                  const Parameters &parameters) {
  return Vault::Sys::Policies::update(client_, getUrl(path), parameters);
}

std::optional<std::string> Vault::Sys::Policies::RGP::del(const Path &path) {
  return Vault::Sys::Policies::del(client_, getUrl(path));
}

Vault::Url Vault::Sys::Policies::RGP::getUrl(const Path &path) {
  return client_.getUrl("/v1/sys/policies/rgp/", path);
}
