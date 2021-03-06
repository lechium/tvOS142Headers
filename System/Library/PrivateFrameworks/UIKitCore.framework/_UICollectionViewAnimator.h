/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:22:32 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol _UICollectionViewAnimationContext;
@class _UICollectionViewAnimationContext;

@interface _UICollectionViewAnimator : NSObject <NSCopying> {

	id<_UICollectionViewAnimationContext> _animationContext;
	/*^block*/id _handler;

}

@property (nonatomic,readonly) id handler;                                                      //@synthesize handler=_handler - In the implementation block
@property (nonatomic,retain) _UICollectionViewAnimationContext * animationContext; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)handler;
-(id)initWithHandler:(/*^block*/id)arg1 ;
-(_UICollectionViewAnimationContext *)animationContext;
-(void)setAnimationContext:(_UICollectionViewAnimationContext *)arg1 ;
@end

