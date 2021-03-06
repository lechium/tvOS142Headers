/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:45 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AppStoreKit.framework/AppStoreKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSBundle;

@interface ASKCellularDataInquiry : NSObject {

	NSBundle* _bundle;

}

@property (nonatomic,readonly) NSBundle * bundle;                    //@synthesize bundle=_bundle - In the implementation block
@property (nonatomic,readonly) BOOL isSupported; 
@property (nonatomic,readonly) BOOL isEnabledForDevice; 
@property (nonatomic,readonly) BOOL isEnabledForBundle; 
+(id)settingsURL;
-(id)init;
-(id)initWithBundle:(id)arg1 ;
-(NSBundle *)bundle;
-(BOOL)isSupported;
-(BOOL)isEnabledForDevice;
-(BOOL)isEnabledForBundle;
@end

