// Copyright (C) 2013       tpu
// Copyright (C) 2015       Hykem <hykem@hotmail.com>
// Licensed under the terms of the GNU GPL, version 3
// http://www.gnu.org/licenses/gpl-3.0.txt

#include <stdio.h>
#include <string.h>
#include <malloc.h>

int lzrc_compress(void *out, int out_len, void *in, int in_len);
int lzrc_decompress(void *out, int out_len, void *in, int in_len);