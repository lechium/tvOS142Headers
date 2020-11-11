/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:59 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/HMDSettingBaseProtocol.h>

@class NSUUID, NSNumber, NSData, NSString;

@interface HMDSettingConstraint : NSObject <HMDSettingBaseProtocol> {

	NSUUID* _identifier;
	NSUUID* _parentIdentifier;
	NSNumber* _type;
	NSNumber* _numberValue;
	NSData* _dataValue;

}

@property (readonly) NSNumber * numberValue;                        //@synthesize numberValue=_numberValue - In the implementation block
@property (readonly) NSData * dataValue;                            //@synthesize dataValue=_dataValue - In the implementation block
@property (copy,readonly) NSUUID * identifier;                      //@synthesize identifier=_identifier - In the implementation block
@property (copy,readonly) NSNumber * type;                          //@synthesize type=_type - In the implementation block
@property (copy,readonly) id value; 
@property (copy,readonly) NSString * name; 
@property (copy,readonly) NSUUID * parentIdentifier;                //@synthesize parentIdentifier=_parentIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(NSString *)name;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSNumber *)type;
-(NSUUID *)identifier;
-(id)value;
-(NSData *)dataValue;
-(NSNumber *)numberValue;
-(NSUUID *)parentIdentifier;
-(id)initWithIdentifier:(id)arg1 parentIdentifier:(id)arg2 type:(id)arg3 numberValue:(id)arg4 dataValue:(id)arg5 ;
@end

