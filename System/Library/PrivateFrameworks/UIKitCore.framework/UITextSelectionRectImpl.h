/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:22:31 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UITextSelectionRect.h>

@class WebSelectionRect;

@interface UITextSelectionRectImpl : UITextSelectionRect {

	WebSelectionRect* webRect;

}

@property (nonatomic,retain) WebSelectionRect * webRect; 
+(id)rectWithWebRect:(id)arg1 ;
+(id)rectsWithWebRects:(id)arg1 ;
-(void)dealloc;
-(id)range;
-(CGRect)rect;
-(BOOL)containsStart;
-(long long)writingDirection;
-(BOOL)containsEnd;
-(BOOL)isVertical;
-(void)setWebRect:(WebSelectionRect *)arg1 ;
-(id)initWithWebRect:(id)arg1 ;
-(WebSelectionRect *)webRect;
@end

