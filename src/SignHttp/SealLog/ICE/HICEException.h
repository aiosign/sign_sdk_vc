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

namespace HICEUtil
{

class HUTIL_API Exception
{
public:

    Exception();
    Exception(const char*, int);
    virtual ~Exception();
    virtual const std::string& ice_name() const;
    virtual void ice_print(std::ostream&) const;
    virtual Exception* ice_clone() const;
    virtual void ice_throw() const;
    const char* ice_file() const;
    int ice_line() const;
    
private:
    
    const char* _file;
    int _line;
    static ::std::string _name;
};

HUTIL_API std::ostream& operator<<(std::ostream&, const Exception&);

class HUTIL_API NullHandleException : public Exception
{
public:
    
    NullHandleException(const char*, int);
    virtual const std::string& ice_name() const;
    virtual Exception* ice_clone() const;
    virtual void ice_throw() const;

private:

    static ::std::string _name;
};

}

