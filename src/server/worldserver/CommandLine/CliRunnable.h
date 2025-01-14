/*
 * Copyright (C) 2016+     AzerothCore <www.azerothcore.org>, released under GNU GPL v2 license, you may redistribute it and/or modify it under version 2 of the License, or (at your option), any later version.
 * Copyright (C) 2008-2016 TrinityCore <http://www.trinitycore.org/>
 * Copyright (C) 2005-2009 MaNGOS <http://getmangos.com/>
 */

/// \addtogroup Trinityd
/// @{
/// \file

#ifndef __CLIRUNNABLE_H
#define __CLIRUNNABLE_H

#include "Threading.h"

/// Command Line Interface handling thread
class CliRunnable : public Acore::Runnable
{
public:
    void run() override;
};

#endif

/// @}
