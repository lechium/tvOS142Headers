/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:47 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/SiriUICore.framework/SiriUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SiriUICore/SiriUICore-Structs.h>
#import <UIKitCore/UIView.h>

@interface SUICFauxFlamesView : UIView {

	long long _style;
	SCD_Struct_SU10 _sequenceAttributes;

}
+(id)_frameImagesForSequence:(SCD_Struct_SU10)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setHidden:(BOOL)arg1 ;
-(void)prewarm;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)start:(BOOL)arg1 ;
-(id)initWithStyle:(long long)arg1 ;
-(BOOL)isAnimating;
-(void)didMoveToSuperview;
-(void)stop:(BOOL)arg1 ;
-(id)initWithStyle:(long long)arg1 screenSize:(long long)arg2 ;
-(void)_cleanupView;
@end

