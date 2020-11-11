/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:25 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/ExposureNotificationDaemon.framework/ExposureNotificationDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

typedef struct _NSZone* NSZoneRef;

typedef struct {
	unsigned field1[8];
} SCD_Struct_EN1;

typedef struct __SecKey* SecKeyRef;

typedef const struct __CFString* CFStringRef;

typedef struct {
	unsigned char field1[4];
} SCD_Struct_EN4;

typedef struct {
	unsigned char field1[16];
} SCD_Struct_EN5;

typedef struct {
	SCD_Struct_EN4 field1;
	SCD_Struct_EN5 field2;
	double field3;
	unsigned field4;
	unsigned short field5;
	unsigned short field6;
	char field7;
	char field8;
	BOOL field9;
	unsigned char field10;
} SCD_Struct_EN6;

typedef struct __CTServerConnection* CTServerConnectionRef;

typedef struct {
	int list;
	unsigned long long count;
	unsigned long long size;
} SCD_Struct_EN8;

typedef struct {
	unsigned advertisingIntervalInMilliSec : 1;
	unsigned proximityDurationMinAPWakeThresholdInSec : 1;
	unsigned proximityDurationMinForceAPWakeThresholdInSec : 1;
	unsigned proximityDurationScanDurationAudioInSec : 1;
	unsigned proximityDurationScanDurationInSec : 1;
	unsigned proximityDurationScanIntervalAudioInMilliSec : 1;
	unsigned applicationBackgroundRuntimeIntervalinHours : 1;
	unsigned attenuationMinThreshold : 1;
	unsigned attenuationThresholdForExposureInfo : 1;
	unsigned proximityDurationMaxThresholdInSec : 1;
	unsigned proximityDurationMinThresholdInSec : 1;
	unsigned rollingIdentifierIntervalInMin : 1;
	unsigned rollingIdentifiersCacheExpiryAgeInSec : 1;
} SCD_Struct_EN9;

typedef struct sqlite3* sqlite3Ref;

typedef struct __CFDictionary* CFDictionaryRef;

typedef struct sqlite3_stmt* sqlite3_stmtRef;

typedef struct {
	unsigned field1;
	long long field2;
	unsigned char field3;
	unsigned char field4;
	unsigned char field5;
} SCD_Struct_EN13;

typedef struct {
	unsigned field1;
	double field2;
	unsigned char field3;
	unsigned char field4;
	unsigned short field5;
} SCD_Struct_EN14;

