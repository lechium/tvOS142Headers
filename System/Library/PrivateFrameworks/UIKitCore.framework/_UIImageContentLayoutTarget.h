/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:22:25 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol _UIImageContentLayoutTarget <NSObject>
@property (nonatomic,readonly) long long semanticContentAttribute; 
@property (nonatomic,readonly) long long contentMode; 
@property (nonatomic,readonly) BOOL _hasContentGravity; 
@property (nonatomic,readonly) double preferredContentScaleFactor; 
@property (nonatomic,readonly) BOOL _layoutShouldFlipHorizontalOrientations; 
@required
-(long long)contentMode;
-(long long)semanticContentAttribute;
-(double)preferredContentScaleFactor;
-(BOOL)_layoutShouldFlipHorizontalOrientations;
-(BOOL)_hasContentGravity;
-(id)_effectForRenderingSource:(id)arg1;

@end

