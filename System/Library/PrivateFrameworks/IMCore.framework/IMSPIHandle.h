/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:50 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, IMHandle;

@interface IMSPIHandle : NSObject {

	NSString* _address;
	NSString* _countryCode;
	BOOL _isMe;
	IMHandle* _imHandle;
	BOOL _haveFetchedIMHandle;

}

@property (readonly) NSString * address;                   //@synthesize address=_address - In the implementation block
@property (readonly) BOOL isMe;                            //@synthesize isMe=_isMe - In the implementation block
@property (readonly) BOOL isBusiness; 
@property (readonly) NSString * businessName; 
@property (readonly) NSString * countryCode;               //@synthesize countryCode=_countryCode - In the implementation block
@property (readonly) NSString * displayName; 
@property (readonly) NSString * cnContactID; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)handle;
-(NSString *)countryCode;
-(NSString *)address;
-(NSString *)displayName;
-(BOOL)isMe;
-(NSString *)businessName;
-(BOOL)isBusiness;
-(id)initWithAddress:(id)arg1 countryCode:(id)arg2 isMe:(BOOL)arg3 ;
-(NSString *)cnContactID;
@end

