/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:11 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <TVMLKit/TVMLKit-Structs.h>
@class UIWindow;

@interface _TVWindowSizeAdaptor : NSObject {

	UIWindow* _window;

}

@property (nonatomic,__weak,readonly) UIWindow * window;               //@synthesize window=_window - In the implementation block
@property (nonatomic,readonly) CGSize adjustedWindowSize; 
-(BOOL)update;
-(UIWindow *)window;
-(id)initWithWindow:(id)arg1 ;
-(CGSize)adjustedWindowSize;
@end
