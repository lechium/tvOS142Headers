/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:22:52 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIView.h>

@class NSMutableArray, NSString;

@interface _UIPopoverViewBackgroundComponentView : UIView {

	NSMutableArray* _replicants;
	NSString* _directionSelector;

}

@property (nonatomic,copy) NSString * directionSelector;              //@synthesize directionSelector=_directionSelector - In the implementation block
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(id)replicate;
-(id)_newReplicant;
-(void)setDirectionSelector:(NSString *)arg1 ;
-(void)updateReplicants;
-(NSString *)directionSelector;
@end

