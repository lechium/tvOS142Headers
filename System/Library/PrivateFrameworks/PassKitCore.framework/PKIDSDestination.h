/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:04 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface PKIDSDestination : NSObject {

	NSString* _deviceIdentifier;
	NSString* _name;

}

@property (nonatomic,readonly) NSString * deviceIdentifier;              //@synthesize deviceIdentifier=_deviceIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * name;                          //@synthesize name=_name - In the implementation block
+(id)destinationWithDeviceIdentifier:(id)arg1 name:(id)arg2 ;
-(NSString *)name;
-(id)description;
-(NSString *)deviceIdentifier;
-(id)initWithDeviceIdentifier:(id)arg1 name:(id)arg2 ;
@end

