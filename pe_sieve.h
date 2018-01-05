#pragma once

#include <windows.h>
#include <iostream>

#include "pe_sieve_types.h"
#include "report_formatter.h"

static char VERSION[] = "0.0.9.4";
static char URL[] = "https://github.com/hasherezade/pe-sieve";

std::string info();
std::string make_dir_name(const DWORD process_id);

t_report check_modules_in_process(const t_params args);