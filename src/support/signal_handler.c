/**
 * File              : signal_handler.c
 * License           : GNU GENERAL PUBLIC LICENSE v3.0
 * Author            : fantasticmao <maomao8017@gmail.com>
 * Date              : 24.03.2021
 * Last Modified Date: 24.03.2021
 * Last Modified By  : fantasticmao <maomao8017@gmail.com>
 */
#include "support.h"

void quit(int sig) {
  log_error("Bye");
  exit(sig);
}
