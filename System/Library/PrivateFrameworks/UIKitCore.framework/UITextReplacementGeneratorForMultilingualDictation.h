/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:22:42 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UITextReplacementGenerator.h>

@class NSArray;

@interface UITextReplacementGeneratorForMultilingualDictation : UITextReplacementGenerator {

	NSArray* _multilingualAlternatives;

}

@property (nonatomic,readonly) NSArray * multilingualAlternatives;              //@synthesize multilingualAlternatives=_multilingualAlternatives - In the implementation block
-(id)replacements;
-(NSArray *)multilingualAlternatives;
-(id)initWithMultilingualAlternatives:(id)arg1 stringToReplace:(id)arg2 replacementRange:(id)arg3 ;
@end

