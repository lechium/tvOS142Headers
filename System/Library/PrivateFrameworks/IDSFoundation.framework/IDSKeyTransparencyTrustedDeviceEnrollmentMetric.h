/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:12:26 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CUTRTCMetric.h>

@class NSString, NSDictionary;

@interface IDSKeyTransparencyTrustedDeviceEnrollmentMetric : NSObject <CUTRTCMetric> {

	BOOL _cloudKitSuccess;
	BOOL _accountKeySuccess;
	unsigned long long _keyTransparencyVersion;
	NSString* _cloudKitErrorDomain;
	long long _cloudKitErrorCode;
	NSString* _cloudKitUnderlyingErrorDomain;
	long long _cloudKitUnderlyingErrorCode;
	double _cloudKitOperationTimeInterval;
	NSString* _accountKeyErrorDomain;
	long long _accountKeyErrorCode;
	NSString* _accountKeyUnderlyingErrorDomain;
	long long _accountKeyUnderlyingErrorCode;
	double _accountKeyOperationTimeInterval;

}

@property (nonatomic,readonly) unsigned long long keyTransparencyVersion;               //@synthesize keyTransparencyVersion=_keyTransparencyVersion - In the implementation block
@property (nonatomic,readonly) BOOL cloudKitSuccess;                                    //@synthesize cloudKitSuccess=_cloudKitSuccess - In the implementation block
@property (nonatomic,readonly) NSString * cloudKitErrorDomain;                          //@synthesize cloudKitErrorDomain=_cloudKitErrorDomain - In the implementation block
@property (nonatomic,readonly) long long cloudKitErrorCode;                             //@synthesize cloudKitErrorCode=_cloudKitErrorCode - In the implementation block
@property (nonatomic,readonly) NSString * cloudKitUnderlyingErrorDomain;                //@synthesize cloudKitUnderlyingErrorDomain=_cloudKitUnderlyingErrorDomain - In the implementation block
@property (nonatomic,readonly) long long cloudKitUnderlyingErrorCode;                   //@synthesize cloudKitUnderlyingErrorCode=_cloudKitUnderlyingErrorCode - In the implementation block
@property (nonatomic,readonly) double cloudKitOperationTimeInterval;                    //@synthesize cloudKitOperationTimeInterval=_cloudKitOperationTimeInterval - In the implementation block
@property (nonatomic,readonly) BOOL accountKeySuccess;                                  //@synthesize accountKeySuccess=_accountKeySuccess - In the implementation block
@property (nonatomic,readonly) NSString * accountKeyErrorDomain;                        //@synthesize accountKeyErrorDomain=_accountKeyErrorDomain - In the implementation block
@property (nonatomic,readonly) long long accountKeyErrorCode;                           //@synthesize accountKeyErrorCode=_accountKeyErrorCode - In the implementation block
@property (nonatomic,readonly) NSString * accountKeyUnderlyingErrorDomain;              //@synthesize accountKeyUnderlyingErrorDomain=_accountKeyUnderlyingErrorDomain - In the implementation block
@property (nonatomic,readonly) long long accountKeyUnderlyingErrorCode;                 //@synthesize accountKeyUnderlyingErrorCode=_accountKeyUnderlyingErrorCode - In the implementation block
@property (nonatomic,readonly) double accountKeyOperationTimeInterval;                  //@synthesize accountKeyOperationTimeInterval=_accountKeyOperationTimeInterval - In the implementation block
@property (readonly) NSDictionary * dictionaryRepresentation; 
@property (readonly) unsigned short rtcType; 
@property (readonly) NSString * name; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)name;
-(NSString *)description;
-(NSDictionary *)dictionaryRepresentation;
-(unsigned short)rtcType;
-(unsigned long long)keyTransparencyVersion;
-(BOOL)cloudKitSuccess;
-(NSString *)cloudKitErrorDomain;
-(long long)cloudKitErrorCode;
-(NSString *)cloudKitUnderlyingErrorDomain;
-(long long)cloudKitUnderlyingErrorCode;
-(double)cloudKitOperationTimeInterval;
-(BOOL)accountKeySuccess;
-(NSString *)accountKeyErrorDomain;
-(long long)accountKeyErrorCode;
-(NSString *)accountKeyUnderlyingErrorDomain;
-(long long)accountKeyUnderlyingErrorCode;
-(double)accountKeyOperationTimeInterval;
-(id)initWithKeyTransparencyVersion:(unsigned long long)arg1 cloudKitSuccess:(BOOL)arg2 cloudKitErrorDomain:(id)arg3 cloudKitErrorCode:(long long)arg4 cloudKitUnderlyingErrorDomain:(id)arg5 cloudKitUnderlyingErrorCode:(long long)arg6 cloudKitOperationTimeInterval:(double)arg7 accountKeySuccess:(BOOL)arg8 accountKeyErrorDomain:(id)arg9 accountKeyErrorCode:(long long)arg10 accountKeyUnderlyingErrorDomain:(id)arg11 accountKeyUnderlyingErrorCode:(long long)arg12 accountKeyOperationTimeInterval:(double)arg13 ;
@end

