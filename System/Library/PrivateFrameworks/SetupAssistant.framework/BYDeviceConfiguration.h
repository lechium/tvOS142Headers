/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:59 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface BYDeviceConfiguration : NSObject {

	NSString* _productVersion;

}

@property (assign,nonatomic) NSString * productVersion;              //@synthesize productVersion=_productVersion - In the implementation block
+(id)currentConfiguration;
-(id)init;
-(NSString *)productVersion;
-(void)setProductVersion:(NSString *)arg1 ;
@end

