/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:22:08 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/_UIContextBinding.h>

@class FBSScene, NSString;

@interface _UIContextBinderSubstrate : NSObject <_UIContextBinding> {

	FBSScene* _scene;

}

@property (nonatomic,readonly) FBSScene * scene;                    //@synthesize scene=_scene - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)attachContext:(id)arg1 ;
-(void)detachContext:(id)arg1 ;
-(FBSScene *)scene;
-(id)initWithScene:(id)arg1 ;
@end

