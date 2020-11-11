/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:26 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

typedef struct {
	unsigned char frameType;
	unsigned char frameLen[3];
} SCD_Struct_RP0;

typedef struct {
	unsigned long long field1;
	BOOL field2;
} SCD_Struct_RP1;

typedef struct CC_SHA256state_st {
	unsigned count[2];
	unsigned hash[8];
	unsigned wbuf[16];
} CC_SHA256state_st;

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct BonjourBrowser* BonjourBrowserRef;

typedef struct BonjourAdvertiserPrivate* BonjourAdvertiserPrivateRef;

typedef struct os_unfair_lock_s {
	unsigned _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef union {
	unsigned char __u6_addr8[16];
	unsigned short __u6_addr16[8];
	unsigned __u6_addr32[4];
} SCD_Union_RP8;

typedef struct sockaddr {
	unsigned char sa_len;
	unsigned char sa_family;
	char sa_data[14];
} sockaddr;

typedef struct in_addr {
	unsigned s_addr;
} in_addr;

typedef struct in6_addr {
	SCD_Union_RP8 __u6_addr;
} in6_addr;

typedef struct sockaddr_in6 {
	unsigned char sin6_len;
	unsigned char sin6_family;
	unsigned short sin6_port;
	unsigned sin6_flowinfo;
	in6_addr sin6_addr;
	unsigned sin6_scope_id;
} sockaddr_in6;

typedef struct sockaddr_in {
	unsigned char sin_len;
	unsigned char sin_family;
	unsigned short sin_port;
	in_addr sin_addr;
	char sin_zero[8];
} sockaddr_in;

typedef union {
	sockaddr sa;
	sockaddr_in v4;
	sockaddr_in6 v6;
} SCD_Union_RP14;

