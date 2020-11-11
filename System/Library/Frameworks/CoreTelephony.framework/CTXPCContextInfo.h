/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:10:35 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreTelephony/CoreTelephony-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSString;

@interface CTXPCContextInfo : NSObject <NSCopying, NSSecureCoding> {

	NSUUID* _uuid;
	NSString* _accountID;
	long long _slotID;
	NSString* _labelID;
	NSString* _label;
	NSString* _phoneNumber;

}

@property (nonatomic,retain) NSString * labelID;                  //@synthesize labelID=_labelID - In the implementation block
@property (nonatomic,retain) NSString * label;                    //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) NSString * phoneNumber;              //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (nonatomic,readonly) NSUUID * uuid;                     //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) NSString * accountID;              //@synthesize accountID=_accountID - In the implementation block
@property (nonatomic,readonly) long long slotID;                  //@synthesize slotID=_slotID - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)contextWithUUID:(id)arg1 andAccountID:(id)arg2 andSlot:(long long)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)context;
-(NSString *)phoneNumber;
-(NSString *)label;
-(NSUUID *)uuid;
-(void)setLabel:(NSString *)arg1 ;
-(long long)slotID;
-(void)setPhoneNumber:(NSString *)arg1 ;
-(NSString *)labelID;
-(void)setLabelID:(NSString *)arg1 ;
-(NSString *)accountID;
-(id)initWithUUID:(id)arg1 andAccountID:(id)arg2 andSlot:(long long)arg3 ;
@end

