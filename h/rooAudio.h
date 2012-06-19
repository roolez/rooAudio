/*
 * Copyright (C) 2001-2011 Ideaworks3D Ltd.
 * All Rights Reserved.
 *
 * This document is protected by copyright, and contains information
 * proprietary to Ideaworks Labs.
 * This file consists of source code released by Ideaworks Labs under
 * the terms of the accompanying End User License Agreement (EULA).
 * Please do not use this program/source code before you have read the
 * EULA and have agreed to be bound by its terms.
 */
/*
 * WARNING: this is an autogenerated file and will be overwritten by
 * the extension interface script.
 */
#ifndef S3E_EXT_ROOAUDIO_H
#define S3E_EXT_ROOAUDIO_H

#include <s3eTypes.h>
// \cond HIDDEN_DEFINES
S3E_BEGIN_C_DECL
// \endcond

/**
 * Returns S3E_TRUE if the rooAudio extension is available.
 */
s3eBool rooAudioAvailable();

void rooAudio_init();

void rooAudio_play(const char * filename);

void rooAudio_stop();

S3E_END_C_DECL

#endif /* !S3E_EXT_ROOAUDIO_H */
