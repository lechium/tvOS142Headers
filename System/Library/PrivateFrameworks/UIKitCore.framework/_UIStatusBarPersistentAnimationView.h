/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:22:38 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIView.h>

@class NSHashTable, NSArray;

@interface _UIStatusBarPersistentAnimationView : UIView {

	NSHashTable* _animations;

}

@property (nonatomic,retain) NSHashTable * animations;                  //@synthesize animations=_animations - In the implementation block
@property (nonatomic,copy) NSArray * persistentAnimations; 
-(id)actionForLayer:(id)arg1 forKey:(id)arg2 ;
-(NSHashTable *)animations;
-(void)setAnimations:(NSHashTable *)arg1 ;
-(void)setPersistentAnimations:(NSArray *)arg1 ;
-(NSArray *)persistentAnimations;
@end
