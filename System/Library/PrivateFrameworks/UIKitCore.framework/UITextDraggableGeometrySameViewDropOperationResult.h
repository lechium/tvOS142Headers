/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:22:41 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class UITextRange;

@interface UITextDraggableGeometrySameViewDropOperationResult : NSObject {

	UITextRange* _resultRange;
	/*^block*/id _targetedPreviewProvider;

}

@property (nonatomic,readonly) UITextRange * resultRange;               //@synthesize resultRange=_resultRange - In the implementation block
@property (nonatomic,readonly) id targetedPreviewProvider;              //@synthesize targetedPreviewProvider=_targetedPreviewProvider - In the implementation block
+(id)resultWithRange:(id)arg1 targetedPreviewProvider:(/*^block*/id)arg2 ;
-(id)targetedPreviewProvider;
-(id)initWithRange:(id)arg1 targetedPreviewProvider:(/*^block*/id)arg2 ;
-(UITextRange *)resultRange;
@end
