// **********************************************************************
//
// Copyright (c) 2003-2005 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

#pragma once

#include "HICEConfig.h"
#include "HICEException.h"

namespace HICEUtil
{

class HUTIL_API UUIDGenerationException : public Exception
{
public:
    
    UUIDGenerationException(const char*, int);
    virtual const std::string& ice_name() const;
    virtual Exception* ice_clone() const;
    virtual void ice_throw() const;

private:

    static ::std::string _name;
};

HUTIL_API std::string generateUUID();

}

