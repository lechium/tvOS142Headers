//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct SWCFields {
    unsigned int userApproval:2;
    unsigned int siteOrFrameworkApproval:2;
    unsigned int updating:1;
    unsigned int systemApplication:1;
    unsigned int enabledConfiguration:2;
    unsigned int provenance:2;
    unsigned int unused:3;
    char relativeOrder;
};

struct __sFILE {
    char *_field1;
    int _field2;
    int _field3;
    short _field4;
    short _field5;
    struct __sbuf _field6;
    int _field7;
    void *_field8;
    CDUnknownFunctionPointerType _field9;
    CDUnknownFunctionPointerType _field10;
    CDUnknownFunctionPointerType _field11;
    CDUnknownFunctionPointerType _field12;
    struct __sbuf _field13;
    struct __sFILEX *_field14;
    int _field15;
    unsigned char _field16[3];
    unsigned char _field17[1];
    struct __sbuf _field18;
    int _field19;
    long long _field20;
};

struct __sbuf {
    char *_field1;
    int _field2;
};

struct optional<SecTrustResultType> {
    union {
        char _field1;
        unsigned int _field2;
    } _field1;
    _Bool _field2;
};

struct optional<bool> {
    union {
        char __null_state_;
        _Bool __val_;
    } ;
    _Bool __engaged_;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned int _field1[8];
} CDStruct_6ad76789;

// Template types
typedef struct optional<SecTrustResultType> {
    union {
        char _field1;
        unsigned int _field2;
    } _field1;
    _Bool _field2;
} optional_252cd4e3;

