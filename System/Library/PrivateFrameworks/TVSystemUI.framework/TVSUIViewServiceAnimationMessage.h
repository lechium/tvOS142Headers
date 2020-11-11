/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:51 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/TVSystemUI.framework/TVSystemUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVSystemUI/TVSUIViewServiceMessageCodable.h>

@class NSString;

@interface TVSUIViewServiceAnimationMessage : NSObject <TVSUIViewServiceMessageCodable> {

	long long _animation;

}

@property (nonatomic,readonly) long long animation;                 //@synthesize animation=_animation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)animation;
-(id)initWithAnimation:(long long)arg1 ;
-(id)initFromItems:(id)arg1 ;
-(void)encodeToItems:(id)arg1 ;
@end
