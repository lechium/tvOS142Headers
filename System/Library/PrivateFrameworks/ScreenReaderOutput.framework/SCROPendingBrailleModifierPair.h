/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:10 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ScreenReaderOutput/SCROPendingBrailleEdit.h>

@class NSString, NSArray;

@interface SCROPendingBrailleModifierPair : SCROPendingBrailleEdit {

	NSString* _pendingBraille;
	NSArray* _modifiers;

}

@property (nonatomic,readonly) NSString * pendingBraille;              //@synthesize pendingBraille=_pendingBraille - In the implementation block
@property (nonatomic,readonly) NSArray * modifiers;                    //@synthesize modifiers=_modifiers - In the implementation block
-(NSArray *)modifiers;
-(id)initWithPendingBraille:(id)arg1 modifiers:(id)arg2 ;
-(NSString *)pendingBraille;
@end

