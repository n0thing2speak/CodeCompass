#ifndef CODECOMPASS_USEREMAIL_H
#define CODECOMPASS_USEREMAIL_H

#include <string>

namespace cc
{
namespace model
{

#pragma db object
struct UserEmail
{

#pragma db id
  std::string email;

#pragma db null
  std::string username;

#pragma db null
  std::string company;
};

} // model
} // cc

#endif //CODECOMPASS_USEREMAIL_H