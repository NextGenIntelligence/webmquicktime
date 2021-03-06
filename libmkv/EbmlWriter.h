#ifndef EBMLWRITER_HPP
#define EBMLWRITER_HPP

// Copyright (c) 2010 The WebM project authors. All Rights Reserved.
//
// Use of this source code is governed by a BSD-style license
// that can be found in the LICENSE file in the root of the source
// tree. An additional intellectual property rights grant can be found
// in the file PATENTS.  All contributing project authors may
// be found in the AUTHORS file in the root of the source tree.


//If you wish a different writer simply replace this
//note: you must define write and serialize functions as well as your own EBML_GLOBAL
#include <stddef.h>
#include "EbmlBufferWriter.h"
//These functions MUST be implemented
void  Ebml_Serialize(EbmlGlobal *glob, const void *, unsigned long);
void  Ebml_Write(EbmlGlobal *glob, const void *, unsigned long);
/////


void Ebml_WriteLen(EbmlGlobal *glob, long long val);
void Ebml_WriteString(EbmlGlobal *glob, const char *str);
void Ebml_WriteUTF8(EbmlGlobal *glob, const wchar_t *wstr);
void Ebml_WriteID(EbmlGlobal *glob, unsigned long class_id);
void Ebml_SerializeUnsigned64(EbmlGlobal *glob, unsigned long class_id, UInt64 ui);
void Ebml_SerializeUnsigned(EbmlGlobal *glob, unsigned long class_id, unsigned long ui);
void Ebml_SerializeBinary(EbmlGlobal *glob, unsigned long class_id, unsigned long ui);
void Ebml_SerializeFloat(EbmlGlobal *glob, unsigned long class_id, double d);
//TODO make this more generic to signed
void Ebml_WriteSigned16(EbmlGlobal *glob, short val);
void Ebml_SerializeString(EbmlGlobal *glob, unsigned long class_id, const char *s);
void Ebml_SerializeUTF8(EbmlGlobal *glob, unsigned long class_id, wchar_t *s);
void Ebml_SerializeData(EbmlGlobal *glob, unsigned long class_id, unsigned char *data, unsigned long data_length);
void Ebml_WriteVoid(EbmlGlobal *glob, unsigned long vSize);
//TODO need date function
#endif
