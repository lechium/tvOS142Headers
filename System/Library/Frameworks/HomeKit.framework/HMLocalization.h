/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:32 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class HMFUnfairLock, NSArray, NSBundle;

@interface HMLocalization : NSObject {

	HMFUnfairLock* _lock;
	NSArray* _stringTable;
	NSBundle* _bundle;

}

@property (copy,readonly) NSArray * stringTable;              //@synthesize stringTable=_stringTable - In the implementation block
+(id)sharedManager;
-(id)init;
-(NSArray *)stringTable;
-(id)getLocalizedOrCustomString:(id)arg1 ;
-(id)getLocalizedString:(id)arg1 ;
-(void)_updateLocalizedStrings;
-(void)handleLocaleDidChange:(id)arg1 ;
@end

